// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sOgC_H__
#define __dense_lay_64_32_sOgC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sOgC_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sOgC_ram) {
        ram[0] = "0b001001111010";
        ram[1] = "0b000000100101";
        ram[2] = "0b001111110001";
        ram[3] = "0b111101000110";
        ram[4] = "0b010111100010";
        ram[5] = "0b000101111111";
        ram[6] = "0b111110011100";
        ram[7] = "0b110100100100";
        ram[8] = "0b111100000000";
        ram[9] = "0b110010101100";
        ram[10] = "0b110111110001";
        ram[11] = "0b110110011010";
        ram[12] = "0b000001111011";
        ram[13] = "0b111110100011";
        ram[14] = "0b000111110111";
        ram[15] = "0b111110100000";
        ram[16] = "0b111100011101";
        ram[17] = "0b110100101001";
        ram[18] = "0b010010111100";
        ram[19] = "0b111011111101";
        ram[20] = "0b111011101101";
        ram[21] = "0b110100111000";
        ram[22] = "0b110111011101";
        ram[23] = "0b000111101110";
        ram[24] = "0b111110111101";
        ram[25] = "0b110110001110";
        ram[26] = "0b000010011100";
        ram[27] = "0b111010111010";
        ram[28] = "0b000011110111";
        ram[29] = "0b110111111100";
        ram[30] = "0b000000101011";
        ram[31] = "0b111011101110";


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


SC_MODULE(dense_lay_64_32_sOgC) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sOgC_ram* meminst;


SC_CTOR(dense_lay_64_32_sOgC) {
meminst = new dense_lay_64_32_sOgC_ram("dense_lay_64_32_sOgC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sOgC() {
    delete meminst;
}


};//endmodule
#endif
