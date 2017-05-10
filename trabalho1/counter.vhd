library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity counter is
  generic(
    bits : integer := 1 --default is 1 bit
    );
  port (
    clk, rst, updown : in std_logic;
    out_counter : out std_logic_vector(bits-1 downto 0)
    );
end counter;

architecture behaviour of counter is
  signal aux_out_counter : std_logic_vector(bits-1 downto 0);
begin

  updown_counter : process(clk, rst)
  begin
    if rst = '0' then
      aux_out_counter <= (others => '0');
    elsif rising_edge(clk) then
      if updown = '0' then
        aux_out_counter <= aux_out_counter + 1;
      elsif updown = '1' then
        aux_out_counter <= aux_out_counter - 1;
      else
        aux_out_counter <= aux_out_counter;
      end if;
    end if;
  end process;

out_counter <= aux_out_counter;

end behaviour;