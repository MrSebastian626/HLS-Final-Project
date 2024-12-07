// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sEe0_H__
#define __dense_lay_64_32_sEe0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sEe0_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sEe0_ram) {
        ram[0] = "0b111111101100";
        ram[1] = "0b111110001111";
        ram[2] = "0b010011101010";
        ram[3] = "0b111110001001";
        ram[4] = "0b000111010010";
        ram[5] = "0b110110110100";
        ram[6] = "0b111100000010";
        ram[7] = "0b111000100001";
        ram[8] = "0b111110110101";
        ram[9] = "0b111100110110";
        ram[10] = "0b111011000100";
        ram[11] = "0b111110010101";
        ram[12] = "0b111101101011";
        ram[13] = "0b111011100001";
        ram[14] = "0b000100010111";
        ram[15] = "0b000010010000";
        ram[16] = "0b000110001111";
        ram[17] = "0b111001101101";
        ram[18] = "0b110101110011";
        ram[19] = "0b111010111111";
        ram[20] = "0b110101110110";
        ram[21] = "0b111100000001";
        ram[22] = "0b111000101011";
        ram[23] = "0b000100101100";
        ram[24] = "0b111110010011";
        ram[25] = "0b111110000110";
        ram[26] = "0b111101010010";
        ram[27] = "0b111010001100";
        ram[28] = "0b110100000110";
        ram[29] = "0b111001001000";
        ram[30] = "0b111111000110";
        ram[31] = "0b111110111110";


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


SC_MODULE(dense_lay_64_32_sEe0) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sEe0_ram* meminst;


SC_CTOR(dense_lay_64_32_sEe0) {
meminst = new dense_lay_64_32_sEe0_ram("dense_lay_64_32_sEe0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sEe0() {
    delete meminst;
}


};//endmodule
#endif
