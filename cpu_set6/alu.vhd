library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu is
    Port ( ACC     : in  STD_LOGIC_VECTOR(7 downto 0);
           IMM     : in  STD_LOGIC_VECTOR(7 downto 0);
           ALU_SEL : in  STD_LOGIC_VECTOR(2 downto 0);
           Y       : out STD_LOGIC_VECTOR(7 downto 0));
end alu;

architecture Behavioral of alu is
begin
    process(ACC, IMM, ALU_SEL)
    begin
        case ALU_SEL is
            when "000"  => Y <= IMM;
            when "001"  => Y <= std_logic_vector(unsigned(ACC) + unsigned(IMM));
            when "010"  => Y <= std_logic_vector(unsigned(ACC) - unsigned(IMM));
            when "011"  => Y <= ACC(6 downto 0) & '0';
            when others => Y <= ACC;
        end case;
    end process;
end Behavioral;