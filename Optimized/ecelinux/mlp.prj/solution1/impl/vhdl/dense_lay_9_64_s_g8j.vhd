-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_g8j_rom is 
    generic(
             DWIDTH     : integer := 15; 
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


architecture rtl of dense_lay_9_64_s_g8j_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111111110111011", 1 => "000000000001111", 2 => "000000000000000", 
    3 => "111111011101111", 4 => "111111111101110", 5 => "110101100100001", 
    6 => "111110100010100", 7 => "111111111110000", 8 => "111011011111101", 
    9 => "000000000001010", 10 => "111111101101000", 11 => "111111111111011", 
    12 => "000000000001000", 13 => "111111010011010", 14 => "111111110011110", 
    15 => "111111111100111", 16 => "111111111011111", 17 => "111111100001011", 
    18 => "110111010100111", 19 => "111111111000001", 20 => "111111111001011", 
    21 => "000000010001100", 22 => "111111101101111", 23 => "111100111111110", 
    24 => "000000000000001", 25 => "111111011111111", 26 => "000000000000110", 
    27 => "000000000101010", 28 => "111111111011000", 29 => "111111111110010", 
    30 => "111111110110100", 31 => "111111110001000", 32 => "101001100110101", 
    33 => "000000000001101", 34 => "111111011100010", 35 => "111111111111100", 
    36 => "111111111011101", 37 => "111101001000110", 38 => "111111100010101", 
    39 => "111111111001011", 40 => "111111111110110", 41 => "111111111101100", 
    42 => "111111111100001", 43 => "000000000011100", 44 => "111111111110001", 
    45 => "000000000100000", 46 => "000000000000001", 47 => "000000000000010", 
    48 => "111111111101101", 49 => "111111101010011", 50 => "111111111010000", 
    51 => "000000000110011", 52 => "111111100100010", 53 => "111111100100000", 
    54 => "000000001000001", 55 => "111111110000111", 56 => "111111010110101", 
    57 => "111111101111010", 58 => "111110101111111", 59 => "111111010010011", 
    60 => "111111101100001", 61 => "111111111110010", 62 => "000000000001011", 
    63 => "000000000000010" );

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

entity dense_lay_9_64_s_g8j is
    generic (
        DataWidth : INTEGER := 15;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_lay_9_64_s_g8j is
    component dense_lay_9_64_s_g8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_g8j_rom_U :  component dense_lay_9_64_s_g8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


