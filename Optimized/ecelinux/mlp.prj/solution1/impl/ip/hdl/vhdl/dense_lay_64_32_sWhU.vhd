-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_lay_64_32_sWhU_rom is 
    generic(
             DWIDTH     : integer := 9; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_lay_64_32_sWhU_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111000000", 1 => "110000011", 2 => "000110100", 3 => "010101101", 
    4 => "111001000", 5 => "001001100", 6 => "000110100", 7 => "111101101", 
    8 => "111110111", 9 => "001000000", 10 => "111101011", 11 => "101011110", 
    12 => "011111100", 13 => "101100011", 14 => "001100010", 15 => "110001000", 
    16 => "100100111", 17 => "011101100", 18 => "111001000", 19 => "110001100", 
    20 => "001000011", 21 => "000101111", 22 => "111001010", 23 => "101011111", 
    24 => "101010000", 25 => "010111010", 26 => "111011100", 27 => "001011000", 
    28 => "100101011", 29 => "101101001", 30 => "001011110", 31 => "101110100" );

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

entity dense_lay_64_32_sWhU is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_lay_64_32_sWhU is
    component dense_lay_64_32_sWhU_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_lay_64_32_sWhU_rom_U :  component dense_lay_64_32_sWhU_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

