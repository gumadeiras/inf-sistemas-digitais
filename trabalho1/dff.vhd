library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;

entity dff is
  generic(
    bits : integer := 1 --default is 1 bit
    );
  port(
    clk, rst : in std_logic;
           D : in  std_logic_vector(bits-1 downto 0);
           Q : out std_logic_vector(bits-1 downto 0)
  );
end entity;

architecture behaviour of dff is
begin
    process (clk, rst) begin
        if rst = '0' then
            Q <= (others => '0');
        elsif rising_edge(clk) then
            Q <= D;
        end if;
    end process;
end behaviour;