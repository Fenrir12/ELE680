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
   signal RST_i : std_logic := '1';
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
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		RST_i <= '0';
      wait for CLK_i_period*10;

      -- insert stimulus here 
--test config 80
		--Read timing block 1
		D_io <= x"71";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Read timing block 2
		D_io <= x"80";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Write timing block 2
		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
		-------------------------
		wait for 30 ns;
--test config 81
		--Read timing block 1
		D_io <= x"71";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Read timing block 2
		D_io <= x"81";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Write timing block 2
		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
		-------------------------
		wait for 30 ns;
--test config 82
		--Read timing block 1
		D_io <= x"71";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Read timing block 2
		D_io <= x"82";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Write timing block 2
		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
		-------------------------
		wait for 30 ns;
--test config 83
		--Read timing block 1
		D_io <= x"71";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Read timing block 2
		D_io <= x"83";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Write timing block 2
		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
		-------------------------
		wait for 30 ns;
--test config 87
		--Read timing block 1
		D_io <= x"71";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Read timing block 2
		D_io <= x"87";
      wait for 30 ns;
		ft_rd_done_i <= '1';
		wait for 50 ns;
		ft_rd_done_i <= '0';
		-------------------------
		--Write timing block 2
		wait for 50 ns;
		ft_wr_done_i <= '1';
		wait for 30 ns;
		ft_wr_done_i <= '0';
		-------------------------
		wait for 30 ns;
   end process;

END;
