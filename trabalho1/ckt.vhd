library IEEE;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ckt is
  port(
    clk, rst, updown1, updown2, selector : in std_logic;
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

-- caixa 1 : subtractor coregen
sub_logic : process(out_counter1, out_counter2)
begin
    sub_logic : out_subtractor <= out_counter1 - out_counter2;
end process;

-- caixa 2 : adder(data in, counter) 4 bits
--adder : entity work.addsub generic map(4) port map (out_r_counter, out_r_data_in, '0', out_adder, overflow);
adder_logic : process(out_counter1, out_counter2)
begin
    adder : out_adder <= out_counter1 + out_counter2;
end process;

-- 2:1 mux : 0 = adder - 1 = subtractor
mux21_add_mux : entity work.mux21 generic map(4,4) port map(out_adder, out_subtractor, selector, out_mux);
register_mux : entity work.dff generic map(4) port map(clk, rst, out_mux, out_r_mux);

-- bcd converter, 14 bits
-- bcdconv : entity work.bcdconverter generic map(4) port map(out_r_mux, d0, d1, d2);
display : entity work.segdisplay port map(rst, out_r_mux, out_segdisplay);
register_data_out : entity work.dff generic map(7) port map(clk, rst, out_segdisplay, data_out);

end behaviour;