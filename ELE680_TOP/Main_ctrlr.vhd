----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:45:38 02/21/2017 
-- Design Name: 
-- Module Name:    Main_ctrlr - Behavioral 
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

entity Main_ctrlr is
    Port ( D_io : inout  STD_LOGIC_VECTOR (7 downto 0);
           att_o : out  STD_LOGIC_VECTOR (3 downto 0);
           GEN_RUN_o : out  STD_LOGIC;
           mem_wr_ack_i : in  STD_LOGIC;
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
end Main_ctrlr;

architecture Behavioral of Main_ctrlr is

begin


end Behavioral;

