library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity prog_rom is
    Port ( ADDR : in  STD_LOGIC_VECTOR(3 downto 0);
           DATA : out STD_LOGIC_VECTOR(11 downto 0));
end prog_rom;

architecture Behavioral of prog_rom is
    type rom_t is array (0 to 15) of STD_LOGIC_VECTOR(11 downto 0);
	 constant ROM : rom_t := (
        0  => x"102",  -- LDI 0x02
        1  => x"301",  -- SUB 0x01
        2  => x"C07",  -- JZ  0x07
        3  => x"301",  -- SUB 0x01
        4  => x"C07",  -- JZ  0x07
        5  => x"2AA",  -- ADD 0xAA
        6  => x"2AA",  -- ADD 0xAA
        7  => x"121",  -- LDI 0x21
        8  => x"800",  -- SHL
        9  => x"201",  -- ADD 0x01
        others => x"000"
    );
begin
    DATA <= ROM(to_integer(unsigned(ADDR)));
end Behavioral;