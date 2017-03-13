--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:36:56 03/27/2014
-- Design Name:   
-- Module Name:   H:/Administrator data/Desktop/function_generator_27mars(2)/interconnect_tb.vhd
-- Project Name:  function_generator
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: interconnect
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
 
ENTITY interconnect_tb IS
END interconnect_tb;
 
ARCHITECTURE behavior OF interconnect_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
   COMPONENT interconnect
  Port( clk,reset		: in STD_LOGIC;
			clock_dac		: out STD_LOGIC;
			usb_reset		: out STD_LOGIC;
			rxf,txe			: in STD_LOGIC;
			rd,wr				: out STD_LOGIC;
			usb_data			: inout STD_LOGIC_VECTOR(7 downto 0);
			data_dac			: out STD_LOGIC_VECTOR(13 downto 0);
			led_array		: out STD_LOGIC_VECTOR(3 downto 0);
			chargement_rdy_o	: OUT STD_LOGIC; 	--Bit de test outputer sur port de debug
			start_gen_o		: OUT STD_LOGIC;		--Bit de test outputer sur port de debug
			clk_en_o			: out STD_LOGIC;		--Bit de test outputer sur port de debug
			matrice_max		: OUT STD_LOGIC_VECTOR(8 downto 0); --Vecteur de test outputer sur port de debug
			processed_data_o: out std_logic_vector(7 downto 0);
			wr_add_o			: out STD_LOGIC_VECTOR(15 downto 0);
			rd_add_o			: out STD_LOGIC_VECTOR(15 downto 0);
			att_o				: out STD_LOGIC_VECTOR(4 downto 0);
			jmp_add_o		: out STD_logic_vector(15 downto 0);
			matrice_data	: OUT STD_LOGIC_VECTOR(7 downto 0);
			ram_wea_o 			: out STD_LOGIC_VECTOR(0 DOWNTO 0);
			ram_wadresse_o 		: out STD_LOGIC_VECTOR (14 downto 0);
			ram_radresse_o 		: out STD_LOGIC_VECTOR (14 downto 0);
			ram_wdata_o 		: out STD_LOGIC_VECTOR (13 downto 0);
			ram_rdata_o 		: out STD_LOGIC_VECTOR (13 downto 0)
			);
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal rxf : std_logic := '0';
   signal txe : std_logic := '0';

	--BiDirs
   signal usb_data : std_logic_vector(7 downto 0);

 	--Outputs
   signal clock_dac : std_logic;
   signal usb_reset : std_logic;
   signal rd : std_logic;
   signal wr : std_logic;
   signal data_dac : std_logic_vector(13 downto 0);
   signal led_array : std_logic_vector(3 downto 0);
	--signal settings_rdy_o : STD_LOGIC;
	signal start_gen_o : STD_LOGIC;
	signal clk_en_o : STD_LOGIC;
	signal processed_data_o : std_logic_vector(7 downto 0);
	signal wr_add_o			:  STD_LOGIC_VECTOR(15 downto 0);
	signal rd_add_o			:  STD_LOGIC_VECTOR(15 downto 0);
	signal att_o				:  STD_LOGIC_VECTOR(4 downto 0);
	signal jmp_add_o			:  STD_logic_vector(15 downto 0);
	signal matrice_data		:  STD_LOGIC_VECTOR(7 downto 0);
	signal chargement_rdy_o	:  STD_LOGIC;
	signal ram_wea_o 			:  STD_LOGIC_VECTOR(0 DOWNTO 0);
	signal ram_wadresse_o 		:  STD_LOGIC_VECTOR (14 downto 0);
	signal ram_radresse_o 		:  STD_LOGIC_VECTOR (14 downto 0);
	signal ram_wdata_o 		:  STD_LOGIC_VECTOR (13 downto 0);
	signal ram_rdata_o 		:  STD_LOGIC_VECTOR (13 downto 0);
	signal matrice_max		:  STD_LOGIC_VECTOR (8 downto 0);
   -- Clock period definitions
   constant clk_period : time := 125 ns;
	
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
   uut: interconnect PORT MAP (
          clk => clk,
          reset => reset,
          clock_dac => clock_dac,
          usb_reset => usb_reset,
          rxf => rxf,
          txe => txe,
          rd => rd,
          wr => wr,
          usb_data => usb_data,
          data_dac => data_dac,
          led_array => led_array,
			 chargement_rdy_o => chargement_rdy_o,
			 start_gen_o => start_gen_o,
			 clk_en_o => clk_en_o,
			 matrice_max => matrice_max,
			 processed_data_o => processed_data_o,
			 wr_add_o => wr_add_o,
			 rd_add_o => rd_add_o,
			 att_o => att_o,
			 jmp_add_o => jmp_add_o,
			 matrice_data => matrice_data,
			 ram_wea_o => ram_wea_o,
			 ram_wadresse_o => ram_wadresse_o,
			 ram_radresse_o => ram_radresse_o,
			 ram_wdata_o => ram_wdata_o,
			 ram_rdata_o => ram_rdata_o
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
 --  clock_dac_process :process
 --  begin
--		clock_dac <= '0';
--		wait for clock_dac_period/2;
--		clock_dac <= '1';
--		wait for clock_dac_period/2;
 --  end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
	
      -- hold reset state for 200 ns.
		txe <= '1';
		usb_data <= "00000000";	--Init
		rxf <= '1';
		reset <= '0';
		wait for 200 ns;
		reset <= '1';			--END of reset
		
				
		--wait for clk_period*2;
		
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= adresse_ecriture(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
		--wait until state = "0000";
		
		for i in 0 to 22 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= chargement(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
		--wait until state = "0000";
				
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= adresse_max(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
		--wait until state = "0000";
			
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= attenuation(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
		--wait until state = "0000";
				
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= saut(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
		--wait until state = "0000";
		
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= diviseur(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
		--wait until state = "0000";
		
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= demarrage(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';
				
		wait for clk_period * 30;
		
		for i in 0 to 4 loop
			rxf  <= '0';
			wait until rd = '0';
			wait for 14 ns;
			usb_data <= arret(i);
			wait until rd = '1';
			wait for 14 ns;
			rxf  <= '1';
			wait for 49 ns;
		end loop;
		
		usb_data <= "ZZZZZZZZ";
		txe <= '0';
		wait until wr = '0';

		wait;
      -- insert stimulus here 

      
   end process;

END;
