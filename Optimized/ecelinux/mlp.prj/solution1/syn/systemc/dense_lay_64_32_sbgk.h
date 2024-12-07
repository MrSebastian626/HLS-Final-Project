// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbgk_H__
#define __dense_lay_64_32_sbgk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbgk_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
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


   SC_CTOR(dense_lay_64_32_sbgk_ram) {
        ram[0] = "0b01010101000";
        ram[1] = "0b00000101010";
        ram[2] = "0b00111001011";
        ram[3] = "0b11100100101";
        ram[4] = "0b01101111011";
        ram[5] = "0b00000001000";
        ram[6] = "0b11110000111";
        ram[7] = "0b00010101001";
        ram[8] = "0b11110100100";
        ram[9] = "0b11101000011";
        ram[10] = "0b11110101010";
        ram[11] = "0b11001001010";
        ram[12] = "0b00000010101";
        ram[13] = "0b11110001000";
        ram[14] = "0b11000110010";
        ram[15] = "0b11110110110";
        ram[16] = "0b11011010011";
        ram[17] = "0b00001101100";
        ram[18] = "0b01001000100";
        ram[19] = "0b11100000000";
        ram[20] = "0b11110111011";
        ram[21] = "0b11100010110";
        ram[22] = "0b00010110110";
        ram[23] = "0b01010111110";
        ram[24] = "0b11110011101";
        ram[25] = "0b11101001010";
        ram[26] = "0b00000101101";
        ram[27] = "0b11111101111";
        ram[28] = "0b00100011011";
        ram[29] = "0b11110001100";
        ram[30] = "0b00000001010";
        ram[31] = "0b11001001101";


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


SC_MODULE(dense_lay_64_32_sbgk) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbgk_ram* meminst;


SC_CTOR(dense_lay_64_32_sbgk) {
meminst = new dense_lay_64_32_sbgk_ram("dense_lay_64_32_sbgk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbgk() {
    delete meminst;
}


};//endmodule
#endif
