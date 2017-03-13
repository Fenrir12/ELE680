----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:38:12 03/07/2017 
-- Design Name: 
-- Module Name:    Ramp_test - Behavioral 
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

entity Ramp_test is
    Port ( CLK_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC;
           CLK_DAC_o : out  STD_LOGIC;
           D_o : out  STD_LOGIC_VECTOR (11 downto 0));
end Ramp_test;

architecture Behavioral of Ramp_test is
signal counter_s : std_logic_vector(11 downto 0);
signal clk_dac_s_1, clk_dac_s_2 : std_logic;
begin
process(CLK_i)
begin
	IF (RST_i = '0') THEN
		counter_s <= (others => '0');
	ELSIF (rising_edge(CLK_i)) then
		counter_s <= counter_s + '1';
		clk_dac_s_1 <= counter_s(2);
	ELSIF (falling_edge(CLK_i)) then
		clk_dac_s_2 <= counter_s(2);
	end IF;
end process;
D_o <= counter_s when (RST_i = '1') else (others=>'0');
CLK_DAC_o <= not (clk_dac_s_1 AND clk_dac_s_2);
end Behavioral;

