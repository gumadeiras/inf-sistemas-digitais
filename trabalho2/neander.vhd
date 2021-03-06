library IEEE;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity neander is
  port(
      clk, rst : in std_logic;
      accumulator : out std_logic_vector(7 downto 0);
      halt : out std_logic
    );
end neander;

architecture behaviour of neander is

-- bus
  signal PC           : std_logic_vector(7 downto 0);
  signal AC           : std_logic_vector(7 downto 0);
  signal aux_AC       : std_logic_vector(7 downto 0);
  signal DATA         : std_logic_vector(7 downto 0);
  signal mem_END      : std_logic_vector(7 downto 0);
  signal mem_DATA_IN  : std_logic_vector(7 downto 0);
  signal mux_out      : std_logic_vector(7 downto 0);
  signal opcodeaux    : std_logic_vector(7 downto 0);
  signal opcode       : std_logic_vector(3 downto 0);
  signal ULA          : std_logic_vector(7 downto 0);
  signal ula_negative : std_logic;
  signal ula_zero     : std_logic;
  signal ula_nz       : std_logic_vector(1 downto 0);
  signal reg_NZ       : std_logic_vector(1 downto 0);

-- control signals
  signal carga_PC     : std_logic;
  signal increment_PC : std_logic;
  signal carga_AC     : std_logic;
  signal carga_REM    : std_logic;
  signal carga_RDM    : std_logic;
  signal carga_RI     : std_logic;
  signal carga_NZ     : std_logic;
  signal sel_mux      : std_logic;
  signal selULA       : std_logic_vector(2 downto 0);

-- dual port ram signals
  -- port "A"
  signal clka  : std_logic;
  signal rsta  : std_logic;
  signal ena   : std_logic;
  signal wea   : std_logic_vector(0 downto 0);
  signal addra : std_logic_vector(7 downto 0);
  signal dina  : std_logic_vector(7 downto 0);
  signal douta : std_logic_vector(7 downto 0);
  -- port "B"
  signal clkb  : std_logic;
  signal rstb  : std_logic;
  signal enb   : std_logic;
  signal web   : std_logic_vector(0 downto 0);
  signal addrb : std_logic_vector(7 downto 0);
  signal dinb  : std_logic_vector(7 downto 0);
  signal doutb : std_logic_vector(7 downto 0);

  -- multiplication signals
  signal mult_ULA    : std_logic;
  signal mult_MSB    : std_logic;
  signal mult_MUX    : std_logic;
  signal mult_result : std_logic_vector(15 downto 0);


-- FSM definition
  type state_type is (
                      s_pc_mux,
                      s_read_mem,
                      s_read_mem_cycle,
                      s_load_opcode,
                      s_opcode_cycle,
                      s_decoder,
                      s_control,
                      s_control_clk,
                      s_control_0,
                      s_control_0_cycle,
                      s_control_02,
                      s_control_2,
                      s_halt,
                      s_mult0,
                      s_mult1,
                      s_mult2,
                      s_mult3
                      );
  signal s_current, s_next : state_type;

  component dpram
  port (
    clka  : in  std_logic;
    rsta  : in  std_logic;
    ena   : in  std_logic;
    wea   : in  std_logic_vector(0 downto 0);
    addra : in  std_logic_vector(7 downto 0);
    dina  : in  std_logic_vector(7 downto 0);
    douta : out std_logic_vector(7 downto 0);
    clkb  : in  std_logic;
    rstb  : in  std_logic;
    enb   : in  std_logic;
    web   : in  std_logic_vector(0 downto 0);
    addrb : in  std_logic_vector(7 downto 0);
    dinb  : in  std_logic_vector(7 downto 0);
    doutb : out std_logic_vector(7 downto 0)
  );
end component;

