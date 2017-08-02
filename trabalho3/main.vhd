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

component mem
  port (
    clka : in std_logic;
    wea : in std_logic_vector(0 downto 0);
    addra : in std_logic_vector(8 downto 0);
    dina : in std_logic_vector(4 downto 0);
    douta : out std_logic_vector(4 downto 0)
  );
end component;

component corediv
    port (
    clk: in std_logic;
    rfd: out std_logic;
    dividend: in std_logic_vector(10 downto 0);
    divisor: in std_logic_vector(4 downto 0);
    quotient: out std_logic_vector(10 downto 0);
    fractional: out std_logic_vector(4 downto 0));
end component;


    type state_type is  (   idle,
                            read_mem,
                            read_mem_cycle,
                            calc_mean,
                            calc_mean_sum,
                            calc_mean_divide,
                            calc_mean_divide_cycle,
                            calc_var,
                            calc_dev,
                            save_mem,
                            done
                        );
    signal s_current, s_next : state_type;

    --MEM
    signal wea               : std_logic_vector(0 downto 0);
    signal addra             : std_logic_vector(8 downto 0);
    signal dina              : std_logic_vector(4 downto 0);
    signal douta             : std_logic_vector(4 downto 0);

    --DIV
    signal rfd               : std_logic;
    signal dividend          : std_logic_vector(10 downto 0);
    signal divisor           : std_logic_vector(4 downto 0);
    signal quotient          : std_logic_vector(10 downto 0);
    signal fractional        : std_logic_vector(4 downto 0);
    signal counterdiv        : std_logic_vector(4 downto 0)  := "00000";


    signal counter           : std_logic_vector(4 downto 0)  := "00000";
    signal number_of_workers : std_logic_vector(3 downto 0)  := "0000"; -- 15
    signal sum               : std_logic_vector(10 downto 0) := "00000000000";
    signal avg               : std_logic_vector(10 downto 0) := "00000000000";
    signal dia               : std_logic_vector(4 downto 0);

begin

    memoria : mem
      port map (
        clka => clk,
        wea => wea,
        addra => addra,
        dina => dina,
        douta => douta
      );

    divisao : corediv
        port map (
            clk => clk,
            rfd => rfd,
            dividend => dividend,
            divisor => divisor,
            quotient => quotient,
            fractional => fractional
        );

    state_control : process(clk, rst)
    begin
    if rst = '1' then
      s_current <= read_mem;
    elsif rising_edge(clk) then
      s_current <= s_next;
    else
      s_current <= s_current;
    end if;
    end process;




    controle : process(clk, rst)
    begin
        case s_current is
            when idle =>
                s_next <= read_mem;

            when read_mem  =>
                s_next <= read_mem_cycle;

            when read_mem_cycle  =>
                s_next <= calc_mean;

            when calc_mean =>
                s_next <= calc_mean_sum;

            when calc_mean_sum  =>
                if counter = "11110" then
                    s_next  <= calc_mean_divide;
                else
                    s_next  <= read_mem;
                end if ;

            when calc_mean_divide  =>
                s_next <= calc_mean_divide_cycle;

            when calc_mean_divide_cycle  =>
                if counterdiv = "10110" then
                    s_next <= calc_var;
                else
                    counterdiv <= counterdiv + 1;
                end if ;

            when calc_var  =>
                s_next <= calc_dev;

            when calc_dev  =>
                s_next <= save_mem;

            when save_mem  =>
                if number_of_workers = "1111" then
                    s_next <= done;
                else
                    s_next <= read_mem;
                end if ;

            when done      =>

            when others    =>

        end case;
    end process;




    operacaional : process(s_current)
    begin
        case s_current is
            when idle =>
                addra <= "000000000";
                wea <= "0";
                divisor <= "11110";

            when calc_mean =>
                dia    <= douta;

            when calc_mean_sum  =>
                addra   <= addra + 1;
                sum     <= sum + dia;
                if counter = "11110" then
                else
                    counter <= counter + 1;
                end if;

            when calc_mean_divide  =>
                counter <= "00000";
                counterdiv <= "00001";
                dividend <= sum;

            when calc_mean_divide_cycle  =>
            sum <= "00000000000";
                if counterdiv = "10110" then
                    counterdiv <= "00000";
                    sum <= "00000000000";
                    avg <= quotient;
                else
                    counterdiv <= counterdiv + 1;
                end if ;

            when calc_var  =>

            when calc_dev  =>


            when save_mem  =>
                if number_of_workers = "1111" then
                else
                    number_of_workers <= number_of_workers + 1;
                end if ;

            when done      =>
                if button = '1' then
                    -- cycle mem
                end if ;

            when others    =>
        end case;
    end process;


end behaviour;