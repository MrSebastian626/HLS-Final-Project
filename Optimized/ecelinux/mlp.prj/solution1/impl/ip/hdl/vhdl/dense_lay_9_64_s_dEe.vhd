-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_dEe_rom is 
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


architecture rtl of dense_lay_9_64_s_dEe_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000011001001", 1 => "0000000100001", 2 => "1101111111011", 
    3 => "1111100000110", 4 => "1111101010011", 5 => "1111110110100", 
    6 => "1111110010100", 7 => "0011110100111", 8 => "1111111001111", 
    9 => "1111111111001", 10 => "1111111001101", 11 => "0000100100001", 
    12 => "0000000101000", 13 => "0000011011101", 14 => "0000000110011", 
    15 => "1111100101001", 16 => "0001000110011", 17 => "0000011011100", 
    18 => "1111111010001", 19 => "1111110001100", 20 => "0001000110010", 
    21 => "0001000101011", 22 => "0000001001101", 23 => "0000001101010", 
    24 => "0011000110101", 25 => "1110110110001", 26 => "0000111110010", 
    27 => "1100011001011", 28 => "0011010001101", 29 => "0001000011100", 
    30 => "1111110001001", 31 => "1111110000001", 32 => "0000000001111", 
    33 => "1111000101100", 34 => "0010010110000", 35 => "1101101111110", 
    36 => "0001110000001", 37 => "1111011110000", 38 => "0010001001001", 
    39 => "1110100100001", 40 => "1111001011110", 41 => "0010010011010", 
    42 => "0001010000011", 43 => "0100111011011", 44 => "1111010111100", 
    45 => "1110111111011", 46 => "0000101001000", 47 => "0000110100001", 
    48 => "0011011011100", 49 => "1111100001010", 50 => "0000100011110", 
    51 => "0010001110001", 52 => "1111111001010", 53 => "1111110111101", 
    54 => "0001110001100", 55 => "1110001100110", 56 => "0000010011111", 
    57 => "1111110011111", 58 => "0000100001111", 59 => "0000101111101", 
    60 => "1111111000001", 61 => "0001011010101", 62 => "1101101110101", 
    63 => "1111100101001" );

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

entity dense_lay_9_64_s_dEe is
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

architecture arch of dense_lay_9_64_s_dEe is
    component dense_lay_9_64_s_dEe_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_dEe_rom_U :  component dense_lay_9_64_s_dEe_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


