----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:13:39 03/07/2017 
-- Design Name: 
-- Module Name:    BRAM_TOP - Behavioral 
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

entity BRAM_TOP is
    Port ( D_mem_i : in  STD_LOGIC_VECTOR (13 downto 0);
           wr_addr_i : in  STD_LOGIC_VECTOR (14 downto 0);
			  inc_rd_addr_i : in  std_logic_vector(13 downto 0);
			  max_rd_addr_i : in  std_logic_vector(14 downto 0);
           smp_rdy_i : in  STD_LOGIC;
			  GEN_RUN_i : in  STD_LOGIC;
			  D_DAC_o : out  STD_LOGIC_VECTOR (13 downto 0);
			  mem_wr_ack_o : out  STD_LOGIC;
			  CLK_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC);
end BRAM_TOP;

architecture Behavioral of BRAM_TOP is

component BRAM_ctrlr is
    Port ( D_mem_i : in  STD_LOGIC_VECTOR (13 downto 0);
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
end component;
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

signal wen_s : std_logic_vector (0 downto 0);
signal mem_wr_addr_s : std_logic_vector (14 downto 0);
signal mem_rd_addr_s : std_logic_vector (14 downto 0);
signal D_SRAM_o_s, D_SRAM_i_s: std_logic_vector (13 downto 0);
signal D_DAC_s: std_logic_vector (13 downto 0);
signal mem_wr_ack_s: std_logic;
begin

U1 : BRAM
  PORT MAP (
    clka => CLK_i,
    wea => wen_s,
    addra => mem_wr_addr_s,
    dina => D_SRAM_o_s,
    clkb => CLK_i,
    rstb => not(RST_i), --system reset is 0 when active
    addrb => mem_rd_addr_s,
    doutb => D_SRAM_i_s
  );
U2 : BRAM_ctrlr
	PORT MAP(
		D_mem_i =>D_mem_i,
	   wr_addr_i =>wr_addr_i,
	   inc_rd_addr_i =>inc_rd_addr_i,
	   max_rd_addr_i =>max_rd_addr_i,
	   smp_rdy_i =>smp_rdy_i,
	   GEN_RUN_i =>GEN_RUN_i,
	   D_SRAM_i =>D_SRAM_i_s,
		D_SRAM_o =>D_SRAM_o_s,
	   D_DAC_o =>D_DAC_s,
	   mem_wr_addr_o =>mem_wr_addr_s,
	   mem_rd_addr_o =>mem_rd_addr_s,
	   mem_wr_ack_o =>mem_wr_ack_s,
	   WEN_o =>wen_s,
	   CLK_i =>CLK_i,
	   RST_i => RST_i
	);
D_DAC_o <= D_DAC_s;
mem_wr_ack_o <= mem_wr_ack_s;
end Behavioral;

