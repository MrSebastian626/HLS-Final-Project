// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_jbC_H__
#define __dense_lay_9_64_s_jbC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_jbC_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
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


   SC_CTOR(dense_lay_9_64_s_jbC_ram) {
        ram[0] = "0b0000101101000";
        ram[1] = "0b1100101111110";
        ram[2] = "0b0000101110110";
        ram[3] = "0b0000011001100";
        ram[4] = "0b1111111000101";
        ram[5] = "0b0001110110110";
        ram[6] = "0b1111101101111";
        ram[7] = "0b1001111110001";
        ram[8] = "0b1110101001100";
        ram[9] = "0b0001011100110";
        ram[10] = "0b0000011110110";
        ram[11] = "0b0011000001001";
        ram[12] = "0b1011011111100";
        ram[13] = "0b0000100000000";
        ram[14] = "0b1100100101010";
        ram[15] = "0b0001100110100";
        ram[16] = "0b0100010100100";
        ram[17] = "0b1111101101001";
        ram[18] = "0b1111100100101";
        ram[19] = "0b1111011101101";
        ram[20] = "0b0001001000000";
        ram[21] = "0b0001010000110";
        ram[22] = "0b0000011001010";
        ram[23] = "0b0001111000010";
        ram[24] = "0b1010001111000";
        ram[25] = "0b1110010111001";
        ram[26] = "0b0000010101111";
        ram[27] = "0b1111001011101";
        ram[28] = "0b1100101010110";
        ram[29] = "0b0010010100010";
        ram[30] = "0b0000001011001";
        ram[31] = "0b1111100111110";
        ram[32] = "0b1110101011111";
        ram[33] = "0b0111101101000";
        ram[34] = "0b0100011011011";
        ram[35] = "0b0110100010101";
        ram[36] = "0b0100101000001";
        ram[37] = "0b1110001000110";
        ram[38] = "0b0000001100111";
        ram[39] = "0b0000110110100";
        ram[40] = "0b1111100001000";
        ram[41] = "0b0111001011111";
        ram[42] = "0b0011110000101";
        ram[43] = "0b1101101101111";
        ram[44] = "0b1100011100011";
        ram[45] = "0b1001001001101";
        ram[46] = "0b1101001010000";
        ram[47] = "0b1111011011111";
        ram[48] = "0b0110101111111";
        ram[49] = "0b0000010001010";
        ram[50] = "0b1111101000110";
        ram[51] = "0b0100000110010";
        ram[52] = "0b0000010110011";
        ram[53] = "0b1111101111001";
        ram[54] = "0b0011110101001";
        ram[55] = "0b0000101001001";
        ram[56] = "0b1111110110010";
        ram[57] = "0b1111111100001";
        ram[58] = "0b1110010110001";
        ram[59] = "0b1101000001000";
        ram[60] = "0b1111100010001";
        ram[61] = "0b1111100110001";
        ram[62] = "0b1100001000010";
        ram[63] = "0b1111100011111";


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


SC_MODULE(dense_lay_9_64_s_jbC) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_jbC_ram* meminst;


SC_CTOR(dense_lay_9_64_s_jbC) {
meminst = new dense_lay_9_64_s_jbC_ram("dense_lay_9_64_s_jbC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_jbC() {
    delete meminst;
}


};//endmodule
#endif
