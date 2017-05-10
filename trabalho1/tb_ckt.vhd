library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity tb_ckt IS
end tb_ckt;

architecture behavior of tb_ckt is

  component ckt
  port(
    clk, rst, updown1, updown2, selector : in std_logic;
    data_out : out std_logic_vector(6 downto 0)
    );
  end component;

  signal clk, rst, updown1, updown2, selector : std_logic;
  signal data_out : std_logic_vector(6 downto 0);
  constant clk_period : time := 10 ns;

begin

  uut: ckt port map(
    clk => clk,
    rst => rst,
    updown1 => updown1,
    updown2 => updown2,
    selector => selector,
    data_out => data_out
  );

  clk_process : process
  begin
    clk <= '0';
    wait for clk_period/2;
    clk <= '1';
    wait for clk_period/2;
  end process;

  stimulus : process
  begin
    rst <= '0';
    wait for 150 ns;
    rst <= '1';
    updown1 <= '0';
    updown2 <= '1';
    selector <= '1';
    wait for 150 ns;
    rst <= '1';
    updown1 <= '1';
    updown2 <= '1';
    selector <= '1';
    wait for 150 ns;
    rst <= '1';
    updown1 <= '1';
    updown2 <= '0';
    selector <= '1';
    wait for 150 ns;
  end process;

end;