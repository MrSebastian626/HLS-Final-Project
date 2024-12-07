// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbll_H__
#define __dense_lay_64_32_sbll_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbll_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbll_ram) {
        ram[0] = "0b11111001101010";
        ram[1] = "0b11111100010111";
        ram[2] = "0b00000011111000";
        ram[3] = "0b11110001000111";
        ram[4] = "0b11100010000110";
        ram[5] = "0b11111010101111";
        ram[6] = "0b11111110000001";
        ram[7] = "0b00000000100000";
        ram[8] = "0b11111101100010";
        ram[9] = "0b11111100111101";
        ram[10] = "0b11111101010100";
        ram[11] = "0b00000010001101";
        ram[12] = "0b11111111011011";
        ram[13] = "0b11111010111101";
        ram[14] = "0b11111101100010";
        ram[15] = "0b11111111110011";
        ram[16] = "0b00000101001101";
        ram[17] = "0b11111110111101";
        ram[18] = "0b00000001110101";
        ram[19] = "0b11111101100110";
        ram[20] = "0b11111101100100";
        ram[21] = "0b11111010010001";
        ram[22] = "0b11111001101101";
        ram[23] = "0b11111101011101";
        ram[24] = "0b10010000100000";
        ram[25] = "0b00000010110010";
        ram[26] = "0b11111101100100";
        ram[27] = "0b11111100010011";
        ram[28] = "0b11111110110110";
        ram[29] = "0b00000000000011";
        ram[30] = "0b00000001010011";
        ram[31] = "0b11111011011010";


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


SC_MODULE(dense_lay_64_32_sbll) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbll_ram* meminst;


SC_CTOR(dense_lay_64_32_sbll) {
meminst = new dense_lay_64_32_sbll_ram("dense_lay_64_32_sbll_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbll() {
    delete meminst;
}


};//endmodule
#endif
