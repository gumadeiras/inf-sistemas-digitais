library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity bcdconverter is
  generic(
    size : integer := 7
    );
   port (
      bcd_input : in  std_logic_vector (size downto 0);
      ones, tens, hundreds : out std_logic_vector (3 downto 0) -- digits output in BCD
   );
end bcdconverter;

architecture behav of bcdconverter is

begin

   bin_to_bcd : process (bcd_input)
      variable auxbcd_input : unsigned(25 downto 0); -- aux variable
      alias num is auxbcd_input(size downto 0);  -- internal bcd_input variable
      alias one is auxbcd_input(size+4 downto size+1);
      alias ten is auxbcd_input(size+8 downto size+5);
      alias hun is auxbcd_input(size+12 downto size+9);
   begin
      num := unsigned(bcd_input); -- copy bcd_input and clear others
      one := X"0";
      ten := X"0";
      hun := X"0";

      -- bcd conversion logic
      -- if X"block" >= 5 then +3
      -- shift left once
      -- repeat

      for i in 0 to size loop
         if one >= 5 then
            one := one + 3;
         end if;

         if ten >= 5 then
            ten := ten + 3;
         end if;

         if hun >= 5 then
            hun := hun + 3;
         end if;

         auxbcd_input := shift_left(auxbcd_input, 1);
      end loop;

      hundreds <= std_logic_vector(hun); -- BCD digits for output
      tens     <= std_logic_vector(ten);
      ones     <= std_logic_vector(one);
   end process;

end behav;