// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_dEe_H__
#define __dense_lay_9_64_s_dEe_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_dEe_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_9_64_s_dEe_ram) {
        ram[0] = "0b0000011001001";
        ram[1] = "0b0000000100001";
        ram[2] = "0b1101111111011";
        ram[3] = "0b1111100000110";
        ram[4] = "0b1111101010011";
        ram[5] = "0b1111110110100";
        ram[6] = "0b1111110010100";
        ram[7] = "0b0011110100111";
        ram[8] = "0b1111111001111";
        ram[9] = "0b1111111111001";
        ram[10] = "0b1111111001101";
        ram[11] = "0b0000100100001";
        ram[12] = "0b0000000101000";
        ram[13] = "0b0000011011101";
        ram[14] = "0b0000000110011";
        ram[15] = "0b1111100101001";
        ram[16] = "0b0001000110011";
        ram[17] = "0b0000011011100";
        ram[18] = "0b1111111010001";
        ram[19] = "0b1111110001100";
        ram[20] = "0b0001000110010";
        ram[21] = "0b0001000101011";
        ram[22] = "0b0000001001101";
        ram[23] = "0b0000001101010";
        ram[24] = "0b0011000110101";
        ram[25] = "0b1110110110001";
        ram[26] = "0b0000111110010";
        ram[27] = "0b1100011001011";
        ram[28] = "0b0011010001101";
        ram[29] = "0b0001000011100";
        ram[30] = "0b1111110001001";
        ram[31] = "0b1111110000001";
        ram[32] = "0b0000000001111";
        ram[33] = "0b1111000101100";
        ram[34] = "0b0010010110000";
        ram[35] = "0b1101101111110";
        ram[36] = "0b0001110000001";
        ram[37] = "0b1111011110000";
        ram[38] = "0b0010001001001";
        ram[39] = "0b1110100100001";
        ram[40] = "0b1111001011110";
        ram[41] = "0b0010010011010";
        ram[42] = "0b0001010000011";
        ram[43] = "0b0100111011011";
        ram[44] = "0b1111010111100";
        ram[45] = "0b1110111111011";
        ram[46] = "0b0000101001000";
        ram[47] = "0b0000110100001";
        ram[48] = "0b0011011011100";
        ram[49] = "0b1111100001010";
        ram[50] = "0b0000100011110";
        ram[51] = "0b0010001110001";
        ram[52] = "0b1111111001010";
        ram[53] = "0b1111110111101";
        ram[54] = "0b0001110001100";
        ram[55] = "0b1110001100110";
        ram[56] = "0b0000010011111";
        ram[57] = "0b1111110011111";
        ram[58] = "0b0000100001111";
        ram[59] = "0b0000101111101";
        ram[60] = "0b1111111000001";
        ram[61] = "0b0001011010101";
        ram[62] = "0b1101101110101";
        ram[63] = "0b1111100101001";


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


SC_MODULE(dense_lay_9_64_s_dEe) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_dEe_ram* meminst;


SC_CTOR(dense_lay_9_64_s_dEe) {
meminst = new dense_lay_9_64_s_dEe_ram("dense_lay_9_64_s_dEe_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_dEe() {
    delete meminst;
}


};//endmodule
#endif
