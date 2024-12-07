-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_lbW_rom is 
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


architecture rtl of dense_lay_9_64_s_lbW_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111001100010", 1 => "00001101011011", 2 => "00001010000010", 
    3 => "11111100101000", 4 => "11111101010001", 5 => "11110100101101", 
    6 => "11111011101000", 7 => "11101000111101", 8 => "00000000101110", 
    9 => "00010101111000", 10 => "11111100000100", 11 => "11101000010000", 
    12 => "11111101000110", 13 => "11110010110111", 14 => "11111111101000", 
    15 => "00001110000111", 16 => "00101101101111", 17 => "00000000001000", 
    18 => "11111101110000", 19 => "00000010010001", 20 => "11110011111100", 
    21 => "00000111011000", 22 => "11111100000110", 23 => "00001011111010", 
    24 => "00001001110111", 25 => "00001001000010", 26 => "11100011010101", 
    27 => "11110011010101", 28 => "00100000000011", 29 => "11110000111011", 
    30 => "00000000001110", 31 => "11111111111010", 32 => "11111100010101", 
    33 => "11111000111001", 34 => "11110101001100", 35 => "00000011110000", 
    36 => "11110001101110", 37 => "00000101011101", 38 => "00011010011011", 
    39 => "00100010001011", 40 => "11110001100001", 41 => "11110101000010", 
    42 => "11101111110001", 43 => "00001001010010", 44 => "00000001110100", 
    45 => "00000011111001", 46 => "11001100111000", 47 => "00000001000000", 
    48 => "11111111100110", 49 => "00000000000001", 50 => "00100001001000", 
    51 => "11101001101110", 52 => "00000010010111", 53 => "11111011101111", 
    54 => "11101011101011", 55 => "11111011111111", 56 => "00000000101100", 
    57 => "00000100000110", 58 => "11110110110011", 59 => "00000001010110", 
    60 => "00000001110001", 61 => "10100100000001", 62 => "11111000101011", 
    63 => "11101000010111" );

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

entity dense_lay_9_64_s_lbW is
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

architecture arch of dense_lay_9_64_s_lbW is
    component dense_lay_9_64_s_lbW_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_lbW_rom_U :  component dense_lay_9_64_s_lbW_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


