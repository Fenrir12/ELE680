--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:22:56 03/14/2017
-- Design Name:   
-- Module Name:   /home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/BRAM_ctrlr_TB.vhd
-- Project Name:  ELE680_TOP
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BRAM_ctrlr
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
USE ieee.numeric_std.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY BRAM_ctrlr_TB IS
END BRAM_ctrlr_TB;
 
ARCHITECTURE behavior OF BRAM_ctrlr_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BRAM_ctrlr
    PORT(
         D_mem_i : IN  std_logic_vector(13 downto 0);
         wr_addr_i : IN  std_logic_vector(14 downto 0);
         inc_rd_addr_i : IN  std_logic_vector(13 downto 0);
         max_rd_addr_i : IN  std_logic_vector(14 downto 0);
         smp_rdy_i : IN  std_logic;
         GEN_RUN_i : IN  std_logic;
         D_SRAM_i : IN  std_logic_vector(13 downto 0);
         D_SRAM_o : OUT  std_logic_vector(13 downto 0);
         D_DAC_o : OUT  std_logic_vector(13 downto 0);
         mem_wr_addr_o : OUT  std_logic_vector(14 downto 0);
         mem_rd_addr_o : OUT  std_logic_vector(14 downto 0);
         mem_wr_ack_o : OUT  std_logic;
         WEN_o : OUT  std_logic_vector(0 downto 0);
         CLK_i : IN  std_logic;
         RST_i : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal D_mem_i : std_logic_vector(13 downto 0) := (others => '0');
   signal wr_addr_i : std_logic_vector(14 downto 0) := (others => '0');
   signal inc_rd_addr_i : std_logic_vector(13 downto 0) := (others => '0');
   signal max_rd_addr_i : std_logic_vector(14 downto 0) := (others => '0');
   signal smp_rdy_i : std_logic := '0';
   signal GEN_RUN_i : std_logic := '0';
   signal D_SRAM_i : std_logic_vector(13 downto 0) := (others => '0');
   signal CLK_i : std_logic := '0';
   signal RST_i : std_logic := '0';

 	--Outputs
   signal D_SRAM_o : std_logic_vector(13 downto 0);
   signal D_DAC_o : std_logic_vector(13 downto 0);
   signal mem_wr_addr_o : std_logic_vector(14 downto 0);
   signal mem_rd_addr_o : std_logic_vector(14 downto 0);
   signal mem_wr_ack_o : std_logic;
   signal WEN_o : std_logic_vector(0 downto 0);

   -- Clock period definitions
   constant CLK_i_period : time := 10 ns;

	type trame1 is array (0 to 9) of std_logic_vector(15 downto 0);
	type trame2 is array (0 to 4) of std_logic_vector(7 downto 0);
	constant adresse_ecriture 	: std_logic_vector(14 downto 0) :="000000000000000";
	constant chargement 			: trame1 := (x"0000",x"0666",x"0CCC",x"1333",x"1999",x"2000",x"2666",x"2CCC",x"3333",x"3999");
	constant adresse_max 		: trame2 := (x"71",x"82",x"01",x"00",x"0A");
	constant arret 				: trame2 := (x"71",x"83",x"01",x"00",x"00");
	constant demarrage 			: trame2 := (x"71",x"84",x"01",x"00",x"00");
	constant attenuation 		: trame2 := (x"71",x"85",x"01",x"00",x"00");
	constant saut 					: trame2 := (x"71",x"86",x"01",x"00",x"01");
	constant diviseur 			: trame2 := (x"71",x"87",x"01",x"00",x"02");
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BRAM_ctrlr PORT MAP (
          D_mem_i => D_mem_i,
          wr_addr_i => wr_addr_i,
          inc_rd_addr_i => inc_rd_addr_i,
          max_rd_addr_i => max_rd_addr_i,
          smp_rdy_i => smp_rdy_i,
          GEN_RUN_i => GEN_RUN_i,
          D_SRAM_o => D_SRAM_o,
			 D_SRAM_i => D_SRAM_i,
			 mem_wr_addr_o => mem_wr_addr_o,
          mem_rd_addr_o => mem_rd_addr_o,
          D_DAC_o => D_DAC_o,
          mem_wr_ack_o => mem_wr_ack_o,
			 WEN_o => WEN_o,
          CLK_i => CLK_i,
          RST_i => RST_i
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
      -- hold reset state for 100 ns.
		RST_i <= '0';
      wait for 100 ns;	
		RST_i <= '1';
      wait for CLK_i_period*10;
		wr_addr_i <= adresse_ecriture;
		
		GEN_RUN_i <= '0';
		for i in 0 to 9 loop
			wait for 3*CLK_i_period;
			smp_rdy_i <= '1';
			D_mem_i <= chargement(i)(13 downto 0);
			wait until mem_wr_ack_o = '1';
			smp_rdy_i <= '0';
			wr_addr_i <= std_logic_vector(unsigned(wr_addr_i) + 1);
		end loop;
		
--		GEN_RUN_i <= '1';
--		for i in 0 to 9 loop
--			D_SRAM_i <= chargement(i)(13 downto 0);
--		end loop;
      -- insert stimulus here 

      wait;
   end process;

END;
