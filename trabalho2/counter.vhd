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
    clk, rst, load, increment : in  std_logic;
    D                         : in  std_logic_vector(bits-1 downto 0);
    out_counter               : out std_logic_vector(bits-1 downto 0)
    );
end counter;

architecture behaviour of counter is
  signal aux_out_counter : std_logic_vector(bits-1 downto 0);
begin

  load_counter : process(clk, rst)
  begin
    if rst = '1' then
      aux_out_counter <= (others => '0');
    elsif rising_edge(clk) then
      if load = '1' then
        aux_out_counter <= D;
      elsif increment = '1' then
        aux_out_counter <= aux_out_counter + 1;
      else
        aux_out_counter <= aux_out_counter;
      end if;
    end if;
  end process;

out_counter <= aux_out_counter;

end behaviour;