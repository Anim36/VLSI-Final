library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity cpu_tb is
end cpu_tb;

architecture Behavioral of cpu_tb is
    component cpu is
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC;
               Q : out STD_LOGIC_VECTOR(7 downto 0); Z : out STD_LOGIC;
               PC_OUT : out STD_LOGIC_VECTOR(3 downto 0));
    end component;
	 
	 signal CLK    : STD_LOGIC := '0';
    signal RESET  : STD_LOGIC := '1';
    signal Q      : STD_LOGIC_VECTOR(7 downto 0);
    signal Z      : STD_LOGIC;
    signal PC_OUT : STD_LOGIC_VECTOR(3 downto 0);
    signal done   : STD_LOGIC := '0';
	 
	 constant CLK_PERIOD : time := 10 ns;

    type int_arr is array (1 to 8) of integer;
    constant EXP_ACC : int_arr := (16#02#, 16#01#, 16#01#, 16#00#, 16#00#, 16#21#, 16#42#, 16#43#);
    constant EXP_Z   : int_arr := (0, 0, 0, 1, 1, 0, 0, 0);
    constant EXP_PC  : int_arr := (1, 2, 3, 4, 7, 8, 9, 10);
begin
    UUT : cpu port map (CLK => CLK, RESET => RESET, Q => Q, Z => Z, PC_OUT => PC_OUT);

    clk_proc : process
    begin
	 while done = '0' loop
            CLK <= '0'; wait for CLK_PERIOD/2;
            CLK <= '1'; wait for CLK_PERIOD/2;
        end loop;
        wait;
    end process;
	 
	 stim_proc : process
        variable z_int : integer;
    begin
        RESET <= '1';
        wait until rising_edge(CLK);
        wait for 1 ns;
        assert (unsigned(Q) = 0 and Z = '1' and unsigned(PC_OUT) = 0)
            report "Cycle 0 (RESET) mismatch" severity error;
        RESET <= '0';
		  
		  for i in 1 to 8 loop
            wait until rising_edge(CLK);
            wait for 1 ns;
            if Z = '1' then z_int := 1; else z_int := 0; end if;
            assert (to_integer(unsigned(Q)) = EXP_ACC(i))
                report "ACC mismatch at cycle " & integer'image(i) severity error;
            assert (z_int = EXP_Z(i))
				    report "Z mismatch at cycle " & integer'image(i) severity error;
            assert (to_integer(unsigned(PC_OUT)) = EXP_PC(i))
                report "PC mismatch at cycle " & integer'image(i) severity error;
        end loop;
		  
		  report "Simulation finished: all checks done (Set 6)." severity note;
        wait for CLK_PERIOD;
        done <= '1';
        wait;
    end process;
end Behavioral;