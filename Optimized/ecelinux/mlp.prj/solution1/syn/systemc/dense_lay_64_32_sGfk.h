// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sGfk_H__
#define __dense_lay_64_32_sGfk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sGfk_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
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


   SC_CTOR(dense_lay_64_32_sGfk_ram) {
        ram[0] = "0b000110011";
        ram[1] = "0b000011110";
        ram[2] = "0b000001100";
        ram[3] = "0b100111100";
        ram[4] = "0b001011101";
        ram[5] = "0b011000110";
        ram[6] = "0b101000001";
        ram[7] = "0b101001110";
        ram[8] = "0b010111011";
        ram[9] = "0b010100101";
        ram[10] = "0b100100010";
        ram[11] = "0b100111110";
        ram[12] = "0b010101101";
        ram[13] = "0b010011000";
        ram[14] = "0b101101001";
        ram[15] = "0b111000010";
        ram[16] = "0b100111111";
        ram[17] = "0b101111101";
        ram[18] = "0b010000110";
        ram[19] = "0b111011011";
        ram[20] = "0b010011110";
        ram[21] = "0b101100010";
        ram[22] = "0b100011101";
        ram[23] = "0b000110101";
        ram[24] = "0b010111010";
        ram[25] = "0b101000100";
        ram[26] = "0b110110011";
        ram[27] = "0b110101010";
        ram[28] = "0b110011000";
        ram[29] = "0b001101000";
        ram[30] = "0b010011001";
        ram[31] = "0b111010110";


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


SC_MODULE(dense_lay_64_32_sGfk) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sGfk_ram* meminst;


SC_CTOR(dense_lay_64_32_sGfk) {
meminst = new dense_lay_64_32_sGfk_ram("dense_lay_64_32_sGfk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sGfk() {
    delete meminst;
}


};//endmodule
#endif
