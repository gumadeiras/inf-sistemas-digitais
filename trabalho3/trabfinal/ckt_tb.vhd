--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:11:20 07/29/2017
-- Design Name:   
-- Module Name:   V:/documents/UFRGS/materias/atual/sistemas digitais/git/inf-sistemas-digitais/trabalho3/trabfinal/ckt_tb.vhd
-- Project Name:  trabfinal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ckt
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
 
ENTITY ckt_tb IS
END ckt_tb;
 
ARCHITECTURE behavior OF ckt_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ckt
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         button : IN  std_logic;
         media : OUT  std_logic_vector(5 downto 0);
         variancia : OUT  std_logic_vector(5 downto 0);
         desvio : OUT  std_logic_vector(3 downto 0);
         cycles : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal button : std_logic := '0';

 	--Outputs
   signal media : std_logic_vector(5 downto 0);
   signal variancia : std_logic_vector(5 downto 0);
   signal desvio : std_logic_vector(3 downto 0);
   signal cycles : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ckt PORT MAP (
          clk => clk,
          rst => rst,
          button => button,
          media => media,
          variancia => variancia,
          desvio => desvio,
          cycles => cycles
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		rst <= '1';
      wait for 1 ns;	
		rst<= '0';
      wait for clk_period*99999;

      -- insert stimulus here 

      wait;
   end process;

END;
