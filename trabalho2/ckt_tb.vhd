LIBRARY ieee;
USE ieee.std_logic_1164.ALL;


ENTITY TESTBENCH IS
END TESTBENCH;

ARCHITECTURE behavior OF TESTBENCH IS


    COMPONENT ckt
    PORT(
    clk, rst, button : in std_logic;
    acc               : out std_logic_vector(7 downto 0);
    led               : out std_logic_vector(0 downto 0);
    an                : out std_logic_vector(3 downto 0);
    seg               : out std_logic_vector(6 downto 0)
        );
    END COMPONENT;


   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal button : std_logic := '0';

 	--Outputs
   signal acc : std_logic_vector(7 downto 0);
   signal led : std_logic_vector(0 downto 0);
   signal an  : std_logic_vector(3 downto 0);
   signal seg : std_logic_vector(6 downto 0);

   -- clk period definitions
   constant clk_period : time := 10 ns;

BEGIN

	-- Instantiate the Unit Under Test (UUT)
   uut: ckt PORT MAP (
          clk => clk,
          rst => rst,
          button => button,
          acc => acc,
          led => led,
          an => an,
          seg => seg
        );

   -- clk process definitions
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
      rst <= '1';

      wait for 100 ns;

		rst <= '0';

			wait for 20000 ns;

      wait;

		-- wait for clk_period*10;
   end process;

END;
