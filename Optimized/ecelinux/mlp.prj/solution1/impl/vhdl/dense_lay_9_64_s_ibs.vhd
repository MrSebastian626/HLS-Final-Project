-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_ibs_rom is 
    generic(
             DWIDTH     : integer := 12; 
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


architecture rtl of dense_lay_9_64_s_ibs_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000010001", 1 => "110010010000", 2 => "000011000010", 
    3 => "111101111111", 4 => "111101001001", 5 => "111111011101", 
    6 => "111111101101", 7 => "110111000000", 8 => "111111100010", 
    9 => "110110000101", 10 => "111110000110", 11 => "000010000011", 
    12 => "111101010100", 13 => "111111000000", 14 => "111111101000", 
    15 => "111110010011", 16 => "110100011101", 17 => "110111101101", 
    18 => "111111101110", 19 => "000000110110", 20 => "111110011111", 
    21 => "000011110000", 22 => "000011000011", 23 => "111111010001", 
    24 => "111110001010", 25 => "000001000101", 26 => "010110100011", 
    27 => "010000010011", 28 => "111110011110", 29 => "110101000011", 
    30 => "111101011000", 31 => "111101101010", 32 => "111111100011", 
    33 => "100010111100", 34 => "111011111110", 35 => "001001100001", 
    36 => "110010001010", 37 => "000000011111", 38 => "111011101111", 
    39 => "001000010100", 40 => "111101011011", 41 => "000101111011", 
    42 => "000100001011", 43 => "111101100010", 44 => "000100110111", 
    45 => "000001010100", 46 => "000100011100", 47 => "000001111110", 
    48 => "111001100001", 49 => "111101010010", 50 => "111010010001", 
    51 => "000000000110", 52 => "111101110111", 53 => "111100001100", 
    54 => "110111101110", 55 => "000100010000", 56 => "111111110111", 
    57 => "111110101010", 58 => "000101111010", 59 => "111111100110", 
    60 => "000010101010", 61 => "000010111100", 62 => "011110101010", 
    63 => "000011001110" );

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

entity dense_lay_9_64_s_ibs is
    generic (
        DataWidth : INTEGER := 12;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_lay_9_64_s_ibs is
    component dense_lay_9_64_s_ibs_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_ibs_rom_U :  component dense_lay_9_64_s_ibs_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


