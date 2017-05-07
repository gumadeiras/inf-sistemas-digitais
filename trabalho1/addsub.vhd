library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;

entity addsub is
  generic(
    bits : integer := 4
  );
  port(
        A, B : in std_logic_vector(bits-1 downto 0);
         Cin : in std_logic;
           S : out std_logic_vector(bits-1 downto 0);
    overflow : out std_logic
  );
end addsub;

architecture behaviour of addsub is
  signal internal_carry : std_logic_vector(bits downto 0);
      signal internal_A : std_logic_vector(bits-1 downto 0);
begin

  internal_carry(0) <= Cin;
  with Cin select
    internal_A <= A when '0',
                  not A when '1',
                  (others => '0') when others;

  n_adder : for I in 0 to bits-1 generate
      S(I) <= internal_A(I) xor B(I) xor internal_carry(I);
      internal_carry(I+1) <= (internal_A(I) and B(I)) or (B(I) and internal_carry(I)) or (internal_A(I) and internal_carry(I));
  end generate n_adder;

  overflow <= internal_carry(bits) xor internal_carry(bits-1);

end behaviour;