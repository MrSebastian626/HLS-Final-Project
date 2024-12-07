// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sFfa_H__
#define __dense_lay_64_32_sFfa_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sFfa_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 14;
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


   SC_CTOR(dense_lay_64_32_sFfa_ram) {
        ram[0] = "0b10000001110111";
        ram[1] = "0b11111100000001";
        ram[2] = "0b10101000011101";
        ram[3] = "0b10110111100101";
        ram[4] = "0b10110011010100";
        ram[5] = "0b10010101011111";
        ram[6] = "0b00000001111010";
        ram[7] = "0b10001010000010";
        ram[8] = "0b11111111000011";
        ram[9] = "0b10000100000110";
        ram[10] = "0b10001000000100";
        ram[11] = "0b10000100010101";
        ram[12] = "0b00000001100100";
        ram[13] = "0b11111100111000";
        ram[14] = "0b10101001000110";
        ram[15] = "0b00000000100011";
        ram[16] = "0b10001011011100";
        ram[17] = "0b10011000000001";
        ram[18] = "0b10010101000110";
        ram[19] = "0b10010110000000";
        ram[20] = "0b10101000011101";
        ram[21] = "0b10001100111010";
        ram[22] = "0b10010101011011";
        ram[23] = "0b10111111111110";
        ram[24] = "0b10101101000100";
        ram[25] = "0b10001001101011";
        ram[26] = "0b11111111000101";
        ram[27] = "0b10011001100110";
        ram[28] = "0b10011001111110";
        ram[29] = "0b10001100100001";
        ram[30] = "0b11111101100111";
        ram[31] = "0b10000011111111";


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


SC_MODULE(dense_lay_64_32_sFfa) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sFfa_ram* meminst;


SC_CTOR(dense_lay_64_32_sFfa) {
meminst = new dense_lay_64_32_sFfa_ram("dense_lay_64_32_sFfa_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sFfa() {
    delete meminst;
}


};//endmodule
#endif
