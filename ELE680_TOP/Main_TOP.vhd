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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Main_TOP is
	 Generic( clk_period : integer := 3); --ns
    Port ( D_ft_io : inout  STD_LOGIC_VECTOR (7 downto 0);
			  RXF_i : in  STD_LOGIC;
           TXE_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC;
           D_o : out  STD_LOGIC_VECTOR (11 downto 0);
			  RD_o : out  STD_LOGIC;
           WR_o : out  STD_LOGIC;
           CLK_dac_o : out  STD_LOGIC);
end Main_TOP;

architecture Behavioral of Main_TOP is

component FTDI_Block
    Generic( clk_period : integer := 3); --ns
    Port ( D_ft_io : inout  STD_LOGIC_VECTOR (7 downto 0);
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
end component;
component Main_ctrlr
    Port ( D_io : inout  STD_LOGIC_VECTOR (7 downto 0);
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
           CLK_i : in  STD_LOGIC;
           CLK_DAC_o : out  STD_LOGIC);
end component;
signal ft_wr_done_s, ft_rd_done_s, ft_wr_en_s : std_logic;
signal D_io_s : std_logic_vector(7 downto 0);
begin
U1: FTDI_Block 
generic map(
	clk_period => clk_period
	)
port map(
	D_ft_io => D_ft_io,
   RXF_i => RXF_i, 
   TXE_i => TXE_i, 
   ft_wr_en_i => ft_wr_en_s, 
   RST_i => RST_i, 
   CLK_i => CLK_i, 
   D_io => D_io_s, 
   RD_o => RD_o, 
   WR_o => WR_o, 
   ft_wr_done_o => ft_wr_done_s, 
   ft_rd_done_o => ft_rd_done_s
	);
U2: Main_ctrlr 
port map(
	D_io => D_io_s,
   --att_o => ,
   --GEN_RUN_o => ,
   --mem_wr_ack_i => ,
   --D_mem_o => ,
   --wr_addr_o => ,
   --inc_rd_addr_o => ,
   --max_rd_addr_o => ,
   --smp_rdy_o => ,
   ft_wr_done_i => ft_wr_done_s,
   ft_rd_done_i => ft_rd_done_s,
   ft_wr_en_o => ft_wr_en_s,
   RST_i => RST_i,
   CLK_i => CLK_i,
   CLK_DAC_o => CLK_dac_o
	);

end Behavioral;

