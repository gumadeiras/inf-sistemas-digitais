LIBRARY ieee;
USE ieee.std_logic_1164.ALL;


ENTITY TESTBENCH IS
END TESTBENCH;

ARCHITECTURE behavior OF TESTBENCH IS


    COMPONENT NEANDER
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         accumulator : OUT  std_logic_vector(7 downto 0);
         halt : OUT  std_logic
        );
    END COMPONENT;


   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal accumulator : std_logic_vector(7 downto 0);
   signal halt : std_logic;

   -- clk period definitions
   constant clk_period : time := 10 ns;

BEGIN

	-- Instantiate the Unit Under Test (UUT)
   uut: NEANDER PORT MAP (
          clk => clk,
          rst => rst,
          accumulator => accumulator,
          halt => halt
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

      wait for 1 us;

		rst <= '0';

		wait for 20000 ns;

      wait;

		-- wait for clk_period*10;
   end process;

END;
