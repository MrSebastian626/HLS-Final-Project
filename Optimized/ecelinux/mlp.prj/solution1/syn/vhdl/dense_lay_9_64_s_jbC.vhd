-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_9_64_s_jbC_rom is 
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


architecture rtl of dense_lay_9_64_s_jbC_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000101101000", 1 => "1100101111110", 2 => "0000101110110", 
    3 => "0000011001100", 4 => "1111111000101", 5 => "0001110110110", 
    6 => "1111101101111", 7 => "1001111110001", 8 => "1110101001100", 
    9 => "0001011100110", 10 => "0000011110110", 11 => "0011000001001", 
    12 => "1011011111100", 13 => "0000100000000", 14 => "1100100101010", 
    15 => "0001100110100", 16 => "0100010100100", 17 => "1111101101001", 
    18 => "1111100100101", 19 => "1111011101101", 20 => "0001001000000", 
    21 => "0001010000110", 22 => "0000011001010", 23 => "0001111000010", 
    24 => "1010001111000", 25 => "1110010111001", 26 => "0000010101111", 
    27 => "1111001011101", 28 => "1100101010110", 29 => "0010010100010", 
    30 => "0000001011001", 31 => "1111100111110", 32 => "1110101011111", 
    33 => "0111101101000", 34 => "0100011011011", 35 => "0110100010101", 
    36 => "0100101000001", 37 => "1110001000110", 38 => "0000001100111", 
    39 => "0000110110100", 40 => "1111100001000", 41 => "0111001011111", 
    42 => "0011110000101", 43 => "1101101101111", 44 => "1100011100011", 
    45 => "1001001001101", 46 => "1101001010000", 47 => "1111011011111", 
    48 => "0110101111111", 49 => "0000010001010", 50 => "1111101000110", 
    51 => "0100000110010", 52 => "0000010110011", 53 => "1111101111001", 
    54 => "0011110101001", 55 => "0000101001001", 56 => "1111110110010", 
    57 => "1111111100001", 58 => "1110010110001", 59 => "1101000001000", 
    60 => "1111100010001", 61 => "1111100110001", 62 => "1100001000010", 
    63 => "1111100011111" );

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

entity dense_lay_9_64_s_jbC is
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

architecture arch of dense_lay_9_64_s_jbC is
    component dense_lay_9_64_s_jbC_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_9_64_s_jbC_rom_U :  component dense_lay_9_64_s_jbC_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


