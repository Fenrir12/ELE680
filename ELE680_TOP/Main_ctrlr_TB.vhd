--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:36:26 02/21/2017
-- Design Name:   
-- Module Name:   /home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/Main_ctrlr_TB.vhd
-- Project Name:  ELE680_TOP
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Main_ctrlr
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
use IEEE.NUMERIC_STD.ALL;
use ieee.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Main_ctrlr_TB IS
END Main_ctrlr_TB;
 
ARCHITECTURE behavior OF Main_ctrlr_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Main_ctrlr
    PORT(
         D_io : INOUT  std_logic_vector(7 downto 0);
         att_o : OUT  std_logic_vector(3 downto 0);
         GEN_RUN_o : OUT  std_logic;
         mem_wr_ack_i : IN  std_logic;
         D_mem_o : OUT  std_logic_vector(13 downto 0);
         wr_addr_o : OUT  std_logic_vector(14 downto 0);
         inc_rd_addr_o : OUT  std_logic_vector(13 downto 0);
         max_rd_addr_o : OUT  std_logic_vector(14 downto 0);
         smp_rdy_o : OUT  std_logic;
         ft_wr_done_i : IN  std_logic;
         ft_rd_done_i : IN  std_logic;
         ft_wr_en_o : OUT  std_logic;
         RST_i : IN  std_logic;
         CLK_i : IN  std_logic;
         CLK_DAC_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal mem_wr_ack_i : std_logic := '0';
   signal ft_wr_done_i : std_logic := '0';
   signal ft_rd_done_i : std_logic := '0';
   signal RST_i : std_logic := '0';
   signal CLK_i : std_logic := '0';

	--BiDirs
   signal D_io : std_logic_vector(7 downto 0);

 	--Outputs
   signal att_o : std_logic_vector(3 downto 0);
   signal GEN_RUN_o : std_logic;
   signal D_mem_o : std_logic_vector(13 downto 0);
   signal wr_addr_o : std_logic_vector(14 downto 0);
   signal inc_rd_addr_o : std_logic_vector(13 downto 0);
   signal max_rd_addr_o : std_logic_vector(14 downto 0);
   signal smp_rdy_o : std_logic;
   signal ft_wr_en_o : std_logic;
   signal CLK_DAC_o : std_logic;

   -- Clock period definitions
   constant CLK_i_period : time := 10 ns;
   constant CLK_DAC_o_period : time := 3 ns;
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
   uut: Main_ctrlr PORT MAP (
          D_io => D_io,
          att_o => att_o,
          GEN_RUN_o => GEN_RUN_o,
          mem_wr_ack_i => mem_wr_ack_i,
          D_mem_o => D_mem_o,
          wr_addr_o => wr_addr_o,
          inc_rd_addr_o => inc_rd_addr_o,
          max_rd_addr_o => max_rd_addr_o,
          smp_rdy_o => smp_rdy_o,
          ft_wr_done_i => ft_wr_done_i,
          ft_rd_done_i => ft_rd_done_i,
          ft_wr_en_o => ft_wr_en_o,
          RST_i => RST_i,
          CLK_i => CLK_i,
          CLK_DAC_o => CLK_DAC_o
        );

   -- Clock process definitions
   CLK_i_process :process
   begin
		CLK_i <= '0';
		wait for CLK_i_period/2;
		CLK_i <= '1';
		wait for CLK_i_period/2;
   end process;
 
   CLK_DAC_o_process :process
   begin
		CLK_DAC_o <= '0';
		wait for CLK_DAC_o_period/2;
		CLK_DAC_o <= '1';
		wait for CLK_DAC_o_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		-- hold reset state for 200 ns.
		D_io <= "00000000";	--Init
		RST_i <= '0';
		wait for 200 ns;
		RST_i <= '1';			--END of reset
		
				
		--wait for clk_period*2;
		
		for i in 0 to 4 loop
			wait for 14 ns;
			D_io <= adresse_ecriture(i);
			wait for 14 ns;
			ft_rd_done_i <= '1';
			wait for 49 ns;
			ft_rd_done_i <= '0';
		end loop;

		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
		
		for i in 0 to 22 loop
			wait for 14 ns;
			D_io <= chargement(i);
			wait for 14 ns;
			ft_rd_done_i <= '1';
			wait for 49 ns;
			ft_rd_done_i <= '0';
			if (i>2 AND (i mod 2) = 0) then
				wait for 100 ns;
				mem_wr_ack_i <= '1';
				wait for 20 ns;
				mem_wr_ack_i <= '0';
			end if;
		end loop;
		
		D_io <= "ZZZZZZZZ";
		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
--      -- insert stimulus here 
----test config 80 1
--				--Read timing block 1
--		wait for 14 ns;
--		D_io <= x"71";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Read command
--		wait for 14 ns;
--		D_io <= x"80";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Read quantity
--		wait for 14 ns;
--		D_io <= x"01";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------		
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"FF";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Write timing block 2
--		wait for 50 ns;
--		ft_wr_done_i <= '1';
--		wait for 30 ns;
--		ft_wr_done_i <= '0';
--		
--		
--		--DATA_LOAD_TEST
--		--Read timing block 1
--		wait for 14 ns;
--		D_io <= x"71";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Read command
--		wait for 14 ns;
--		D_io <= x"81";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Read quantity
--		wait for 14 ns;
--		D_io <= x"05";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';
--		-------------------------
--		--Data_load bytes
--		--stream 1
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';	
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"01";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;	
--		ft_rd_done_i <= '0';
--		wait for 100 ns;
--		mem_wr_ack_i <= '1';
--		wait for 20 ns;
--		mem_wr_ack_i <= '0';
--		--stream 2
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';		
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"02";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;	
--		ft_rd_done_i <= '0';
--		wait for 100 ns;
--		mem_wr_ack_i <= '1';
--		wait for 20 ns;
--		mem_wr_ack_i <= '0';
--		--stream 3
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';	
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"03";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;	
--		ft_rd_done_i <= '0';
--		wait for 100 ns;
--		mem_wr_ack_i <= '1';
--		wait for 20 ns;
--		mem_wr_ack_i <= '0';
--		--stream 4
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';		
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"04";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;	
--		ft_rd_done_i <= '0';
--		wait for 100 ns;
--		mem_wr_ack_i <= '1';
--		wait for 20 ns;
--		mem_wr_ack_i <= '0';
--		--stream 5
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';	
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"05";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;	
--		ft_rd_done_i <= '0';
--		wait for 100 ns;
--		mem_wr_ack_i <= '1';
--		wait for 20 ns;
--		mem_wr_ack_i <= '0';
--		--stream 6
--		--Read Byte 1
--		wait for 14 ns;
--		D_io <= x"00";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;
--		ft_rd_done_i <= '0';		
--		--Read Byte 2
--		wait for 14 ns;
--		D_io <= x"06";
--      wait for 16 ns;
--		ft_rd_done_i <= '1';
--		wait for 50 ns;	
--		ft_rd_done_i <= '0';
--		wait for 100 ns;
--		mem_wr_ack_i <= '1';
--		wait for 20 ns;
--		mem_wr_ack_i <= '0';
--		-------------------------
--		--Write timing block 2	
--		wait for 50 ns;
--		ft_wr_done_i <= '1';
--		wait for 30 ns;
--		ft_wr_done_i <= '0';
--		-------------------------
   end process;

END;
