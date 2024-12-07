// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_lbW_H__
#define __dense_lay_9_64_s_lbW_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_lbW_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 14;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_lay_9_64_s_lbW_ram) {
        ram[0] = "0b11111001100010";
        ram[1] = "0b00001101011011";
        ram[2] = "0b00001010000010";
        ram[3] = "0b11111100101000";
        ram[4] = "0b11111101010001";
        ram[5] = "0b11110100101101";
        ram[6] = "0b11111011101000";
        ram[7] = "0b11101000111101";
        ram[8] = "0b00000000101110";
        ram[9] = "0b00010101111000";
        ram[10] = "0b11111100000100";
        ram[11] = "0b11101000010000";
        ram[12] = "0b11111101000110";
        ram[13] = "0b11110010110111";
        ram[14] = "0b11111111101000";
        ram[15] = "0b00001110000111";
        ram[16] = "0b00101101101111";
        ram[17] = "0b00000000001000";
        ram[18] = "0b11111101110000";
        ram[19] = "0b00000010010001";
        ram[20] = "0b11110011111100";
        ram[21] = "0b00000111011000";
        ram[22] = "0b11111100000110";
        ram[23] = "0b00001011111010";
        ram[24] = "0b00001001110111";
        ram[25] = "0b00001001000010";
        ram[26] = "0b11100011010101";
        ram[27] = "0b11110011010101";
        ram[28] = "0b00100000000011";
        ram[29] = "0b11110000111011";
        ram[30] = "0b00000000001110";
        ram[31] = "0b11111111111010";
        ram[32] = "0b11111100010101";
        ram[33] = "0b11111000111001";
        ram[34] = "0b11110101001100";
        ram[35] = "0b00000011110000";
        ram[36] = "0b11110001101110";
        ram[37] = "0b00000101011101";
        ram[38] = "0b00011010011011";
        ram[39] = "0b00100010001011";
        ram[40] = "0b11110001100001";
        ram[41] = "0b11110101000010";
        ram[42] = "0b11101111110001";
        ram[43] = "0b00001001010010";
        ram[44] = "0b00000001110100";
        ram[45] = "0b00000011111001";
        ram[46] = "0b11001100111000";
        ram[47] = "0b00000001000000";
        ram[48] = "0b11111111100110";
        ram[49] = "0b00000000000001";
        ram[50] = "0b00100001001000";
        ram[51] = "0b11101001101110";
        ram[52] = "0b00000010010111";
        ram[53] = "0b11111011101111";
        ram[54] = "0b11101011101011";
        ram[55] = "0b11111011111111";
        ram[56] = "0b00000000101100";
        ram[57] = "0b00000100000110";
        ram[58] = "0b11110110110011";
        ram[59] = "0b00000001010110";
        ram[60] = "0b00000001110001";
        ram[61] = "0b10100100000001";
        ram[62] = "0b11111000101011";
        ram[63] = "0b11101000010111";


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


SC_MODULE(dense_lay_9_64_s_lbW) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_lbW_ram* meminst;


SC_CTOR(dense_lay_9_64_s_lbW) {
meminst = new dense_lay_9_64_s_lbW_ram("dense_lay_9_64_s_lbW_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_lbW() {
    delete meminst;
}


};//endmodule
#endif
