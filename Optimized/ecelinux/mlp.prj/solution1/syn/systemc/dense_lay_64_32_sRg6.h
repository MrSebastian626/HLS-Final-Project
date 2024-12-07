// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sRg6_H__
#define __dense_lay_64_32_sRg6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sRg6_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sRg6_ram) {
        ram[0] = "0b110000001";
        ram[1] = "0b010011001";
        ram[2] = "0b000101110";
        ram[3] = "0b010000010";
        ram[4] = "0b100100011";
        ram[5] = "0b101000111";
        ram[6] = "0b001010000";
        ram[7] = "0b000000011";
        ram[8] = "0b111111111";
        ram[9] = "0b001000110";
        ram[10] = "0b101000000";
        ram[11] = "0b111111100";
        ram[12] = "0b110000000";
        ram[13] = "0b100010011";
        ram[14] = "0b110101111";
        ram[15] = "0b110111101";
        ram[16] = "0b011111101";
        ram[17] = "0b000001101";
        ram[18] = "0b010101000";
        ram[19] = "0b101110110";
        ram[20] = "0b011101100";
        ram[21] = "0b111000100";
        ram[22] = "0b000111011";
        ram[23] = "0b000110100";
        ram[24] = "0b010111111";
        ram[25] = "0b110100101";
        ram[26] = "0b101011000";
        ram[27] = "0b011111101";
        ram[28] = "0b000010101";
        ram[29] = "0b110000111";
        ram[30] = "0b101010001";
        ram[31] = "0b110001000";


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


SC_MODULE(dense_lay_64_32_sRg6) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sRg6_ram* meminst;


SC_CTOR(dense_lay_64_32_sRg6) {
meminst = new dense_lay_64_32_sRg6_ram("dense_lay_64_32_sRg6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sRg6() {
    delete meminst;
}


};//endmodule
#endif
