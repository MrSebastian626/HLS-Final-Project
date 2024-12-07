-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_kbM_rom is 
    generic(
             DWIDTH     : integer := 13; 
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


architecture rtl of dense_lay_9_64_s_kbM_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111001000100", 1 => "0010010010000", 2 => "1111111001010", 
    3 => "0000001110001", 4 => "1111111111010", 5 => "0010001111000", 
    6 => "1111110111000", 7 => "1111101101001", 8 => "1111111101101", 
    9 => "1111111011101", 10 => "0000011001100", 11 => "1110110110011", 
    12 => "0111011111101", 13 => "0100100100011", 14 => "0000000111010", 
    15 => "1111000000001", 16 => "1111111000000", 17 => "1100010011100", 
    18 => "0001101100111", 19 => "1111110000010", 20 => "0010000001101", 
    21 => "1111111111010", 22 => "1111011011110", 23 => "0010010101010", 
    24 => "1110111101101", 25 => "1111111111000", 26 => "0000010000000", 
    27 => "0000011001101", 28 => "0001100110001", 29 => "1111101000010", 
    30 => "0000001001000", 31 => "0000001111100", 32 => "1111111000001", 
    33 => "1111111100100", 34 => "1111010110111", 35 => "0000001111010", 
    36 => "0001000110010", 37 => "0000000000000", 38 => "1011100001011", 
    39 => "1110010010110", 40 => "1101111110000", 41 => "1101001100010", 
    42 => "1111100100000", 43 => "1111001000100", 44 => "0001000010011", 
    45 => "1101011110110", 46 => "1111111100000", 47 => "1101101010010", 
    48 => "1110110100100", 49 => "1111100000110", 50 => "1110110010011", 
    51 => "0001010000101", 52 => "1111101010101", 53 => "1111101011101", 
    54 => "0001001111001", 55 => "1111100000010", 56 => "1111010100011", 
    57 => "1111011101010", 58 => "1111000001110", 59 => "1101011011011", 
    60 => "1111111010110", 61 => "1110111111001", 62 => "0000001110000", 
    63 => "1111111101110" );

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

entity dense_lay_9_64_s_kbM is
    generic (
        DataWidth : INTEGER := 13;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_lay_9_64_s_kbM is
    component dense_lay_9_64_s_kbM_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_kbM_rom_U :  component dense_lay_9_64_s_kbM_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


