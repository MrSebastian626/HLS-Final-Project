-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_fYi_rom is 
    generic(
             DWIDTH     : integer := 14; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_lay_9_64_s_fYi_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100111000011", 1 => "11110111011011", 2 => "00010110100001", 
    3 => "11111111100100", 4 => "00000010011010", 5 => "00001111101100", 
    6 => "00000000011100", 7 => "11011011001110", 8 => "11111110001111", 
    9 => "00010101101110", 10 => "00000011110100", 11 => "11111000111111", 
    12 => "11111100101011", 13 => "11111000011101", 14 => "00000000111000", 
    15 => "11101110001101", 16 => "00001010100100", 17 => "11011000011100", 
    18 => "11111111100001", 19 => "11111101001101", 20 => "00010001111001", 
    21 => "11011000101010", 22 => "11111110001100", 23 => "00010000011000", 
    24 => "00010000010100", 25 => "00010101110100", 26 => "11111001000111", 
    27 => "11010111000011", 28 => "00001110100101", 29 => "01001001011011", 
    30 => "11111111010001", 31 => "00000000001110", 32 => "00000001000101", 
    33 => "11010001101100", 34 => "11100101011000", 35 => "11110110001100", 
    36 => "00001100110111", 37 => "11110101101100", 38 => "11110010010101", 
    39 => "00000110101111", 40 => "00100000011111", 41 => "00000111001111", 
    42 => "11010100110111", 43 => "11110101010001", 44 => "11010101110010", 
    45 => "11111010100011", 46 => "11110100000000", 47 => "11110000011110", 
    48 => "00011100111010", 49 => "11111101100001", 50 => "00000101111010", 
    51 => "11110000001001", 52 => "11111011011110", 53 => "00000010000111", 
    54 => "11101111001011", 55 => "00001100011110", 56 => "11111011110111", 
    57 => "11111110110000", 58 => "00010000100000", 59 => "11111101011010", 
    60 => "00000010101010", 61 => "11111001001101", 62 => "11011000101011", 
    63 => "11100101011100" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_lay_9_64_s_fYi is
    generic (
        DataWidth : INTEGER := 14;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_lay_9_64_s_fYi is
    component dense_lay_9_64_s_fYi_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_fYi_rom_U :  component dense_lay_9_64_s_fYi_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


