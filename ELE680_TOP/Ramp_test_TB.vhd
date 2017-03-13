--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:44:56 03/07/2017
-- Design Name:   
-- Module Name:   /home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/Ramp_test_TB.vhd
-- Project Name:  ELE680_TOP
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Ramp_test
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Ramp_test_TB IS
END Ramp_test_TB;
 
ARCHITECTURE behavior OF Ramp_test_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Ramp_test
    PORT(
         CLK_i : IN  std_logic;
         RST_i : IN  std_logic;
         CLK_DAC_o : OUT  std_logic;
         D_o : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal RST_i : std_logic := '0';
   signal CLK_DAC_o : std_logic := '0';

 	--Outputs
   signal CLK_i : std_logic;
   signal D_o : std_logic_vector(11 downto 0);

   -- Clock period definitions
   constant CLK_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Ramp_test PORT MAP (
          CLK_i => CLK_i,
          RST_i => RST_i,
          CLK_DAC_o => CLK_DAC_o,
          D_o => D_o
        );

   -- Clock process definitions
   CLK_i_process :process
   begin
		CLK_i <= '0';
		wait for CLK_i_period/2;
		CLK_i <= '1';
		wait for CLK_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		RST_i <= '0';
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		RST_i <= '1';
      wait for CLK_i_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
