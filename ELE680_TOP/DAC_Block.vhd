----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:29:00 03/14/2017 
-- Design Name: 
-- Module Name:    DAC_Block - Behavioral 
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

entity DAC_Block is
    Port ( D_DAC_i : in  STD_LOGIC_VECTOR (13 downto 0);
			  ATT_i : in STD_LOGIC_VECTOR (3 downto 0);
           D_o : out  STD_LOGIC_VECTOR (11 downto 0);
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC);
end DAC_Block;

architecture Behavioral of DAC_Block is
signal D_DAC_s : std_logic_vector (13 downto 0);
begin
process(CLK_i,RST_i)
begin
	IF(rising_edge(CLK_i)) THEN
		IF (RST_i = '0') THEN
			D_DAC_s <= (others=>'0');
		ELSE
			D_DAC_s <= D_DAC_i;
		END IF;
	END IF;
end process;
D_o <= D_DAC_s (11 downto 0);
end Behavioral;

