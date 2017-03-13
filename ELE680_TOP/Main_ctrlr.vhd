----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:45:38 02/21/2017 
-- Design Name: 
-- Module Name:    Main_ctrlr - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Main_ctrlr is
    Port ( D_io : inout  STD_LOGIC_VECTOR (7 downto 0);
           att_o : out  STD_LOGIC_VECTOR (3 downto 0);
           GEN_RUN_o : out  STD_LOGIC;
           mem_wr_ack_i : in  STD_LOGIC;
           D_mem_o : out  STD_LOGIC_VECTOR (13 downto 0);
           wr_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
           inc_rd_addr_o : out  STD_LOGIC_VECTOR (13 downto 0);
           max_rd_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
           smp_rdy_o : out  STD_LOGIC;
           ft_wr_done_i : in  STD_LOGIC;
           ft_rd_done_i : in  STD_LOGIC;
           ft_wr_en_o : out  STD_LOGIC;
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC;
           CLK_DAC_o : out  STD_LOGIC);
end Main_ctrlr;

architecture Behavioral of Main_ctrlr is

--Définitions des états principaux
	TYPE Top_State_type IS (IDLE_Top, Start, read_start, read_conf, wr_addr_top, 
									data_load_top, max_rd_addr_top, gen_stop_top, 
									gen_start_top, sig_att_top, jump_rd_addr_top,
									f_div_top,
									ERROR);
--Définitins des sous-états de chaques commandes
	TYPE Bot_State_type IS (IDLE, read_qty, read_byte1, read_byte2, wr_confirm, MEM_WRITE, inc_wr_addr,ERROR);
					
	--Definitons des etats
	--IDLE : Demarrage du systeme, remise de tous les registres internes a 0
	--Start: Etat initial lorsque le systeme et en route avant de lire une nouvelle commande
	--read_start: Attend l'octet de debut d'une trame de communication
	--read_conf: Lit la configuration du systeme avant de choisir la bonne routine a effectuer
	--sig_att_top: Demarre la FSM pour mettre a jour la valeur de l'attenuation
	
--//////////////////////////////--
	signal Top_State : Top_State_type;
	signal Sub_State : Bot_State_type;
	
	signal D_io_s, nb_byte : STD_LOGIC_VECTOR(7 downto 0);
	signal temp_buf_2_bytes : STD_LOGIC_VECTOR(15 downto 0);
	signal wr_addr_s : STD_LOGIC_VECTOR(14 downto 0);
	signal last_ft_rd_done_i,start_byte_read, GEN_RUN_s : STD_LOGIC;
	signal fdiv_s : STD_LOGIC_VECTOR(4 downto 0);
begin

