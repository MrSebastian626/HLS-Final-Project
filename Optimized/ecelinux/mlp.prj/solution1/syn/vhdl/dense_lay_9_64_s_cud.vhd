-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_cud_rom is 
    generic(
             DWIDTH     : integer := 16; 
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


architecture rtl of dense_lay_9_64_s_cud_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011000000011000", 1 => "0011001110101101", 2 => "0011010100101001", 
    3 to 4=> "0000000000000000", 5 => "0000111011101100", 6 => "0010010101010101", 
    7 => "0001101000100100", 8 => "0010010010011110", 9 => "0010000100010111", 
    10 => "1111111111100101", 11 => "0010001000101011", 12 => "0000100011110110", 
    13 => "0000011111110111", 14 => "0010010101100100", 15 => "0010100100111110", 
    16 => "0001100111000011", 17 => "0010100001111111", 18 => "1100111110011001", 
    19 => "0000000000000000", 20 => "1101111011001011", 21 => "1110000001010101", 
    22 => "0000000000000000", 23 => "0001001100001110", 24 => "0010100110010100", 
    25 => "0010000101101101", 26 => "0010000111000110", 27 => "0010011110010010", 
    28 => "0010001101001011", 29 => "0001010110100101", 30 to 31=> "0000000000000000", 
    32 => "0010010001001001", 33 => "0010000111101101", 34 => "0000001011010010", 
    35 => "0000011111001011", 36 => "0001000001000000", 37 => "0010010010101100", 
    38 => "0000100010010010", 39 => "0010000010110011", 40 => "0010111111001000", 
    41 => "0000100000010000", 42 => "0010110101101000", 43 => "1110000110001011", 
    44 => "0010011110100001", 45 => "0100001011010111", 46 => "0010101011111111", 
    47 => "0010110001110100", 48 => "0001011010011111", 49 => "0000000000000000", 
    50 => "0010010100110001", 51 => "0001101010110010", 52 to 53=> "0000000000000000", 
    54 => "0001100100111010", 55 => "0010000101100100", 56 => "0010010110011011", 
    57 => "0000000000000000", 58 => "0001110000010000", 59 => "0001100110001000", 
    60 => "0000000000000000", 61 => "0001001010011011", 62 => "0001011010111001", 
    63 => "0000111110011101" );


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

entity dense_lay_9_64_s_cud is
    generic (
        DataWidth : INTEGER := 16;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_lay_9_64_s_cud is
    component dense_lay_9_64_s_cud_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_cud_rom_U :  component dense_lay_9_64_s_cud_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


