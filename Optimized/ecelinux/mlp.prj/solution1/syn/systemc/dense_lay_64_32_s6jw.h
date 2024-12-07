// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_s6jw_H__
#define __dense_lay_64_32_s6jw_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_s6jw_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_lay_64_32_s6jw_ram) {
        ram[0] = "0b01100111001";
        ram[1] = "0b11110101010";
        ram[2] = "0b10111000111";
        ram[3] = "0b11011111110";
        ram[4] = "0b00100100001";
        ram[5] = "0b11100111010";
        ram[6] = "0b00001011101";
        ram[7] = "0b00011101101";
        ram[8] = "0b00000110101";
        ram[9] = "0b11110110110";
        ram[10] = "0b00000100011";
        ram[11] = "0b00010100111";
        ram[12] = "0b11101111110";
        ram[13] = "0b11111101010";
        ram[14] = "0b11010101000";
        ram[15] = "0b00001110100";
        ram[16] = "0b11110110011";
        ram[17] = "0b00010101111";
        ram[18] = "0b00011010011";
        ram[19] = "0b11111010101";
        ram[20] = "0b11110011011";
        ram[21] = "0b00010001100";
        ram[22] = "0b11110110000";
        ram[23] = "0b00000101011";
        ram[24] = "0b00110100011";
        ram[25] = "0b11110111111";
        ram[26] = "0b00000011000";
        ram[27] = "0b00011111011";
        ram[28] = "0b00000111101";
        ram[29] = "0b00100000001";
        ram[30] = "0b11110000110";
        ram[31] = "0b00100100011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_lay_64_32_s6jw) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_s6jw_ram* meminst;


SC_CTOR(dense_lay_64_32_s6jw) {
meminst = new dense_lay_64_32_s6jw_ram("dense_lay_64_32_s6jw_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_s6jw() {
    delete meminst;
}


};//endmodule
#endif
