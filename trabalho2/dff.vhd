library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;

entity dff is
  generic(
    bits : integer := 1 --default is 1 bit
    );
  port(
    clk, rst, load : in   std_logic;
    D              : in   std_logic_vector(bits-1 downto 0);
    Q              : out  std_logic_vector(bits-1 downto 0)
  );
end entity;

architecture behaviour of dff is
  signal aux_Q : std_logic_vector(bits-1 downto 0);
begin
    process (clk, rst) begin
        if rst = '1' then
            aux_Q <= (others => '0');
        elsif rising_edge(clk) then
          if load = '1' then
            aux_Q <= D;
          else
            aux_Q <= aux_Q;
          end if ;
        end if;
    end process;

   Q <= aux_Q;
end behaviour;