// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_hbi_H__
#define __dense_lay_9_64_s_hbi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_hbi_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_9_64_s_hbi_ram) {
        ram[0] = "0b00000000011111";
        ram[1] = "0b11111111100110";
        ram[2] = "0b00000000000001";
        ram[3] = "0b00000000011110";
        ram[4] = "0b11111101010111";
        ram[5] = "0b10100100110111";
        ram[6] = "0b00000011001010";
        ram[7] = "0b11111111110110";
        ram[8] = "0b00001111001000";
        ram[9] = "0b11111000111011";
        ram[10] = "0b00000000000111";
        ram[11] = "0b00000000101011";
        ram[12] = "0b00000000111011";
        ram[13] = "0b00000010100110";
        ram[14] = "0b11101011000010";
        ram[15] = "0b00000011000100";
        ram[16] = "0b11111111001100";
        ram[17] = "0b00000101100000";
        ram[18] = "0b11110001011110";
        ram[19] = "0b11111111000011";
        ram[20] = "0b11111110010010";
        ram[21] = "0b11111100100110";
        ram[22] = "0b11111101000111";
        ram[23] = "0b11101010011000";
        ram[24] = "0b11111111111001";
        ram[25] = "0b11101110011100";
        ram[26] = "0b00000001001010";
        ram[27] = "0b00000000010110";
        ram[28] = "0b11111111100101";
        ram[29] = "0b00000000011100";
        ram[30] = "0b11111110100110";
        ram[31] = "0b00000000000110";
        ram[32] = "0b10010010101110";
        ram[33] = "0b00000000000111";
        ram[34] = "0b00000011011010";
        ram[35] = "0b00000000001010";
        ram[36] = "0b00000000000101";
        ram[37] = "0b00000101001101";
        ram[38] = "0b10001001100001";
        ram[39] = "0b00000000110000";
        ram[40] = "0b11111111101111";
        ram[41] = "0b11111111100010";
        ram[42] = "0b11111111111110";
        ram[43] = "0b00000000110111";
        ram[44] = "0b11111111101100";
        ram[45] = "0b00000000011101";
        ram[46] = "0b00000000010100";
        ram[47] = "0b11111111011111";
        ram[48] = "0b11111111110100";
        ram[49] = "0b11111110111101";
        ram[50] = "0b11111111111010";
        ram[51] = "0b11111110000111";
        ram[52] = "0b11111011111011";
        ram[53] = "0b11111110010000";
        ram[54] = "0b11111110000100";
        ram[55] = "0b11110101100101";
        ram[56] = "0b11111101000100";
        ram[57] = "0b11111100000011";
        ram[58] = "0b00000111101011";
        ram[59] = "0b00000010101110";
        ram[60] = "0b11111110101011";
        ram[61] = "0b00000000000010";
        ram[62] = "0b00000000000110";
        ram[63] = "0b11111010001101";


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


SC_MODULE(dense_lay_9_64_s_hbi) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_hbi_ram* meminst;


SC_CTOR(dense_lay_9_64_s_hbi) {
meminst = new dense_lay_9_64_s_hbi_ram("dense_lay_9_64_s_hbi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_hbi() {
    delete meminst;
}


};//endmodule
#endif
