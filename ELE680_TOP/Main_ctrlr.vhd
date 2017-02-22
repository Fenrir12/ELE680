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
	TYPE Bot_State_type IS (IDLE, wr_addr, data_load, max_rd_addr, gen_stop,  
									gen_start, sig_att, jump_rd_addr,f_div,		
									read_qty, wr_confirm,
									--states for wr_addr
									read_wr_addr_byte1, read_wr_addr_byte2,
									--other states to come
									ERROR
									);
					
	--Definitons des etats
	--IDLE : Demarrage du systeme, remise de tous les registres internes a 0
	--Start: Etat initial lorsque le systeme et en route avant de lire une nouvelle commande
	--read_start: Attend l'octet de debut d'une trame de communication
	--read_conf: Lit la configuration du systeme avant de choisir la bonne routine a effectuer
	--sig_att_top: Demarre la FSM pour mettre a jour la valeur de l'attenuation
	
--//////////////////////////////--
	signal Top_State : Top_State_type;
	signal Sub_State : Bot_State_type;
	
	signal D_io_out : STD_LOGIC_VECTOR(7 downto 0);
	signal wr_addr_s : STD_LOGIC_VECTOR (14 downto 0);
begin

--TOP FSM PROCESS
	PROCESS(CLK_i, RST_i)
	BEGIN
	IF (RST_i = '1') THEN
		Top_State <= IDLE_Top;
	ELSIF (rising_edge(clk_i)) THEN
		CASE Top_State IS
			WHEN IDLE_Top =>
				Top_State <= Start;
			WHEN Start =>
				Top_State <= read_start;
			WHEN read_start =>
				IF (ft_rd_done_i = '1' AND D_io = x"71") THEN
					Top_State <= read_conf;
				end IF;
			WHEN read_conf =>
	--Tous les etats de configurations possibles
				IF (ft_rd_done_i = '1') THEN
					IF (D_io = x"80") THEN
						Top_State <= wr_addr_top;
					ELSIF (D_io = x"81") THEN
						Top_State <= data_load_top;
					ELSIF (D_io = x"82") THEN
						Top_State <= max_rd_addr_top;
					ELSIF (D_io = x"83") THEN
						Top_State <= gen_stop_top;
					ELSIF (D_io = x"84") THEN
						Top_State <= gen_start_top;
					ELSIF (D_io = x"85") THEN
						Top_State <= sig_att_top;
					ELSIF (D_io = x"86") THEN
						Top_State <= jump_rd_addr_top;
					ELSIF (D_io = x"87") THEN
						Top_State <= f_div_top;
					end IF;
				end IF;
	----------------------------------------------
	--Les conditions de passages a start de chaques etats
			WHEN wr_addr_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;
			WHEN data_load_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;
			WHEN max_rd_addr_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;
			WHEN gen_stop_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;
			WHEN gen_start_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;	
			WHEN sig_att_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;
			WHEN jump_rd_addr_top =>
				IF (ft_wr_done_i = '1') THEN
					Top_State <= Start;
				end IF;		
			WHEN f_div_top =>
				IF (ft_wr_done_i = '1') THEN
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
	IF (RST_i = '1') THEN
		Sub_State <= IDLE;
	ELSIF (rising_edge(clk_i)) THEN
		CASE Sub_State IS
			WHEN IDLE =>
				Sub_State <= wr_addr;
			WHEN wr_addr =>
				ft_wr_en_o <= '0';
				IF (D_io = x"80" and ft_rd_done_i = '1') THEN
					Sub_State <= read_qty;
				end IF;
			WHEN read_qty =>
				IF (D_io = x"01" and ft_rd_done_i = '1') THEN
					Sub_State <= read_wr_addr_byte1;
				end IF;
			WHEN read_wr_addr_byte1 =>
				IF (ft_rd_done_i = '1') THEN
					wr_addr_s (14 downto 8) <= D_io;
					Sub_State <= read_wr_addr_byte2;
				end IF;
			WHEN read_wr_addr_byte2 =>
				IF (ft_rd_done_i = '1') THEN
					wr_addr_s (7 downto 0) <= D_io;
					Sub_State <= wr_confirm;
				end IF;
			WHEN wr_confirm =>
				D_io_out <= x"80";
				ft_wr_en_o <= '1';
				IF (ft_wr_done_i = '1') THEN
					Sub_State <= wr_addr;
				end IF;
			WHEN OTHERS =>
				Sub_State <= ERROR;
		end CASE;
	end IF;
	end PROCESS;

--Outputs
D_io <= D_io_out when (Sub_State = wr_confirm AND RST_i = '0') else (others=>'Z'); --State will be changed by normal write state in sub-fsm

end Behavioral;

