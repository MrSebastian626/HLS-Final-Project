// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_fYi_H__
#define __dense_lay_9_64_s_fYi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_fYi_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_9_64_s_fYi_ram) {
        ram[0] = "0b11100111000011";
        ram[1] = "0b11110111011011";
        ram[2] = "0b00010110100001";
        ram[3] = "0b11111111100100";
        ram[4] = "0b00000010011010";
        ram[5] = "0b00001111101100";
        ram[6] = "0b00000000011100";
        ram[7] = "0b11011011001110";
        ram[8] = "0b11111110001111";
        ram[9] = "0b00010101101110";
        ram[10] = "0b00000011110100";
        ram[11] = "0b11111000111111";
        ram[12] = "0b11111100101011";
        ram[13] = "0b11111000011101";
        ram[14] = "0b00000000111000";
        ram[15] = "0b11101110001101";
        ram[16] = "0b00001010100100";
        ram[17] = "0b11011000011100";
        ram[18] = "0b11111111100001";
        ram[19] = "0b11111101001101";
        ram[20] = "0b00010001111001";
        ram[21] = "0b11011000101010";
        ram[22] = "0b11111110001100";
        ram[23] = "0b00010000011000";
        ram[24] = "0b00010000010100";
        ram[25] = "0b00010101110100";
        ram[26] = "0b11111001000111";
        ram[27] = "0b11010111000011";
        ram[28] = "0b00001110100101";
        ram[29] = "0b01001001011011";
        ram[30] = "0b11111111010001";
        ram[31] = "0b00000000001110";
        ram[32] = "0b00000001000101";
        ram[33] = "0b11010001101100";
        ram[34] = "0b11100101011000";
        ram[35] = "0b11110110001100";
        ram[36] = "0b00001100110111";
        ram[37] = "0b11110101101100";
        ram[38] = "0b11110010010101";
        ram[39] = "0b00000110101111";
        ram[40] = "0b00100000011111";
        ram[41] = "0b00000111001111";
        ram[42] = "0b11010100110111";
        ram[43] = "0b11110101010001";
        ram[44] = "0b11010101110010";
        ram[45] = "0b11111010100011";
        ram[46] = "0b11110100000000";
        ram[47] = "0b11110000011110";
        ram[48] = "0b00011100111010";
        ram[49] = "0b11111101100001";
        ram[50] = "0b00000101111010";
        ram[51] = "0b11110000001001";
        ram[52] = "0b11111011011110";
        ram[53] = "0b00000010000111";
        ram[54] = "0b11101111001011";
        ram[55] = "0b00001100011110";
        ram[56] = "0b11111011110111";
        ram[57] = "0b11111110110000";
        ram[58] = "0b00010000100000";
        ram[59] = "0b11111101011010";
        ram[60] = "0b00000010101010";
        ram[61] = "0b11111001001101";
        ram[62] = "0b11011000101011";
        ram[63] = "0b11100101011100";


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


SC_MODULE(dense_lay_9_64_s_fYi) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_fYi_ram* meminst;


SC_CTOR(dense_lay_9_64_s_fYi) {
meminst = new dense_lay_9_64_s_fYi_ram("dense_lay_9_64_s_fYi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_fYi() {
    delete meminst;
}


};//endmodule
#endif
