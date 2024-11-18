// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mlp_monte_carlo_bbkb_H__
#define __mlp_monte_carlo_bbkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct mlp_monte_carlo_bbkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
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


   SC_CTOR(mlp_monte_carlo_bbkb_ram) {
        ram[0] = "0b0011000000011000";
        ram[1] = "0b0011001110101101";
        ram[2] = "0b0011010100101001";
        ram[3] = "0b0000000000000000";
        ram[4] = "0b0000000000000000";
        ram[5] = "0b0000111011101100";
        ram[6] = "0b0010010101010101";
        ram[7] = "0b0001101000100100";
        ram[8] = "0b0010010010011110";
        ram[9] = "0b0010000100010111";
        ram[10] = "0b1111111111100101";
        ram[11] = "0b0010001000101011";
        ram[12] = "0b0000100011110110";
        ram[13] = "0b0000011111110111";
        ram[14] = "0b0010010101100100";
        ram[15] = "0b0010100100111110";
        ram[16] = "0b0001100111000011";
        ram[17] = "0b0010100001111111";
        ram[18] = "0b1100111110011001";
        ram[19] = "0b0000000000000000";
        ram[20] = "0b1101111011001011";
        ram[21] = "0b1110000001010101";
        ram[22] = "0b0000000000000000";
        ram[23] = "0b0001001100001110";
        ram[24] = "0b0010100110010100";
        ram[25] = "0b0010000101101101";
        ram[26] = "0b0010000111000110";
        ram[27] = "0b0010011110010010";
        ram[28] = "0b0010001101001011";
        ram[29] = "0b0001010110100101";
        ram[30] = "0b0000000000000000";
        ram[31] = "0b0000000000000000";
        ram[32] = "0b0010010001001001";
        ram[33] = "0b0010000111101101";
        ram[34] = "0b0000001011010010";
        ram[35] = "0b0000011111001011";
        ram[36] = "0b0001000001000000";
        ram[37] = "0b0010010010101100";
        ram[38] = "0b0000100010010010";
        ram[39] = "0b0010000010110011";
        ram[40] = "0b0010111111001000";
        ram[41] = "0b0000100000010000";
        ram[42] = "0b0010110101101000";
        ram[43] = "0b1110000110001011";
        ram[44] = "0b0010011110100001";
        ram[45] = "0b0100001011010111";
        ram[46] = "0b0010101011111111";
        ram[47] = "0b0010110001110100";
        ram[48] = "0b0001011010011111";
        ram[49] = "0b0000000000000000";
        ram[50] = "0b0010010100110001";
        ram[51] = "0b0001101010110010";
        ram[52] = "0b0000000000000000";
        ram[53] = "0b0000000000000000";
        ram[54] = "0b0001100100111010";
        ram[55] = "0b0010000101100100";
        ram[56] = "0b0010010110011011";
        ram[57] = "0b0000000000000000";
        ram[58] = "0b0001110000010000";
        ram[59] = "0b0001100110001000";
        ram[60] = "0b0000000000000000";
        ram[61] = "0b0001001010011011";
        ram[62] = "0b0001011010111001";
        ram[63] = "0b0000111110011101";


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


SC_MODULE(mlp_monte_carlo_bbkb) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


mlp_monte_carlo_bbkb_ram* meminst;


SC_CTOR(mlp_monte_carlo_bbkb) {
meminst = new mlp_monte_carlo_bbkb_ram("mlp_monte_carlo_bbkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~mlp_monte_carlo_bbkb() {
    delete meminst;
}


};//endmodule
#endif
