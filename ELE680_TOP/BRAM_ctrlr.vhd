----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:13:39 03/07/2017 
-- Design Name: 
-- Module Name:    BRAM_ctrlr - Behavioral 
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

entity BRAM_ctrlr is
    Port ( D_mem_i : in  STD_LOGIC_VECTOR (13 downto 0);
           wr_addr_i : in  STD_LOGIC_VECTOR (14 downto 0);
			  inc_rd_addr_o : in  std_logic_vector(13 downto 0);
			  max_rd_addr_o : in  std_logic_vector(14 downto 0);
           smp_rdy_i : in  STD_LOGIC;
			  GEN_RUN_i : in  STD_LOGIC;
			  D_SRAM_io : inout  STD_LOGIC_VECTOR (13 downto 0);
			  D_DAC_o : out  STD_LOGIC_VECTOR (13 downto 0);
			  mem_wr_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
			  mem_wr_ack_o : out  STD_LOGIC;
			  WEN_o : out  STD_LOGIC_VECTOR (0 downto 0);
			  CLK_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC);
end BRAM_ctrlr;

architecture Behavioral of BRAM_ctrlr is

TYPE mem_write_state_type IS (MEM_WRITE, send_read_req, write_bram, ERROR); 
signal mem_write_state : mem_write_state_type;
signal D_SRAM_io_s : std_logic_vector(13 downto 0);
signal wr_addr_s : std_logic_vector(14 downto 0);
signal wr_en_s : std_logic_vector(0 downto 0);
signal read_addr_s : std_logic_vector(14 downto 0);
signal smp_rdy_past : std_logic;

begin

	PROCESS(CLK_i, RST_i)
	BEGIN
		IF (RST_i = '0') THEN
			mem_write_state <= MEM_WRITE;
		ELSIF (rising_edge(CLK_i)) THEN
			--Write Case
			smp_rdy_past <= smp_rdy_i;
			CASE mem_write_state IS
				WHEN MEM_WRITE =>
					mem_wr_ack_o <= '0';
					wr_en_s <= "0";
					IF (smp_rdy_i = '1' AND smp_rdy_past = '0') THEN
						mem_write_state <= send_read_req;
					end IF;
				WHEN send_read_req =>
					wr_addr_s <= wr_addr_i;
					D_SRAM_io_s <= D_mem_i;
					mem_write_state <= write_bram;
				WHEN  write_bram =>
					D_SRAM_io_s <= D_mem_i;
					wr_en_s <= "1";
					mem_wr_ack_o <= '1';
					mem_write_state <= MEM_WRITE;
					IF (smp_rdy_i = '0') THEN
						mem_write_state <= MEM_WRITE;
					end IF;
				WHEN OTHERS=>
					mem_write_state <= ERROR;
			end CASE;
			--Read Case
		end IF;
	end PROCESS;
	D_SRAM_io <= D_SRAM_io_s when (GEN_RUN_i = '0' AND RST_i = '1') else (others=>'Z');
	mem_wr_addr_o <= wr_addr_s;
	WEN_o <= wr_en_s;
end Behavioral;
