library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;

entity mux21 is
  generic(
    bits0 : integer := 1;
    bits1 : integer := 1
    );
  port(
    A0 : in std_logic_vector(bits0-1 downto 0);
    A1 : in std_logic_vector(bits1-1 downto 0);
    selector : in std_logic;
    mux_out : out std_logic_vector
    );
end mux21;

architecture behaviour of mux21 is
begin
with selector select
              mux_out <= A0 when '0',
                         A1 when '1',
                         (others => '0') when others;
end behaviour;