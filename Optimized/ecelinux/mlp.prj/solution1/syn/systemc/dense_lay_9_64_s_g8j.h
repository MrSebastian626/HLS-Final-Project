// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_g8j_H__
#define __dense_lay_9_64_s_g8j_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_g8j_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 15;
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


   SC_CTOR(dense_lay_9_64_s_g8j_ram) {
        ram[0] = "0b111111110111011";
        ram[1] = "0b000000000001111";
        ram[2] = "0b000000000000000";
        ram[3] = "0b111111011101111";
        ram[4] = "0b111111111101110";
        ram[5] = "0b110101100100001";
        ram[6] = "0b111110100010100";
        ram[7] = "0b111111111110000";
        ram[8] = "0b111011011111101";
        ram[9] = "0b000000000001010";
        ram[10] = "0b111111101101000";
        ram[11] = "0b111111111111011";
        ram[12] = "0b000000000001000";
        ram[13] = "0b111111010011010";
        ram[14] = "0b111111110011110";
        ram[15] = "0b111111111100111";
        ram[16] = "0b111111111011111";
        ram[17] = "0b111111100001011";
        ram[18] = "0b110111010100111";
        ram[19] = "0b111111111000001";
        ram[20] = "0b111111111001011";
        ram[21] = "0b000000010001100";
        ram[22] = "0b111111101101111";
        ram[23] = "0b111100111111110";
        ram[24] = "0b000000000000001";
        ram[25] = "0b111111011111111";
        ram[26] = "0b000000000000110";
        ram[27] = "0b000000000101010";
        ram[28] = "0b111111111011000";
        ram[29] = "0b111111111110010";
        ram[30] = "0b111111110110100";
        ram[31] = "0b111111110001000";
        ram[32] = "0b101001100110101";
        ram[33] = "0b000000000001101";
        ram[34] = "0b111111011100010";
        ram[35] = "0b111111111111100";
        ram[36] = "0b111111111011101";
        ram[37] = "0b111101001000110";
        ram[38] = "0b111111100010101";
        ram[39] = "0b111111111001011";
        ram[40] = "0b111111111110110";
        ram[41] = "0b111111111101100";
        ram[42] = "0b111111111100001";
        ram[43] = "0b000000000011100";
        ram[44] = "0b111111111110001";
        ram[45] = "0b000000000100000";
        ram[46] = "0b000000000000001";
        ram[47] = "0b000000000000010";
        ram[48] = "0b111111111101101";
        ram[49] = "0b111111101010011";
        ram[50] = "0b111111111010000";
        ram[51] = "0b000000000110011";
        ram[52] = "0b111111100100010";
        ram[53] = "0b111111100100000";
        ram[54] = "0b000000001000001";
        ram[55] = "0b111111110000111";
        ram[56] = "0b111111010110101";
        ram[57] = "0b111111101111010";
        ram[58] = "0b111110101111111";
        ram[59] = "0b111111010010011";
        ram[60] = "0b111111101100001";
        ram[61] = "0b111111111110010";
        ram[62] = "0b000000000001011";
        ram[63] = "0b000000000000010";


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


SC_MODULE(dense_lay_9_64_s_g8j) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_g8j_ram* meminst;


SC_CTOR(dense_lay_9_64_s_g8j) {
meminst = new dense_lay_9_64_s_g8j_ram("dense_lay_9_64_s_g8j_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_g8j() {
    delete meminst;
}


};//endmodule
#endif
