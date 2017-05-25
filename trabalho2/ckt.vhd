library IEEE;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity ckt is
  port(
    mclk, rst, button : in std_logic;
    acc               : out std_logic_vector(7 downto 0);
    led               : out std_logic_vector(0 downto 0);
    an                : out std_logic_vector(3 downto 0);
    seg               : out std_logic_vector(6 downto 0)
    );
end ckt;

architecture behaviour of ckt is

  type state_type is (s_d0, s_d1, s_d2);
  signal s_current, s_next : state_type;

  signal accumulator : std_logic_vector(7 downto 0);
  signal clk, halt : std_logic;
  signal d0, d1, d2 : std_logic_vector(3 downto 0); -- bcd values
  signal digit0, digit1, digit2 : std_logic_vector(6 downto 0); -- bcd values
  signal temp : std_logic := '0';
  signal counter: integer := 1;


begin

  toplvl   : entity work.neander port map(clk, rst, accumulator, halt);
  bcdconv  : entity work.bcdconverter generic map(7) port map(accumulator, d0, d1, d2);
  display0 : entity work.segdisplay port map(rst, d0, digit0);
  display1 : entity work.segdisplay port map(rst, d1, digit1);
  display2 : entity work.segdisplay port map(rst, d2, digit2);

  frequency_divider: process (mclk, rst) begin
        if rst = '1' then
            temp <= '0';
            counter <= 0;
        elsif rising_edge(mclk) then
            if counter = 124999 then
                temp <= NOT(temp);
                counter <= 0;
            else
                counter <= counter + 1;
            end if;
        end if;
    end process;
  clk <= temp;
  acc <= accumulator;


  halt_status : process(clk, rst)
  begin
    if rst = '1' then
      led(0) <= '0';
    elsif rising_edge(clk) then
      if halt = '1' then
        led(0) <= '1';
      end if ;
    end if ;
    end process;

  state_control : process(clk, rst)
  begin
    if rst = '1' then
      s_current <= s_d0;
    elsif rising_edge(clk) then
      s_current <= s_next;
    else
      s_current <= s_current;
    end if;
  end process;

  state_logic : process(s_current)
  begin
    case s_current is
      when s_d0 =>
        an <= "1110";
        if rst = '1' then
          seg <= (others => '0');
        else
          seg   <= digit0;
        end if;
        s_next <= s_d1;

      when s_d1 =>
        an <= "1101";
        if rst = '1' then
          seg <= (others => '0');
        else
          seg   <= digit1;
        end if;
        s_next <= s_d2;

      when s_d2 =>
        an <= "1011";
        if rst = '1' then
          seg <= (others => '0');
        else
          seg   <= digit2;
        end if;
        s_next <= s_d0;

    end case;
  end process;

end behaviour;