--TOP FSM PROCESS
	PROCESS(CLK_i, RST_i)
	BEGIN
	IF (RST_i = '0') THEN
		Top_State <= IDLE_Top;		
	ELSIF (rising_edge(clk_i)) THEN
		CASE Top_State IS
			WHEN IDLE_Top =>
				Top_State <= Start;
				start_byte_read <= '0';
			WHEN Start =>
				Top_State <= read_start;
				start_byte_read <= '0';
			WHEN read_start =>
				IF (ft_rd_done_i = '1' AND D_io = x"71") THEN
					Top_State <= read_conf;
				end IF;
			WHEN read_conf =>
	--Tous les etats de configurations possibles
				IF (ft_rd_done_i = '1') THEN
					IF (D_io = x"80") THEN
						Top_State <= wr_addr_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"81") THEN
						Top_State <= data_load_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"82") THEN
						Top_State <= max_rd_addr_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"83") THEN
						Top_State <= gen_stop_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"84") THEN
						Top_State <= gen_start_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"85") THEN
						Top_State <= sig_att_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"86") THEN
						Top_State <= jump_rd_addr_top;
						start_byte_read <= '1';
					ELSIF (D_io = x"87") THEN
						Top_State <= f_div_top;
						start_byte_read <= '1';
					end IF;
				end IF;
	----------------------------------------------
	--Les conditions de passages a start de chaques etats
			WHEN wr_addr_top =>
				IF (ft_wr_done_i = '1' AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;
			WHEN data_load_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;
			WHEN max_rd_addr_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;
			WHEN gen_stop_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;
			WHEN gen_start_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;	
			WHEN sig_att_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;
			WHEN jump_rd_addr_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;		
			WHEN f_div_top =>
				IF (ft_wr_done_i = '1'  AND Sub_State = wr_confirm) THEN
					Top_State <= Start;
				end IF;
	--------------------------------------------------
			WHEN OTHERS =>
				Top_State <= ERROR;
		end CASE;
	end IF;
	end PROCESS;

--SUB FSM-write PROCESS
	PROCESS(CLK_i, RST_i)
	BEGIN
	IF (RST_i = '0') THEN
		Sub_State <= IDLE;
		temp_buf_2_bytes <= x"0000";
	ELSIF (rising_edge(clk_i)) THEN
		last_ft_rd_done_i <= ft_rd_done_i;
		CASE Sub_State IS
			WHEN IDLE =>
				ft_wr_en_o <= '0';
				IF (start_byte_read = '1' AND ft_rd_done_i = '1') THEN
					Sub_State <= read_qty;
					D_io_s <= D_io;
				end IF;
			WHEN read_qty =>		
				IF (ft_rd_done_i = '1' AND last_ft_rd_done_i = '0') THEN
					nb_byte <= D_io + '1';
					Sub_State <= read_byte1;
				end IF;
			WHEN read_byte1 =>		
				IF (ft_rd_done_i = '1' AND last_ft_rd_done_i = '0') THEN
					temp_buf_2_bytes(15 downto 8) <= D_io;
					Sub_State <= read_byte2;
				end IF;
			WHEN read_byte2 =>
				IF (ft_rd_done_i = '1' AND last_ft_rd_done_i = '0') THEN
					temp_buf_2_bytes(7 downto 0) <= D_io;	
					IF (Top_State = data_load_top) THEN
						Sub_State <= MEM_WRITE;
					ELSE
						Sub_State <= wr_confirm;
					end IF;
				end IF;
			WHEN MEM_WRITE =>
				smp_rdy_o <= '1';
				D_mem_o <= temp_buf_2_bytes(13 downto 0);
				IF (mem_wr_ack_i = '1') THEN
					Sub_State <= inc_wr_addr;
				ELSE
					Sub_State <= MEM_WRITE; -- repeat until sample has been written to memory
				end IF;
			WHEN inc_wr_addr=>
				smp_rdy_o <= '0';
				nb_byte <= nb_byte - x"2";
				wr_addr_s <= wr_addr_s + '1';
				IF (nb_byte = x"FF") THEN
					Sub_State <= wr_confirm;
				ELSE
					Sub_State <= read_byte1;
				end IF;
			WHEN wr_confirm =>
				ft_wr_en_o <= '1';
				IF (ft_wr_done_i = '1') THEN
					Sub_State <= IDLE;
				end IF;
			WHEN OTHERS =>
				Sub_State <= ERROR;
		end CASE;
		--choose what to do with buffer according to top command state
		IF (Sub_State = wr_confirm) THEN
			CASE Top_State	IS
				WHEN wr_addr_top =>
					D_io_s <= x"80";
					wr_addr_s <= temp_buf_2_bytes(14 downto 0);
				WHEN data_load_top =>
					D_io_s <= x"81";
					D_mem_o <= temp_buf_2_bytes(13 downto 0);
				WHEN max_rd_addr_top =>	
					D_io_s <= x"82";
					max_rd_addr_o <= temp_buf_2_bytes(14 downto 0);
				WHEN gen_stop_top =>	
					D_io_s <= x"83";
					GEN_RUN_s <= '0';
				WHEN gen_start_top =>	
					D_io_s <= x"84";
					GEN_RUN_s <= '1';
				WHEN sig_att_top =>	
					D_io_s <= x"85";
					att_o <= temp_buf_2_bytes(3 downto 0);
				WHEN jump_rd_addr_top =>	
					D_io_s <= x"86";
					inc_rd_addr_o <= temp_buf_2_bytes(13 downto 0);
				WHEN f_div_top =>	
					D_io_s <= x"87";
					fdiv_s <= temp_buf_2_bytes(4 downto 0);
				WHEN OTHERS =>
				Sub_State <= ERROR;
			end CASE;
		end IF;	
	end IF;
	end PROCESS;
--Outputs
D_io <= D_io_s WHEN (Sub_State = wr_confirm AND RST_i = '1') ELSE ("ZZZZZZZZ");
wr_addr_o <= wr_addr_s;
GEN_RUN_o <= GEN_RUN_s;
CLK_DAC_o <= CLK_i;
end Behavioral;

