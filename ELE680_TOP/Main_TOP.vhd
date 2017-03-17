----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:39:51 03/07/2017 
-- Design Name: 
-- Module Name:    Main_TOP - Behavioral 
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
use ieee.numeric_std.all;
Library UNISIM;
use UNISIM.vcomponents.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Main_TOP is
	 Generic( clk_period : integer:= 10); --ns
    Port ( D_ft_io : inout  STD_LOGIC_VECTOR (7 downto 0);
			  RXF_i : in  STD_LOGIC;
           TXE_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC;
           D_o : out  STD_LOGIC_VECTOR (11 downto 0);
			  LED_o : out  STD_LOGIC_VECTOR (11 downto 0);
			  DEBUG_o : out  STD_LOGIC_VECTOR (11 downto 0);
			  RD_o : out  STD_LOGIC;
           WR_o : out  STD_LOGIC;
           CLK_dac_o : out  STD_LOGIC);
end Main_TOP;

architecture Behavioral of Main_TOP is
--Définitions des components--------------------------------------------------
	COMPONENT DCM_block
		port
		 (-- Clock in ports
		  CLK_IN1           : in     std_logic;
		  -- Clock out ports
		  CLK_OUT1          : out    std_logic;
		  -- Status and control signals
		  RESET             : in     std_logic;
		  LOCKED            : out    std_logic
		 );
	END COMPONENT;
	COMPONENT FTDI_Block
		 GENERIC( clk_period : integer); --ns
		 PORT ( D_ft_io : inout  STD_LOGIC_VECTOR (7 downto 0);
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
	END COMPONENT;
	COMPONENT Main_ctrlr
		 PORT ( D_io : inout  STD_LOGIC_VECTOR (7 downto 0);
				  att_o : out  STD_LOGIC_VECTOR (3 downto 0);
				  GEN_RUN_o : out  STD_LOGIC;
				  mem_wr_ack_i : in  STD_LOGIC := '1';
				  D_mem_o : out  STD_LOGIC_VECTOR (13 downto 0);
				  wr_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
				  inc_rd_addr_o : out  STD_LOGIC_VECTOR (13 downto 0);
				  max_rd_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
				  smp_rdy_o : out  STD_LOGIC;
				  ft_wr_done_i : in  STD_LOGIC;
				  ft_rd_done_i : in  STD_LOGIC;
				  ft_wr_en_o : out  STD_LOGIC;
				  RST_i : in  STD_LOGIC;
				  CLK_i : in  STD_LOGIC);
	END COMPONENT;
	COMPONENT BRAM_ctrlr is
    PORT ( D_mem_i : in  STD_LOGIC_VECTOR (13 downto 0);
           wr_addr_i : in  STD_LOGIC_VECTOR (14 downto 0);
			  inc_rd_addr_i : in  std_logic_vector(13 downto 0);
			  max_rd_addr_i : in  std_logic_vector(14 downto 0);
           smp_rdy_i : in  STD_LOGIC;
			  GEN_RUN_i : in  STD_LOGIC;
			  D_SRAM_i : in  STD_LOGIC_VECTOR (13 downto 0);
			  D_SRAM_o : out  STD_LOGIC_VECTOR (13 downto 0);
			  D_DAC_o : out  STD_LOGIC_VECTOR (13 downto 0);
			  mem_wr_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
			  mem_rd_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
			  mem_wr_ack_o : out  STD_LOGIC;
			  WEN_o : out  STD_LOGIC_VECTOR (0 downto 0);
			  CLK_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC);
	end COMPONENT;
	COMPONENT BRAM
	  PORT (
		 clka : IN STD_LOGIC;
		 wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
		 addra : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
		 dina : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
		 clkb : IN STD_LOGIC;
		 rstb : IN STD_LOGIC;
		 addrb : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
		 doutb : OUT STD_LOGIC_VECTOR(13 DOWNTO 0)
	  );
	END COMPONENT;
	COMPONENT DAC_Block is
    PORT ( D_DAC_i : in  STD_LOGIC_VECTOR (13 downto 0);
			  ATT_i : in STD_LOGIC_VECTOR (3 downto 0);
           D_o : out  STD_LOGIC_VECTOR (11 downto 0);
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC);
	end component;
	-----------------------------------------------------------------------
	--Signaux internes
	signal ft_wr_done_s, ft_rd_done_s, ft_wr_en_s, mem_wr_ack_s, dcm_locked_s, GEN_RUN_s, smp_rdy_s : std_logic;
	signal D_io_s : std_logic_vector(7 downto 0);
	signal wen_s : std_logic_vector (0 downto 0);
	signal mem_wr_addr_s, wr_addr_s, max_rd_addr_s, mem_rd_addr_s : std_logic_vector (14 downto 0);
	signal D_mem_s, D_SRAM_o_s, D_SRAM_i_s, inc_rd_addr_s: std_logic_vector (13 downto 0);
	signal D_DAC_s: std_logic_vector (13 downto 0);
	signal att_s : std_logic_vector(3 downto 0);
	signal CLK_OUT1:std_logic;
  --DEBUT DU TOP-------------------------------------------------------
BEGIN
	ODDR2_inst : ODDR2
   GENERIC MAP(
      DDR_ALIGNMENT => "NONE", -- Sets output alignment to "NONE", "C0", "C1" 
      INIT => '0', -- Sets initial state of the Q output to '0' or '1'
      SRTYPE => "SYNC") -- Specifies "SYNC" or "ASYNC" set/reset
   PORT MAP (
      Q => CLK_dac_o, -- 1-bit output data
      C0 => not(CLK_OUT1), -- 1-bit clock input
      C1 => not(CLK_OUT1), -- 1-bit clock input
      CE => '1',  -- 1-bit clock enable input
      D0 => '0',   -- 1-bit data input (associated with C0)
      D1 => '1',   -- 1-bit data input (associated with C1)
      R => not(RST_i),    -- 1-bit reset input
      S => '0'     -- 1-bit set input
   );
	U1 : DCM_block
	  PORT MAP
		(-- Clock in ports
		 CLK_IN1 => CLK_i,
		 -- Clock out ports
		 CLK_OUT1 => CLK_OUT1,
		 -- Status and control signals
		 RESET  => not(RST_i),
		 LOCKED => dcm_locked_s);
	U2: FTDI_Block 
	GENERIC MAP(
		clk_period => clk_period
		)
	PORT MAP(
		D_ft_io => D_ft_io,
		RXF_i => RXF_i, 
		TXE_i => TXE_i, 
		ft_wr_en_i => ft_wr_en_s, 
		RST_i => RST_i, 
		CLK_i => CLK_OUT1, 
		D_io => D_io_s, 
		RD_o => RD_o, 
		WR_o => WR_o, 
		ft_wr_done_o => ft_wr_done_s, 
		ft_rd_done_o => ft_rd_done_s
		);
	U3: Main_ctrlr 
	PORT MAP(
		D_io => D_io_s,
		att_o => att_s,
		GEN_RUN_o => GEN_RUN_s,
		mem_wr_ack_i => mem_wr_ack_s,
		D_mem_o => D_mem_s,
		wr_addr_o => wr_addr_s,
		inc_rd_addr_o => inc_rd_addr_s,
		max_rd_addr_o => max_rd_addr_s,
		smp_rdy_o => smp_rdy_s,
		ft_wr_done_i => ft_wr_done_s,
		ft_rd_done_i => ft_rd_done_s,
		ft_wr_en_o => ft_wr_en_s,
		RST_i => RST_i,
		CLK_i => CLK_OUT1
		);
	U4 : BRAM
	  PORT MAP (
		 clka => CLK_OUT1,
		 wea => wen_s,
		 addra => mem_wr_addr_s,
		 dina => D_SRAM_o_s,
		 clkb => CLK_OUT1,
		 rstb => not(RST_i), --system reset is 0 when active
		 addrb => mem_rd_addr_s,
		 doutb => D_SRAM_i_s
	  );
	U5 : BRAM_ctrlr
		PORT MAP(
			D_mem_i =>D_mem_s,
			wr_addr_i =>wr_addr_s,
			inc_rd_addr_i =>inc_rd_addr_s,
			max_rd_addr_i =>max_rd_addr_s,
			smp_rdy_i =>smp_rdy_s,
			GEN_RUN_i =>GEN_RUN_s,
			D_SRAM_i =>D_SRAM_i_s,
			D_SRAM_o =>D_SRAM_o_s,
			D_DAC_o =>D_DAC_s,
			mem_wr_addr_o =>mem_wr_addr_s,
			mem_rd_addr_o =>mem_rd_addr_s,
			mem_wr_ack_o =>mem_wr_ack_s,
			WEN_o =>wen_s,
			CLK_i =>CLK_OUT1,
			RST_i => RST_i
		);
	U6:DAC_Block 
    PORT MAP( D_DAC_i =>D_DAC_s,
			  ATT_i => att_s,
           D_o =>D_o,
           RST_i =>RST_i,
           CLK_i =>CLK_OUT1
		);

END Behavioral;