begin

  dual_port_ram : dpram
  port map (
    clka  => clka,
    rsta  => rsta,
    ena   => ena,
    wea   => wea,
    addra => addra,
    dina  => AC,
    douta => DATA,
    clkb  => clkb,
    rstb  => rstb,
    enb   => enb,
    web   => web,
    addrb => addrb,
    dinb  => dinb,
    doutb => doutb
  );
  clka  <= clk;
  clkb  <= clk;
  rsta  <= rst;
  rstb  <= rst;

  program_counter : entity work.counter generic map(8) port map(clk, rst, carga_PC, increment_PC, DATA, PC);
  reg_opcode      : entity work.dff generic map(8) port map(clk, rst, carga_RI, DATA, opcodeaux);
  --reg_data_mem    : entity work.dff generic map(8) port map(clk, rst, carga_RDM, mem_DATA_IN, DATA);
  --reg_end_mem     : entity work.dff generic map(8) port map(clk, rst, carga_REM, mux_out, mem_END);
  opcode <= opcodeaux(7 downto 4);
  ula_nz <= ula_negative&ula_zero;
  flags_nz        : entity work.dff generic map(2) port map(clk, rst, carga_NZ, ula_nz, reg_NZ);

  -- ULA
  --with selULA select
  --              ULA <= AC + DATA    when "000",
  --                     AC and DATA  when "001",
  --                     AC or DATA   when "010",
  --                     not AC       when "011",
  --                     DATA         when "100",
  --                     AC xor DATA  when "110",
  --                  (others => '0') when others;
  process(selULA)
  begin
    case selULA is
      when "000" =>
        ULA <= AC + DATA;

      when "001" =>
        ULA <= AC and DATA;

      when "010" =>
        ULA <= AC or DATA;

      when "011" =>
        ULA <= not AC;

      when "100" =>
        ULA <= DATA;

      when "110" =>
        ULA <= AC xor DATA;

      when "111" =>
        if mult_ULA = '0' then
          mult_result <= AC * DATA;
        elsif mult_ULA = '1' then
          ULA <= mult_result(7 downto 0);
        end if;
      when others =>
        ULA <= (others => '0');
    end case;
  end process;

  ULA_NZ_SIGNAL : process(ULA)
  begin
    if (ULA xor "00000000") = 0 then
      ula_zero <= '1';
    else
      ula_zero <= '0';
    end if ;

    if ULA(7) = '1' then
      ula_negative <= '1';
    else
      ula_negative <= '0';
    end if;
  end process;

  --reg_acc         : entity work.dff generic map(8) port map(clk, rst, carga_AC, ULA, AC);
  process (clk, rst) begin
      if rst = '1' then
          aux_AC <= (others => '0');
      elsif rising_edge(clk) then
        if mult_MSB = '1' then
          aux_AC <= mult_result(15 downto 8);
        else
            if carga_AC = '1' then
              aux_AC <= ULA;
            else
              aux_AC <= aux_AC;
            end if ;
        end if;
      end if;
  end process;
  AC          <= aux_AC;
  accumulator <= AC;

  --mux21           : entity work.mux21 generic map(8,8) port map(PC, DATA, sel_mux, addra);
  process(clk, rst)
  begin
    if mult_MUX = '1' then
      addra <= "11111010"; -- endereço 250
    else
      case sel_mux is
        when '0' =>
              addra <= PC;
        when '1' =>
              addra <= DATA;
        when others =>
              addra <= (others => '0');
      end case;
    end if;
  end process;


  state_control : process(clk, rst)
  begin
    if rst = '1' then
      s_current <= s_pc_mux;
    elsif rising_edge(clk) then
      s_current <= s_next;
    else
      s_current <= s_current;
    end if;
  end process;

  state_logic : process(s_current)
  begin

    -- reset all control signals
    --carga_REM    <= '0';
    carga_RI     <= '0';
    carga_NZ     <= '0';
    carga_AC     <= '0';
    --carga_RDM    <= '0';
    carga_PC     <= '0';
    increment_PC <= '0';
    selULA       <= "111";
    sel_mux      <= '0';
    wea          <= "0";
    web          <= "0";
    ena          <= '1';
    enb          <= '0';
    --addra        <= mem_END;
    halt         <= '0';
    mult_ULA     <= '0';


    case s_current is
      when s_pc_mux =>
        sel_mux   <= '0';
        --carga_REM <= '0';
        s_next    <= s_read_mem;

      when s_read_mem =>
        wea          <= "0";
        --carga_REM    <= '1';
        --addra        <= PC;
        ena          <= '1';
        increment_PC <= '1';
        s_next       <= s_read_mem_cycle;

      when s_read_mem_cycle =>
        --carga_RDM    <= '1';
        --carga_RI <= '1';
        s_next <= s_load_opcode;

      when s_load_opcode =>
        carga_RI <= '1';
        s_next   <= s_opcode_cycle;

      when s_opcode_cycle =>
        s_next   <= s_decoder;

      when s_decoder =>
          s_next <= s_control;
          case opcode is
            when "0000" => -- NOP
              s_next <= s_pc_mux;

            when "0001" => -- STA
              sel_mux <= '0';

            when "0010" => -- LDA
              sel_mux <= '0';

            when "0011" => -- ADD
              sel_mux <= '0';

            when "1110" => -- XOR
              sel_mux <= '0';

            when "1100" => -- MULT
              sel_mux <= '0';

            when "0100" => -- OR
              sel_mux <= '0';

            when "0101" => -- AND
              sel_mux <= '0';

            when "0110" => -- NOT
              selULA   <= "011";
              carga_AC <= '1';
              carga_NZ <= '1';
              s_next   <= s_pc_mux;

            when "1000" => -- JMP
              sel_mux <= '0';

            when "1001" => -- JN
              if reg_NZ(1) = '1' then
                sel_mux <= '0';
              elsif reg_NZ(0) = '0' then -- não é negativo, segue o fluxo
                increment_PC <= '1';
                s_next       <= s_pc_mux;
              end if ;

            when "1010" => -- JZ
              if reg_NZ(0) = '1' then
                sel_mux <= '0';
              elsif reg_NZ(0) = '0' then -- não é zero, segue o fluxo
                increment_PC <= '1';
                s_next       <= s_pc_mux;
              end if ;

            when "1111" => -- HALT
              s_next <= s_halt;

            when others =>
              s_next <= s_pc_mux;
          end case ;

      when s_control =>
          s_next <= s_control_clk;
          case opcode is
            when "0001" => -- STA
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "0010" => -- LDA
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "0011" => -- ADD
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "1110" => -- XOR
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "1100" => -- MULT
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "0100" => -- OR
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "0101" => -- AND
              wea          <= "0";
              ena          <= '1';
              increment_PC <= '1';

            when "1000" => -- JMP
              wea <= "0";
              ena <= '1';

            when "1001" => -- JN
              if reg_NZ(1) = '1' then
                wea <= "0";
                ena <= '1';
              end if ;

            when "1010" => -- JZ
              if reg_NZ(0) = '1' then
                wea <= "0";
                ena <= '1';
              end if ;

            when others =>
              s_next <= s_pc_mux;
          end case ;

      when s_control_clk =>
        s_next <= s_control_0; -- wait for clk cycle

      when s_control_0 =>
          s_next <= s_control_0_cycle;
          case opcode is
            when "0001" => -- STA
              wea     <= "1";
              ena     <= '1';
              sel_mux <= '1';

            when "0010" => -- LDA
              wea     <= "0";
              ena     <= '1';
              sel_mux <= '1';

            when "0011" => -- ADD
              wea     <= "0";
              ena     <= '1';
              sel_mux <= '1';

            when "1110" => -- XOR
              wea     <= "0";
              ena     <= '1';
              sel_mux <= '1';

            when "1100" => -- MULT
              wea     <= "0";
              ena     <= '1';
              sel_mux <= '1';

            when "0100" => -- OR
              wea     <= "0";
              ena     <= '1';
              sel_mux <= '1';

            when "0101" => -- AND
              wea     <= "0";
              ena     <= '1';
              sel_mux <= '1';

            when "1000" => -- JMP
              carga_PC <= '1';
              s_next   <= s_pc_mux;

            when "1001" => -- JN
              if reg_NZ(1) = '1' then
                carga_PC <= '1';
                s_next   <= s_pc_mux;
              end if ;

            when "1010" => -- JZ
              if reg_NZ(0) = '1' then
                carga_PC <= '1';
                s_next   <= s_pc_mux;
              end if ;

            when others =>
              s_next <= s_pc_mux;
          end case ;


      when s_control_0_cycle =>
        --case opcode is
        --    when "0010" => -- LDA
        --      selULA <= "100";
        --      carga_NZ <= '1';
        --      carga_AC <= '1';
        --    when "0011" => -- ADD
        --      selULA <= "000";
        --      carga_NZ <= '1';
        --      carga_AC <= '1';
        --    when others =>
        --    s_next <= s_control_2;

        --end case ;
        s_next <= s_control_02;

      when s_control_02 =>
              s_next <= s_control_2;

      when s_control_2 =>
              s_next <= s_pc_mux;

          case opcode is
            when "0010" => -- LDA
              selULA   <= "100";
              carga_NZ <= '1';
              carga_AC <= '1';

            when "0011" => -- ADD
              selULA   <= "000";
              carga_NZ <= '1';
              carga_AC <= '1';

            when "1110" => -- XOR
              selULA   <= "110";
              carga_NZ <= '1';
              carga_AC <= '1';

            when "1100" => -- MULT
              selULA   <= "111";
              mult_ULA <= '0';
              s_next   <= s_mult0;

            when "0100" => -- OR
              selULA   <= "010";
              carga_NZ <= '1';
              carga_AC <= '1';

            when "0101" => -- AND
              selULA   <= "001";
              carga_NZ <= '1';
              carga_AC <= '1';

            when others =>
              s_next <= s_pc_mux;
          end case ;

      when s_halt =>
        halt <= '1';
        carga_REM    <= '0';
        carga_RI     <= '0';
        carga_NZ     <= '0';
        carga_AC     <= '0';
        carga_RDM    <= '0';
        carga_PC     <= '0';
        increment_PC <= '0';
        selULA       <= "111";
        sel_mux      <= '0';
        wea          <= "0";
        web          <= "0";
        ena          <= '0';
        enb          <= '0';

        s_next <= s_halt;

      when s_mult0 =>
        selULA   <= "111";
        carga_NZ <= '1';
        mult_ULA <= '1';
        s_next   <= s_mult1;

      when s_mult1 =>
        mult_MSB <= '1';
        mult_MUX <= '1';
        s_next   <= s_mult2;

      when s_mult2 =>
        mult_MSB <= '1';
        mult_MUX <= '1';
        ena      <= '1';
        wea      <= "1";
        s_next   <= s_mult3;

      when s_mult3 =>
        selULA   <= "111";
        carga_NZ <= '1';
        mult_ULA <= '1';
        carga_AC <= '1';
        s_next   <= s_pc_mux;

      when others =>
        s_next <= s_pc_mux;

    end case ;
  end process;

end behaviour;
