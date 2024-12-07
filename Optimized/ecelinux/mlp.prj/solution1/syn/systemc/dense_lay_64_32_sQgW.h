// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sQgW_H__
#define __dense_lay_64_32_sQgW_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sQgW_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sQgW_ram) {
        ram[0] = "0b10101000111";
        ram[1] = "0b11111110100";
        ram[2] = "0b00001010000";
        ram[3] = "0b01111001001";
        ram[4] = "0b11110110110";
        ram[5] = "0b10111110100";
        ram[6] = "0b11100010001";
        ram[7] = "0b11110011010";
        ram[8] = "0b11101110010";
        ram[9] = "0b11110110000";
        ram[10] = "0b00001000000";
        ram[11] = "0b11101100000";
        ram[12] = "0b11100101000";
        ram[13] = "0b11111001110";
        ram[14] = "0b00110101100";
        ram[15] = "0b00000101101";
        ram[16] = "0b11111000000";
        ram[17] = "0b00000000010";
        ram[18] = "0b00101101011";
        ram[19] = "0b11011110100";
        ram[20] = "0b00100010000";
        ram[21] = "0b00001001010";
        ram[22] = "0b11011111010";
        ram[23] = "0b11101100111";
        ram[24] = "0b00011010000";
        ram[25] = "0b11111001000";
        ram[26] = "0b11111010000";
        ram[27] = "0b11110001101";
        ram[28] = "0b11011110010";
        ram[29] = "0b00001100011";
        ram[30] = "0b00000000101";
        ram[31] = "0b11111101111";


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


SC_MODULE(dense_lay_64_32_sQgW) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sQgW_ram* meminst;


SC_CTOR(dense_lay_64_32_sQgW) {
meminst = new dense_lay_64_32_sQgW_ram("dense_lay_64_32_sQgW_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sQgW() {
    delete meminst;
}


};//endmodule
#endif
