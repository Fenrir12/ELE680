--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:52:51 03/14/2017
-- Design Name:   
-- Module Name:   /home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/MAIN_TOP_TB.vhd
-- Project Name:  ELE680_TOP
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Main_TOP
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
 
ENTITY MAIN_TOP_TB IS
END MAIN_TOP_TB;
 
ARCHITECTURE behavior OF MAIN_TOP_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Main_TOP
    PORT(
         D_ft_io : INOUT  std_logic_vector(7 downto 0);
         RXF_i : IN  std_logic;
         TXE_i : IN  std_logic;
         RST_i : IN  std_logic;
         CLK_i : IN  std_logic;
         D_o : OUT  std_logic_vector(11 downto 0);
         LED_o : OUT  std_logic_vector(11 downto 0);
         DEBUG_o : OUT  std_logic_vector(11 downto 0);
         RD_o : OUT  std_logic;
         WR_o : OUT  std_logic;
         CLK_dac_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal RXF_i : std_logic := '0';
   signal TXE_i : std_logic := '0';
   signal RST_i : std_logic := '0';
   signal CLK_i : std_logic := '0';

	--BiDirs
   signal D_ft_io : std_logic_vector(7 downto 0);

 	--Outputs
   signal D_o : std_logic_vector(11 downto 0);
   signal LED_o : std_logic_vector(11 downto 0);
   signal DEBUG_o : std_logic_vector(11 downto 0);
   signal RD_o : std_logic;
   signal WR_o : std_logic;
   signal CLK_dac_o : std_logic;

   -- Clock period definitions
   constant CLK_i_period : time := 9 ns;
   constant CLK_dac_o_period : time := 9 ns;
	
	type trame1 is array (0 to 26) of std_logic_vector(7 downto 0);
	type trame2 is array (0 to 4) of std_logic_vector(7 downto 0);
	--constant exemple 				: trame1 := (x"71",x"81",x"13",x"00",x"00",x"00",x"11",x"00",x"22",x"00",x"33",x"00",x"44",x"00",x"55",x"00",x"66",x"00",x"77",x"00",x"88",x"00",x"99");
	constant adresse_ecriture 	: trame2 := (x"71",x"80",x"01",x"00",x"00");
	constant chargement 			: trame1 := (x"71",x"81",x"17",x"00",x"00",x"00",x"01",x"00",x"02",x"00",x"03",x"00",x"04",x"00",x"05",x"00",x"06",x"00",x"05",x"00",x"04",x"00",x"03",x"00",x"02",x"00",x"01");
	constant adresse_max 		: trame2 := (x"71",x"82",x"01",x"00",x"0C");
	constant arret 				: trame2 := (x"71",x"83",x"01",x"00",x"00");
	constant demarrage 			: trame2 := (x"71",x"84",x"01",x"00",x"00");
	constant attenuation 		: trame2 := (x"71",x"85",x"01",x"00",x"00");
	constant saut 					: trame2 := (x"71",x"86",x"01",x"00",x"05");
	constant diviseur 			: trame2 := (x"71",x"87",x"01",x"00",x"02");

 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Main_TOP PORT MAP (
          D_ft_io => D_ft_io,
          RXF_i => RXF_i,
          TXE_i => TXE_i,
          RST_i => RST_i,
          CLK_i => CLK_i,
          D_o => D_o,
          LED_o => LED_o,
          DEBUG_o => DEBUG_o,
          RD_o => RD_o,
          WR_o => WR_o,
          CLK_dac_o => CLK_dac_o
        );

   -- Clock process definitions
   CLK_i_process :process
   begin
		CLK_i <= '0';
		wait for CLK_i_period/2;
		CLK_i <= '1';
		wait for CLK_i_period/2;
   end process;
 
   CLK_dac_o_process :process
   begin
		CLK_dac_o <= '0';
		wait for CLK_dac_o_period/2;
		CLK_dac_o <= '1';
		wait for CLK_dac_o_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
     -- hold reset state for 200 ns.
		TXE_i <= '1';
		D_ft_io <= "00000000";	--Init
		RXF_i <= '1';
		RST_i <= '0';
		wait for 200 ns;
		RST_i <= '1';			--END of reset
		
				
		--wait for clk_period*2;
		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= adresse_ecriture(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		--wait until state = "0000";
		
		TXE_i <= '1';
		for i in 0 to 26 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= chargement(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		--wait until state = "0000";
		TXE_i <= '1';	
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= adresse_max(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		--wait until state = "0000";
		
		TXE_i <= '1';
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o= '0';
			wait for 14 ns;
			D_ft_io <= attenuation(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		--wait until state = "0000";
		TXE_i <= '1';
--				
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= saut(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i<= '0';
		wait until WR_o = '0';
		--wait until state = "0000";
		TXE_i <= '1';
--		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= diviseur(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
		--wait until state = "0000";
--		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= demarrage(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
--				
		wait for CLK_i_period * 30;
		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= arret(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
		
				for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= demarrage(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
--				
		wait for CLK_i_period * 30;
		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= arret(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
		
				for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= demarrage(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
--				
		wait for CLK_i_period * 30;
		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= arret(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
		
				for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= demarrage(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
--				
		wait for CLK_i_period * 30;
		
		for i in 0 to 4 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= arret(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		D_ft_io <= "ZZZZZZZZ";
		TXE_i <= '0';
		wait until WR_o = '0';
		TXE_i <= '1';
		wait;
      -- insert stimulus here 
   end process;

END;
