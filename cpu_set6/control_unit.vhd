library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    Port ( OPCODE  : in  STD_LOGIC_VECTOR(3 downto 0);
           Z       : in  STD_LOGIC;
           ALU_SEL : out STD_LOGIC_VECTOR(2 downto 0);
           ACC_WE  : out STD_LOGIC;
           Z_WE    : out STD_LOGIC;
           JUMP    : out STD_LOGIC);
end control_unit;
architecture Behavioral of control_unit is
begin
    process(OPCODE, Z)
    begin
        ALU_SEL <= "000";
        ACC_WE  <= '0';
        Z_WE    <= '0';
        JUMP    <= '0';
        case OPCODE is
            when "0001" =>  -- LDI
                ALU_SEL <= "000"; ACC_WE <= '1'; Z_WE <= '1';
            when "0010" =>  -- ADD
                ALU_SEL <= "001"; ACC_WE <= '1'; Z_WE <= '1';
            when "0011" =>  -- SUB
				    ALU_SEL <= "010"; ACC_WE <= '1'; Z_WE <= '1';
            when "1000" =>  -- SHL
                ALU_SEL <= "011"; ACC_WE <= '1'; Z_WE <= '1';
            when "1100" =>  -- JZ
                if Z = '1' then
                    JUMP <= '1';
                end if;
            when others =>
                null;
        end case;
    end process;
end Behavioral;