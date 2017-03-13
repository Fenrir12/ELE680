--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:46:03 02/28/2017
-- Design Name:   
-- Module Name:   /home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/FTDI_Block_TB.vhd
-- Project Name:  ELE680_TOP
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FTDI_Block
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
 
ENTITY FTDI_Block_TB IS
END FTDI_Block_TB;
 
ARCHITECTURE behavior OF FTDI_Block_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FTDI_Block
    PORT(
         D_ft_io : INOUT  std_logic_vector(7 downto 0);
         RXF_i : IN  std_logic;
         TXE_i : IN  std_logic;
         ft_wr_en_i : IN  std_logic;
         RST_i : IN  std_logic;
         CLK_i : IN  std_logic;
         D_io : INOUT  std_logic_vector(7 downto 0);
         RD_o : OUT  std_logic;
         WR_o : OUT  std_logic;
         ft_wr_done_o : OUT  std_logic;
         ft_rd_done_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal RXF_i : std_logic := '0';
   signal TXE_i : std_logic := '0';
   signal ft_wr_en_i : std_logic := '0';
   signal RST_i : std_logic := '0';
   signal CLK_i : std_logic := '0';

	--BiDirs
   signal D_ft_io : std_logic_vector(7 downto 0);
   signal D_io : std_logic_vector(7 downto 0);

 	--Outputs
   signal RD_o : std_logic;
   signal WR_o : std_logic;
   signal ft_wr_done_o : std_logic;
   signal ft_rd_done_o : std_logic;

   -- Clock period definitions
   constant CLK_i_period : time := 3 ns;
   type trame1 is array (0 to 22) of std_logic_vector(7 downto 0);
	type trame2 is array (0 to 4) of std_logic_vector(7 downto 0);
	constant exemple 				: trame1 := (x"71",x"81",x"13",x"00",x"00",x"00",x"11",x"00",x"22",x"00",x"33",x"00",x"44",x"00",x"55",x"00",x"66",x"00",x"77",x"00",x"88",x"00",x"99");
	constant adresse_ecriture 	: trame2 := (x"71",x"80",x"01",x"00",x"00");
	constant chargement 			: trame1 := (x"71",x"81",x"13",x"00",x"00",x"06",x"66",x"0C",x"CC",x"13",x"33",x"19",x"99",x"20",x"00",x"26",x"66",x"2C",x"CC",x"33",x"33",x"39",x"99");
	constant adresse_max 		: trame2 := (x"71",x"82",x"01",x"00",x"0A");
	constant arret 				: trame2 := (x"71",x"83",x"01",x"00",x"00");
	constant demarrage 			: trame2 := (x"71",x"84",x"01",x"00",x"00");
	constant attenuation 		: trame2 := (x"71",x"85",x"01",x"00",x"00");
	constant saut 					: trame2 := (x"71",x"86",x"01",x"00",x"01");
	constant diviseur 			: trame2 := (x"71",x"87",x"01",x"00",x"02");
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FTDI_Block PORT MAP (
          D_ft_io => D_ft_io,
          RXF_i => RXF_i,
          TXE_i => TXE_i,
          ft_wr_en_i => ft_wr_en_i,
          RST_i => RST_i,
          CLK_i => CLK_i,
          D_io => D_io,
          RD_o => RD_o,
          WR_o => WR_o,
          ft_wr_done_o => ft_wr_done_o,
          ft_rd_done_o => ft_rd_done_o
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
	
      -- hold reset state for 200 ns.
		TXE_i <= '1';
		D_ft_io <= "00000000";	--Init
		RXF_i <= '1';
		RST_i <= '0';
		wait for 200 ns;
		RST_i <= '1';			--END of reset
		
				
		--wait for clk_period*2;
		D_io <= "ZZZZZZZZ";
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
		D_io <= x"80";
		TXE_i <= '0';
		wait for 30 ns;
		ft_wr_en_i <= '1';
		wait until WR_o = '0';
		--wait until state = "0000";
		ft_wr_en_i <= '0';
		TXE_i <= '1';
		
		
		
		D_io <= "ZZZZZZZZ";
		for i in 0 to 22 loop
			RXF_i  <= '0';
			wait until RD_o = '0';
			wait for 14 ns;
			D_ft_io <= Chargement(i);
			wait until RD_o = '1';
			wait for 14 ns;
			RXF_i  <= '1';
			wait for 49 ns;
		end loop;
		
		
		D_ft_io <= "ZZZZZZZZ";
		D_io <= x"81";
		TXE_i <= '0';
		wait for 30 ns;
		ft_wr_en_i <= '1';
		wait until WR_o = '0';
		--wait until state = "0000";
		ft_wr_en_i <= '0';
      wait;
   end process;

END;
