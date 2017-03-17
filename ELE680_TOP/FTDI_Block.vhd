----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:33:00 02/28/2017 
-- Design Name: 
-- Module Name:    FTDI_Block - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;
--use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity FTDI_Block is
    Generic( clk_period : integer); --ns
    Port ( D_ft_io : inout  STD_LOGIC_VECTOR (7 downto 0);
           RXF_i : in  STD_LOGIC;
           TXE_i : in  STD_LOGIC;
           ft_wr_en_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC;
           D_io : inout  STD_LOGIC_VECTOR (7 downto 0);
           RD_o : out  STD_LOGIC;
           WR_o : out  STD_LOGIC;
           ft_wr_done_o : out  STD_LOGIC;
           ft_rd_done_o : out  STD_LOGIC);
end FTDI_Block;

architecture Behavioral of FTDI_Block is
	TYPE read_state_type IS (read_init, wait_for_dat, read_dat, read_done);
	TYPE write_state_type IS (write_init, wait_for_write, write_time, write_done);
	
	signal read_state : read_state_type;
	signal write_state : write_state_type;
	signal counter_s : signed(7 downto 0);
	signal D_io_s : STD_LOGIC_VECTOR(7 downto 0);
	
	
begin
--process for read FSM
PROCESS(CLK_i, RST_i)
BEGIN	
	IF (rising_edge(clk_i)) THEN
		IF (RST_i = '0') THEN
			read_state <= read_init;	
			write_state <= write_init;
		ELSE
			CASE read_state IS
				WHEN read_init =>
					ft_wr_done_o <= '0';	
					D_io_s <= x"00";
					counter_s <= (others=>'0');
					RD_o <= '1';			
					IF (RXF_i = '0' AND write_state = write_init) THEN
						read_state <= wait_for_dat;
					end IF;
				WHEN wait_for_dat =>
					RD_o <= '0';
					counter_s <= counter_s + clk_period;
					IF (counter_s  > (14-clk_period)) THEN
						read_state <= read_dat;
					end IF;
				WHEN read_dat =>
					counter_s <= counter_s + clk_period;
					D_io_s <= D_ft_io;
					IF (counter_s  > (28-clk_period))THEN
						read_state <= read_done;
						RD_o <= '1';
						ft_rd_done_o <= '1';
					end IF;
				WHEN read_done =>
					counter_s <= counter_s + clk_period;
					IF (counter_s  > (77-clk_period))THEN
						counter_s <= "00000000";
						read_state <= read_init;
						ft_rd_done_o <= '0';
						RD_o <= '1';
					end IF;
			end CASE;
			--case for write
			CASE write_state IS
				WHEN write_init =>
					ft_wr_done_o <= '0';	
					WR_o <= '1';
					IF (TXE_i = '0' AND ft_wr_en_i = '1' AND read_state = read_init) THEN
						counter_s <= counter_s + clk_period;
						write_state <= wait_for_write;
						D_io_s <= D_io;
					end IF;
				WHEN wait_for_write =>
					D_io_s <= D_io;
					counter_s <= counter_s + clk_period;
					--IF (clk_period<=5) THEN
						IF (counter_s  > (5-clk_period)) THEN
							write_state <= write_time;
							WR_o <= '0';
						end IF;
--					ELSE
--						IF (counter_s  > (clk_period)) THEN
--							write_state <= write_time;
--							WR_o <= '0';
--						end IF;
					--end IF;
				WHEN write_time =>
					D_io_s <= D_io;
					counter_s <= counter_s + clk_period;
					IF (counter_s  > (35-clk_period)) THEN
						write_state <= write_done;
						WR_o <= '1';
						ft_wr_done_o <= '1';
					end IF;
				WHEN write_done =>
					counter_s <= counter_s + clk_period;
					IF (counter_s  > (85-clk_period)) THEN
						counter_s <= "00000000";
						write_state <= write_init;
						ft_wr_done_o <= '0';
					end IF;
			end CASE;
		end IF;
	end IF;
end PROCESS;
	--D_ft_io <= D_io_s when (write_state = write_time AND RST_i = '1') else (others=>'Z');
	D_ft_io <= D_io_s when (read_state = read_init AND RST_i = '1' AND counter_s<=40 AND counter_s > 0) else (others=>'Z');
	D_io <= D_io_s when (read_state = read_done AND RST_i = '1') else (others=>'Z');
end Behavioral;

