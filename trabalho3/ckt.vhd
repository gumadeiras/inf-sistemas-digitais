library IEEE;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;
--use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity ckt is
    port(
        clk, rst, button  : in std_logic;
        media           : out std_logic_vector(5 downto 0);
        variancia           : out std_logic_vector(5 downto 0);
        desvio           : out std_logic_vector(3 downto 0);
        cycles           : out std_logic_vector(31 downto 0)
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
    dividend: in std_logic_vector(21 downto 0);
    divisor: in std_logic_vector(4 downto 0);
    quotient: out std_logic_vector(21 downto 0);
    fractional: out std_logic_vector(4 downto 0));
end component;

-- "Restoring Division algorithm"
--function divide (a : UNSIGNED; b : UNSIGNED) return UNSIGNED is
--    variable a1 : unsigned(a'length-1 downto 0) := a;
--    variable b1 : unsigned(b'length-1 downto 0) := b;
--    variable p1 : unsigned(b'length downto 0) := (others => '0');
--    variable i  : integer := 0;

--    begin
--        for i in 0 to b'length-1 loop
--            p1(b'length-1 downto 1) := p1(b'length-2 downto 0);
--            p1(0) := a1(a'length-1);
--            a1(a'length-1 downto 1) := a1(a'length-2 downto 0);
--            p1 := p1-b1;
--            if(p1(b'length-1) ='1') then
--                a1(0) := '0';
--                p1    := p1 + b1;
--            else
--                a1(0) := '1';
--            end if;
--        end loop;
--    return a1;
--end divide;


---- ALGORITMO RAIZ
--raiz : process(clk)
--    begin
--        if(clock'event and clock='1')then
--            if(part_done='0')then
--                if(part_count>=0)then
--                    partialq(1 downto 0)  <= data_in((part_count*2)+ 1 downto part_count*2);
--                    part_done <= '1';    else
--                    data_out <= result(3 downto 0);
--                end if;
--                part_count <= part_count - 1;
--                elsif(part_done='1')then
--                    if((result(3 downto 0) & "01") <= partialq)then
--                        result   <= result(3 downto 0) & '1';
--                        partialq(5 downto 2) <= partialq(3 downto 0) - (result(1 downto 0)&"01");
--                    else
--                        result   <= result(3 downto 0) & '0';
--                        partialq(5 downto 2) <= partialq(3 downto 0);
--                    end if;
--                    part_done  <= '0';
--                end if;
--            end if;
--        end process;

    type state_type is  (   idle,
                            read_mem,
                            read_mem_cycle,
                            calc_mean,
                            calc_mean_sum,
                            calc_mean_avg,
                            calc_mean_avg_cycle,
                            calc_mean_avg_cycle2,
                            calc_var0,
                            calc_var01,
                            calc_var11,
                            calc_var2,
                            calc_var21,
                            calc_var211,
                            calc_var22,
                            calc_var3,
                            calc_var4,
                            calc_var4_cycle,
                            calc_var5,
                            calc_var6,
                            calc_var,
                            calc_dev,
                            save_mem,
                            save_mem_cycle,
                            done
                        );
    signal s_current : state_type;

    --MEM
    signal wea               : std_logic_vector(0 downto 0);
    signal addra             : std_logic_vector(8 downto 0);
    signal dina              : std_logic_vector(4 downto 0);
    signal douta             : std_logic_vector(4 downto 0);

    --DIV
    signal rfd               : std_logic;
    signal dividend          : std_logic_vector(21 downto 0);
    signal divisor           : std_logic_vector(4 downto 0);
    signal quotient          : std_logic_vector(21 downto 0);
    signal fractional        : std_logic_vector(4 downto 0);
    signal counterdiv        : std_logic_vector(4 downto 0)  := "00000";


    signal counter           : std_logic_vector(4 downto 0)  := "00000";
    signal number_of_workers : std_logic_vector(3 downto 0)  := "0000"; -- 15
    signal sum               : std_logic_vector(21 downto 0) := "0000000000000000000000";
    signal avg               : std_logic_vector(21 downto 0) := "0000000000000000000000";
    signal dia               : std_logic_vector(4 downto 0);
    signal power             : std_logic_vector(21 downto 0) := "0000000000000000000000";
    signal sub               : std_logic_vector(21 downto 0) := "0000000000000000000000";
    signal shortsub          : std_logic_vector(10 downto 0) := "00000000000";
    signal sub2              : std_logic_vector(21 downto 0) := "0000000000000000000000";
    signal variance          : std_logic_vector(5 downto 0)  := "000000";
    signal next_addr         : std_logic_vector(8 downto 0);
    signal deviation         : std_logic_vector(3 downto 0);
    signal cycounter         : std_logic_vector(31 downto 0) := "00000000000000000000000000000000";

begin

    memoria : mem
      port map (
        clka  => clk,
        wea   => wea,
        addra => addra,
        dina  => dina,
        douta => douta
      );

    divisao : corediv
        port map (
            clk        => clk,
            rfd        => rfd,
            dividend   => dividend,
            divisor    => divisor,
            quotient   => quotient,
            fractional => fractional
        );

cycles <= cycounter;
    process(clk, rst)
    begin
    if rst = '1' then
        counter <= (others => '0');
        counterdiv <= (others => '0');
        addra <= (others => '0');
        divisor <= (others => '0');
        s_current <= idle;
    elsif rising_edge(clk) then
    cycounter <= cycounter + 1;
        case s_current is
            when idle =>
                addra     <= "000000000";
                wea       <= "0";
                divisor   <= "11110";
                s_current <= read_mem;

            when read_mem  =>
                s_current <= read_mem_cycle;

            when read_mem_cycle  =>
                s_current <= calc_mean;

            when calc_mean =>
                dia       <= douta;
                s_current <= calc_mean_sum;

            when calc_mean_sum  =>
                if counter = "11110" then
                    s_current  <= calc_mean_avg;
                else
                    addra     <= addra     + 1;
                    sum       <= sum       + dia;
                    counter   <= counter   + 1;
                    s_current <= read_mem;
                end if ;

            when calc_mean_avg  =>
                counter   <= "00001";
                dividend  <= sum;
                s_current <= calc_mean_avg_cycle;

            when calc_mean_avg_cycle  =>
                if counterdiv = "10111" then
                    s_current <= calc_var;
                else
                    counterdiv <= counterdiv + 1;
                    s_current  <= calc_mean_avg_cycle2;
                end if ;

            when calc_mean_avg_cycle2  =>
                s_current <= calc_mean_avg_cycle;

            when calc_var  =>
                sum        <= "0000000000000000000000";
                counterdiv <= "00000";
                addra      <= addra - 30;
                s_current  <= calc_var0;

            when calc_var0  =>
                avg       <= quotient;
                s_current <= calc_var01;

            when calc_var01  =>
                s_current <= calc_var11;

            when calc_var11  =>
                dia       <= douta;
                s_current <= calc_var2;


--          CALCULA SUBTRACAO
            when calc_var2 =>
                if dia > avg then
                    sub <= dia - avg;
                else
                    sub <= avg - dia;
                end if ;
                s_current <= calc_var21;

            when calc_var21  =>
                shortsub  <= sub(10 downto 0);
                s_current <= calc_var211;

--          CALCULA QUADRADO DA SUB
            when calc_var211  =>
                sub2      <= shortsub * shortsub;
                s_current <= calc_var22;

            when calc_var22  =>
                if counter = "11110" then
                    power      <= power + sub2;
                    counter    <= "00001";
                    s_current  <= calc_var3;
                else
                    power      <= power + sub2;
                    addra      <= addra + 1;
                    counter    <= counter + 1;
                    s_current  <= calc_var0;
                end if ;

            when calc_var3  =>
                dividend  <= power;
                s_current <= calc_var4;

            when calc_var4  =>
                if counterdiv = "10111" then
                    power <= (others => '0');
                    shortsub <= (others => '0');
                    sub <= (others => '0');
                    sub2 <= (others => '0');
                    counterdiv <= (others => '0');
                    s_current <= calc_var5;
                else
                    counterdiv <= counterdiv + 1;
                    s_current <= calc_var4_cycle;
                end if ;

            when calc_var4_cycle  =>
                s_current <= calc_var4;

            when calc_var5  =>
                s_current <= calc_var6;

--          VARIANCIA ESTA PRONTA
            when calc_var6  =>
                variance <= quotient(5 downto 0);
                s_current <= calc_dev;

            when calc_dev  =>
                if variance = 1 then
                    deviation <= "0001";
                elsif variance < 8 then
                    deviation <= "0010";
                elsif variance < 16 then
                    deviation <= "0011";
                elsif variance < 25 then
                    deviation <= "0100";
                elsif variance < 36 then
                    deviation <= "0101";
                elsif variance < 49 then
                    deviation <= "0110";
                end if ;
                s_current <= save_mem;

            when save_mem  =>
                if number_of_workers = "1111" then
                    s_current <= done;
                else
                    number_of_workers <= number_of_workers + 1;
                    addra <= addra + 2;
                    --variance <= (others => '0');
                    s_current <= save_mem_cycle;
                end if ;

            when save_mem_cycle =>
                s_current <= read_mem;

            when done      =>
                if button = '1' then
                    -- cycle mem
                end if ;

            when others    =>

        end case;
    end if ;
    end process;

media      <= avg(5 downto 0);
variancia  <= variance;
desvio     <= deviation;
end behaviour;