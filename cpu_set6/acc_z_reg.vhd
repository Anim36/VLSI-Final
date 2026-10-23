library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity acc_z_reg is
    Port ( CLK    : in  STD_LOGIC;
           RESET  : in  STD_LOGIC;
           ACC_WE : in  STD_LOGIC;
           Z_WE   : in  STD_LOGIC;
           D      : in  STD_LOGIC_VECTOR(7 downto 0);
           ACC    : out STD_LOGIC_VECTOR(7 downto 0);
           Z      : out STD_LOGIC);
end acc_z_reg;

architecture Behavioral of acc_z_reg is
    signal acc_r : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal z_r   : STD_LOGIC := '1';
begin
    process(CLK)
    begin
        if rising_edge(CLK) then
            if RESET = '1' then
                acc_r <= (others => '0');
                z_r   <= '1';
            else
                if ACC_WE = '1' then
                    acc_r <= D;
                end if;
					 if Z_WE = '1' then
                    if D = "00000000" then
                        z_r <= '1';
                    else
                        z_r <= '0';
                    end if;
                end if;
            end if;
        end if;
    end process;
    ACC <= acc_r;
    Z   <= z_r;
end Behavioral;