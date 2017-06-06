library IEEE;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity ckt is
  port(
      clk, rst, button  : in std_logic;
      acc               : out std_logic_vector(7 downto 0);
      led               : out std_logic_vector(0 downto 0);
      an                : out std_logic_vector(3 downto 0);
      seg               : out std_logic_vector(6 downto 0)
    );
end ckt;

architecture behaviour of ckt is

  type state_type0 is (s_d0, s_d1, s_d2);
  signal s_current, s_next : state_type0;

  signal accumulator            : std_logic_vector(7 downto 0);
  signal halt                   : std_logic;
  signal d0, d1, d2             : std_logic_vector(3 downto 0); -- bcd values
  signal digit0, digit1, digit2 : std_logic_vector(6 downto 0); -- bcd values
  signal temp, mclk             : std_logic;
  signal counter                : std_logic_vector(23 downto 0);


begin

  frequency_divider: process (clk, rst)
  begin
        if rst = '1' then
            temp <= '0';
            counter <= (others => '0');
        elsif rising_edge(clk) then
            if counter = X"EBC20" then
                temp <= not temp;
                counter <= (others => '0');
            else
                counter <= counter + "1";
            end if;
        end if;
    end process;
  mclk <= temp;
  acc <= accumulator;

  toplvl   : entity work.neander port map(mclk, rst, accumulator, halt);
  bcdconv  : entity work.bcdconverter generic map(7) port map(accumulator, d0, d1, d2);
  display0 : entity work.segdisplay port map(rst, d0, digit0);
  display1 : entity work.segdisplay port map(rst, d1, digit1);
  display2 : entity work.segdisplay port map(rst, d2, digit2);

  halt_status : process(clk, rst)
  begin
    if rst = '1' then
      led(0) <= '1';
    elsif rising_edge(clk) then
      if halt = '1' then
        led(0) <= '1';
      else
        led(0) <= '0';
      end if ;
    end if ;
    end process;

  state_control : process(mclk, rst)
  begin
    if rst = '1' then
      s_current <= s_d0;
    elsif rising_edge(mclk) then
      s_current <= s_next;
    else
      s_current <= s_current;
    end if;
  end process;

  state_logic : process(s_current)
  begin
    if rst = '1' then
      seg <= "1000000";
    else
      case s_current is
        when s_d0 =>
          s_next <= s_d1;
          an     <= "1110";
          seg    <= digit0;

        when s_d1 =>
          s_next <= s_d2;
          an     <= "1101";
          seg    <= digit1;

        when s_d2 =>
          an     <= "1011";
          seg    <= digit2;
          s_next <= s_d0;
      end case;
    end if;
  end process;

end behaviour;