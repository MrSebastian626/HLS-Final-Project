// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbek_H__
#define __dense_lay_64_32_sbek_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbek_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
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


   SC_CTOR(dense_lay_64_32_sbek_ram) {
        ram[0] = "0b010001101000";
        ram[1] = "0b111101111010";
        ram[2] = "0b001001101000";
        ram[3] = "0b000011100001";
        ram[4] = "0b001011011110";
        ram[5] = "0b001101111001";
        ram[6] = "0b111011101111";
        ram[7] = "0b001000011110";
        ram[8] = "0b111101010011";
        ram[9] = "0b000101001011";
        ram[10] = "0b001000000010";
        ram[11] = "0b000010011000";
        ram[12] = "0b000001110101";
        ram[13] = "0b111010100110";
        ram[14] = "0b000001100100";
        ram[15] = "0b111101001010";
        ram[16] = "0b111011100111";
        ram[17] = "0b001000010111";
        ram[18] = "0b000011011101";
        ram[19] = "0b000111000101";
        ram[20] = "0b001001010110";
        ram[21] = "0b000111000101";
        ram[22] = "0b000011101000";
        ram[23] = "0b111110100110";
        ram[24] = "0b000000110110";
        ram[25] = "0b000000101000";
        ram[26] = "0b111011011000";
        ram[27] = "0b000011000111";
        ram[28] = "0b000011011000";
        ram[29] = "0b000110000110";
        ram[30] = "0b111100111100";
        ram[31] = "0b111110100111";


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


SC_MODULE(dense_lay_64_32_sbek) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbek_ram* meminst;


SC_CTOR(dense_lay_64_32_sbek) {
meminst = new dense_lay_64_32_sbek_ram("dense_lay_64_32_sbek_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbek() {
    delete meminst;
}


};//endmodule
#endif
