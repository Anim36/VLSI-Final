library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu is
    Port ( CLK    : in  STD_LOGIC;
           RESET  : in  STD_LOGIC;
           Q      : out STD_LOGIC_VECTOR(7 downto 0);
           Z      : out STD_LOGIC;
           PC_OUT : out STD_LOGIC_VECTOR(3 downto 0));
end cpu;
architecture Structural of cpu is
    component pc is
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC; JUMP : in STD_LOGIC;
               JADDR : in STD_LOGIC_VECTOR(3 downto 0);
               PC_OUT : out STD_LOGIC_VECTOR(3 downto 0));
    end component;
    component prog_rom is
        Port ( ADDR : in STD_LOGIC_VECTOR(3 downto 0);
               DATA : out STD_LOGIC_VECTOR(11 downto 0));
    end component;
	 component control_unit is
        Port ( OPCODE : in STD_LOGIC_VECTOR(3 downto 0); Z : in STD_LOGIC;
               ALU_SEL : out STD_LOGIC_VECTOR(2 downto 0);
               ACC_WE : out STD_LOGIC; Z_WE : out STD_LOGIC; JUMP : out STD_LOGIC);
    end component;
	 component alu is
        Port ( ACC : in STD_LOGIC_VECTOR(7 downto 0);
               IMM : in STD_LOGIC_VECTOR(7 downto 0);
               ALU_SEL : in STD_LOGIC_VECTOR(2 downto 0);
               Y : out STD_LOGIC_VECTOR(7 downto 0));
    end component;
	 component acc_z_reg is
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC;
               ACC_WE : in STD_LOGIC; Z_WE : in STD_LOGIC;
               D : in STD_LOGIC_VECTOR(7 downto 0);
               ACC : out STD_LOGIC_VECTOR(7 downto 0); Z : out STD_LOGIC);
    end component;
	 signal pc_s    : STD_LOGIC_VECTOR(3 downto 0);
    signal instr_s : STD_LOGIC_VECTOR(11 downto 0);
    signal acc_s   : STD_LOGIC_VECTOR(7 downto 0);
    signal z_s     : STD_LOGIC;
    signal alu_y   : STD_LOGIC_VECTOR(7 downto 0);
    signal alu_sel : STD_LOGIC_VECTOR(2 downto 0);
    signal acc_we, z_we, jump_s : STD_LOGIC;
begin
    U_PC  : pc port map (CLK => CLK, RESET => RESET, JUMP => jump_s,
                         JADDR => instr_s(3 downto 0), PC_OUT => pc_s);
    U_ROM : prog_rom port map (ADDR => pc_s, DATA => instr_s);
    U_CU  : control_unit port map (OPCODE => instr_s(11 downto 8), Z => z_s,
	                      ALU_SEL => alu_sel, ACC_WE => acc_we, Z_WE => z_we, JUMP => jump_s);
    U_ALU : alu port map (ACC => acc_s, IMM => instr_s(7 downto 0),
                         ALU_SEL => alu_sel, Y => alu_y);
    U_REG : acc_z_reg port map (CLK => CLK, RESET => RESET, ACC_WE => acc_we,
                         Z_WE => z_we, D => alu_y, ACC => acc_s, Z => z_s);
	 Q      <= acc_s;
    Z      <= z_s;
    PC_OUT <= pc_s;
end Structural;