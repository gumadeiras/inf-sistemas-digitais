library IEEE;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity ckt is
  port(
    clk, rst, updown1, updown2, selector : in std_logic;
    counter1, counter2, sum, sub : out std_logic_vector(3 downto 0); -- for debugging only
    data_out : out std_logic_vector(6 downto 0)
    );
end ckt;

architecture behaviour of ckt is
  signal out_counter1, out_counter2, out_adder, out_subtractor, out_mux, out_r_mux : std_logic_vector(3 downto 0); --internal wiring
  signal d0, d1, d2 : std_logic_vector(3 downto 0); -- bcd values
  signal out_segdisplay : std_logic_vector(6 downto 0); -- segment display output
begin

updown_counter1 : entity work.counter generic map(4) port map(clk, rst, updown1, out_counter1);
updown_counter2 : entity work.counter generic map(4) port map(clk, rst, updown2, out_counter2);

  counter1 <= out_counter1; --debug signal
  counter2 <= out_counter2; --debug signal

-- caixa 1 : adder coregen
  coregen_adder : entity work.adder port map (out_counter1, out_counter2, clk, not rst, out_adder);
  sum <= out_adder; --debug signal


-- caixa 2 : subtractor
  sub_logic : out_subtractor <= out_counter1 - out_counter2;
  sub <= out_subtractor; --debug signal

-- 2:1 mux : 0 = adder - 1 = subtractor
mux21_add_mux : entity work.mux21 generic map(4,4) port map(out_adder, out_subtractor, selector, out_mux);
register_mux : entity work.dff generic map(4) port map(clk, rst, out_mux, out_r_mux);

-- bcd converter, 14 bits
-- bcdconv : entity work.bcdconverter generic map(4) port map(out_r_mux, d0, d1, d2);
-- os valores ja estao em 4 bits, nao e necessario fazer conversao, apenas um case para mostrar o valor hexa
display : entity work.segdisplay port map(rst, out_r_mux, out_segdisplay);
register_data_out : entity work.dff generic map(7) port map(clk, rst, out_segdisplay, data_out);

end behaviour;