// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_kbM_H__
#define __dense_lay_9_64_s_kbM_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_kbM_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_9_64_s_kbM_ram) {
        ram[0] = "0b1111001000100";
        ram[1] = "0b0010010010000";
        ram[2] = "0b1111111001010";
        ram[3] = "0b0000001110001";
        ram[4] = "0b1111111111010";
        ram[5] = "0b0010001111000";
        ram[6] = "0b1111110111000";
        ram[7] = "0b1111101101001";
        ram[8] = "0b1111111101101";
        ram[9] = "0b1111111011101";
        ram[10] = "0b0000011001100";
        ram[11] = "0b1110110110011";
        ram[12] = "0b0111011111101";
        ram[13] = "0b0100100100011";
        ram[14] = "0b0000000111010";
        ram[15] = "0b1111000000001";
        ram[16] = "0b1111111000000";
        ram[17] = "0b1100010011100";
        ram[18] = "0b0001101100111";
        ram[19] = "0b1111110000010";
        ram[20] = "0b0010000001101";
        ram[21] = "0b1111111111010";
        ram[22] = "0b1111011011110";
        ram[23] = "0b0010010101010";
        ram[24] = "0b1110111101101";
        ram[25] = "0b1111111111000";
        ram[26] = "0b0000010000000";
        ram[27] = "0b0000011001101";
        ram[28] = "0b0001100110001";
        ram[29] = "0b1111101000010";
        ram[30] = "0b0000001001000";
        ram[31] = "0b0000001111100";
        ram[32] = "0b1111111000001";
        ram[33] = "0b1111111100100";
        ram[34] = "0b1111010110111";
        ram[35] = "0b0000001111010";
        ram[36] = "0b0001000110010";
        ram[37] = "0b0000000000000";
        ram[38] = "0b1011100001011";
        ram[39] = "0b1110010010110";
        ram[40] = "0b1101111110000";
        ram[41] = "0b1101001100010";
        ram[42] = "0b1111100100000";
        ram[43] = "0b1111001000100";
        ram[44] = "0b0001000010011";
        ram[45] = "0b1101011110110";
        ram[46] = "0b1111111100000";
        ram[47] = "0b1101101010010";
        ram[48] = "0b1110110100100";
        ram[49] = "0b1111100000110";
        ram[50] = "0b1110110010011";
        ram[51] = "0b0001010000101";
        ram[52] = "0b1111101010101";
        ram[53] = "0b1111101011101";
        ram[54] = "0b0001001111001";
        ram[55] = "0b1111100000010";
        ram[56] = "0b1111010100011";
        ram[57] = "0b1111011101010";
        ram[58] = "0b1111000001110";
        ram[59] = "0b1101011011011";
        ram[60] = "0b1111111010110";
        ram[61] = "0b1110111111001";
        ram[62] = "0b0000001110000";
        ram[63] = "0b1111111101110";


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


SC_MODULE(dense_lay_9_64_s_kbM) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_kbM_ram* meminst;


SC_CTOR(dense_lay_9_64_s_kbM) {
meminst = new dense_lay_9_64_s_kbM_ram("dense_lay_9_64_s_kbM_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_kbM() {
    delete meminst;
}


};//endmodule
#endif
