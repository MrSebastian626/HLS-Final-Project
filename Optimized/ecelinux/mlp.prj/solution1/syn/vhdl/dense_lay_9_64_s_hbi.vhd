-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_hbi_rom is 
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


architecture rtl of dense_lay_9_64_s_hbi_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000000011111", 1 => "11111111100110", 2 => "00000000000001", 
    3 => "00000000011110", 4 => "11111101010111", 5 => "10100100110111", 
    6 => "00000011001010", 7 => "11111111110110", 8 => "00001111001000", 
    9 => "11111000111011", 10 => "00000000000111", 11 => "00000000101011", 
    12 => "00000000111011", 13 => "00000010100110", 14 => "11101011000010", 
    15 => "00000011000100", 16 => "11111111001100", 17 => "00000101100000", 
    18 => "11110001011110", 19 => "11111111000011", 20 => "11111110010010", 
    21 => "11111100100110", 22 => "11111101000111", 23 => "11101010011000", 
    24 => "11111111111001", 25 => "11101110011100", 26 => "00000001001010", 
    27 => "00000000010110", 28 => "11111111100101", 29 => "00000000011100", 
    30 => "11111110100110", 31 => "00000000000110", 32 => "10010010101110", 
    33 => "00000000000111", 34 => "00000011011010", 35 => "00000000001010", 
    36 => "00000000000101", 37 => "00000101001101", 38 => "10001001100001", 
    39 => "00000000110000", 40 => "11111111101111", 41 => "11111111100010", 
    42 => "11111111111110", 43 => "00000000110111", 44 => "11111111101100", 
    45 => "00000000011101", 46 => "00000000010100", 47 => "11111111011111", 
    48 => "11111111110100", 49 => "11111110111101", 50 => "11111111111010", 
    51 => "11111110000111", 52 => "11111011111011", 53 => "11111110010000", 
    54 => "11111110000100", 55 => "11110101100101", 56 => "11111101000100", 
    57 => "11111100000011", 58 => "00000111101011", 59 => "00000010101110", 
    60 => "11111110101011", 61 => "00000000000010", 62 => "00000000000110", 
    63 => "11111010001101" );

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

entity dense_lay_9_64_s_hbi is
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

architecture arch of dense_lay_9_64_s_hbi is
    component dense_lay_9_64_s_hbi_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_hbi_rom_U :  component dense_lay_9_64_s_hbi_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


