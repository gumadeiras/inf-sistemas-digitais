library IEEE;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity tb_ckt is
end tb_ckt;

architecture behavior of tb_ckt is

  component ckt
  port(
    clk, rst, updown1, updown2, selector : in std_logic;
    counter1, counter2, sum, sub : out std_logic_vector(3 downto 0);
    data_out : out std_logic_vector(6 downto 0)
    );
  end component;

  signal clk, rst, updown1, updown2, selector : std_logic;
  signal counter1, counter2, sum, sub : std_logic_vector(3 downto 0);
  signal data_out : std_logic_vector(6 downto 0);
  constant clk_period : time := 10 ns;


  -- gold signals
  signal flag_erro : std_logic;
  signal soma, subt : std_logic_vector(3 downto 0);
begin

---------------------------
--------- GOLD
---------------------------
soma <= counter1 + counter2;
subt <= counter1 - counter2;


  uut: ckt port map(
    clk => clk,
    rst => rst,
    updown1 => updown1,
    updown2 => updown2,
    selector => selector,
    counter1 => counter1,
    counter2 => counter2,
    sum => sum,
    sub => sub,
    data_out => data_out
  );

  clk_process : process
  begin
    clk <= '0';
    wait for clk_period/2;
    clk <= '1';
    wait for clk_period/2;
  end process;

  stimulus : process
  begin

    rst <= '1';
    wait for 10 ns;
    rst <= '0';
    wait for 150 ns;
    rst <= '1';
    selector <= '1';
    updown1 <= '0';
    updown2 <= '1';

    -- o loop vai iterar os contadores com todos valores possíveis
    -- neste, o updown1 está contando para cima e o updown2 contando para baixo. nos próximos loops as outra combinações são testadas
    for i in 0 to 15 loop
      for i in 0 to 15 loop
        wait for 10 ns;
        rst <= '1';

      -- se a xor bit a bit for 0, ou seja, o resultado do circuito e o resultado gold forem iguais, então não ativa a flag de erro
      if selector = '0' then
        if(
            ((soma(0) xor sum(0)) = '0') and
            ((soma(1) xor sum(1)) = '0') and
            ((soma(2) xor sum(2)) = '0') and
            ((soma(3) xor sum(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
      else
        if(
            ((sub(0) xor subt(0)) = '0') and
            ((sub(1) xor subt(1)) = '0') and
            ((sub(2) xor subt(2)) = '0') and
            ((sub(3) xor subt(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
        end if;

      end loop;
    end loop;
    wait for 50ns;


    rst <= '1';
    updown1 <= '1';
    updown2 <= '0';
    for i in 0 to 15 loop
      for i in 0 to 15 loop
        wait for 5 ns;
        rst <= '1';

      if selector = '0' then
        if(
            ((soma(0) xor sum(0)) = '0') and
            ((soma(1) xor sum(1)) = '0') and
            ((soma(2) xor sum(2)) = '0') and
            ((soma(3) xor sum(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
      else
        if(
            ((sub(0) xor subt(0)) = '0') and
            ((sub(1) xor subt(1)) = '0') and
            ((sub(2) xor subt(2)) = '0') and
            ((sub(3) xor subt(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
        end if;

      end loop;
    end loop;
    wait for 50ns;


    rst <= '1';
    updown1 <= '0';
    updown2 <= '0';
    for i in 0 to 15 loop
      for i in 0 to 15 loop
        wait for 5 ns;
        rst <= '1';

      if selector = '0' then
        if(
            ((soma(0) xor sum(0)) = '0') and
            ((soma(1) xor sum(1)) = '0') and
            ((soma(2) xor sum(2)) = '0') and
            ((soma(3) xor sum(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
      else
        if(
            ((sub(0) xor subt(0)) = '0') and
            ((sub(1) xor subt(1)) = '0') and
            ((sub(2) xor subt(2)) = '0') and
            ((sub(3) xor subt(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
        end if;

      end loop;
    end loop;
    wait for 50ns;


    rst <= '1';
    updown1 <= '1';
    updown2 <= '1';
    for i in 0 to 15 loop
      for i in 0 to 15 loop
        wait for 5 ns;

      if selector = '0' then
        if(
            ((soma(0) xor sum(0)) = '0') and
            ((soma(1) xor sum(1)) = '0') and
            ((soma(2) xor sum(2)) = '0') and
            ((soma(3) xor sum(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
      else
        if(
            ((sub(0) xor subt(0)) = '0') and
            ((sub(1) xor subt(1)) = '0') and
            ((sub(2) xor subt(2)) = '0') and
            ((sub(3) xor subt(3)) = '0')
            ) then flag_erro <= '0'; else flag_erro <= '1'; end if;
        end if;

      end loop;
    end loop;
    wait for 50ns;
    end process;

end;