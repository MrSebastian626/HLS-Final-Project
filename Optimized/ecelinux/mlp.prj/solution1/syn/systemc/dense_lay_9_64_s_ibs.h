// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_9_64_s_ibs_H__
#define __dense_lay_9_64_s_ibs_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_9_64_s_ibs_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
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


   SC_CTOR(dense_lay_9_64_s_ibs_ram) {
        ram[0] = "0b000000010001";
        ram[1] = "0b110010010000";
        ram[2] = "0b000011000010";
        ram[3] = "0b111101111111";
        ram[4] = "0b111101001001";
        ram[5] = "0b111111011101";
        ram[6] = "0b111111101101";
        ram[7] = "0b110111000000";
        ram[8] = "0b111111100010";
        ram[9] = "0b110110000101";
        ram[10] = "0b111110000110";
        ram[11] = "0b000010000011";
        ram[12] = "0b111101010100";
        ram[13] = "0b111111000000";
        ram[14] = "0b111111101000";
        ram[15] = "0b111110010011";
        ram[16] = "0b110100011101";
        ram[17] = "0b110111101101";
        ram[18] = "0b111111101110";
        ram[19] = "0b000000110110";
        ram[20] = "0b111110011111";
        ram[21] = "0b000011110000";
        ram[22] = "0b000011000011";
        ram[23] = "0b111111010001";
        ram[24] = "0b111110001010";
        ram[25] = "0b000001000101";
        ram[26] = "0b010110100011";
        ram[27] = "0b010000010011";
        ram[28] = "0b111110011110";
        ram[29] = "0b110101000011";
        ram[30] = "0b111101011000";
        ram[31] = "0b111101101010";
        ram[32] = "0b111111100011";
        ram[33] = "0b100010111100";
        ram[34] = "0b111011111110";
        ram[35] = "0b001001100001";
        ram[36] = "0b110010001010";
        ram[37] = "0b000000011111";
        ram[38] = "0b111011101111";
        ram[39] = "0b001000010100";
        ram[40] = "0b111101011011";
        ram[41] = "0b000101111011";
        ram[42] = "0b000100001011";
        ram[43] = "0b111101100010";
        ram[44] = "0b000100110111";
        ram[45] = "0b000001010100";
        ram[46] = "0b000100011100";
        ram[47] = "0b000001111110";
        ram[48] = "0b111001100001";
        ram[49] = "0b111101010010";
        ram[50] = "0b111010010001";
        ram[51] = "0b000000000110";
        ram[52] = "0b111101110111";
        ram[53] = "0b111100001100";
        ram[54] = "0b110111101110";
        ram[55] = "0b000100010000";
        ram[56] = "0b111111110111";
        ram[57] = "0b111110101010";
        ram[58] = "0b000101111010";
        ram[59] = "0b111111100110";
        ram[60] = "0b000010101010";
        ram[61] = "0b000010111100";
        ram[62] = "0b011110101010";
        ram[63] = "0b000011001110";


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


SC_MODULE(dense_lay_9_64_s_ibs) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_9_64_s_ibs_ram* meminst;


SC_CTOR(dense_lay_9_64_s_ibs) {
meminst = new dense_lay_9_64_s_ibs_ram("dense_lay_9_64_s_ibs_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_9_64_s_ibs() {
    delete meminst;
}


};//endmodule
#endif
