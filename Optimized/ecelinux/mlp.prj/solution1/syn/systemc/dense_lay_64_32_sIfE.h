// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sIfE_H__
#define __dense_lay_64_32_sIfE_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sIfE_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
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


   SC_CTOR(dense_lay_64_32_sIfE_ram) {
        ram[0] = "0b1111010010110";
        ram[1] = "0b1111110110101";
        ram[2] = "0b0000001101100";
        ram[3] = "0b0000011001110";
        ram[4] = "0b1011101000011";
        ram[5] = "0b0000100010010";
        ram[6] = "0b0000001010001";
        ram[7] = "0b1111110010000";
        ram[8] = "0b1111110111010";
        ram[9] = "0b1111101111011";
        ram[10] = "0b0000010000111";
        ram[11] = "0b1111101001001";
        ram[12] = "0b1111110000010";
        ram[13] = "0b1111110111010";
        ram[14] = "0b0000000011000";
        ram[15] = "0b1111111010011";
        ram[16] = "0b0000100100000";
        ram[17] = "0b0000000010110";
        ram[18] = "0b1101011100101";
        ram[19] = "0b1111110100100";
        ram[20] = "0b1111110011101";
        ram[21] = "0b0000000010000";
        ram[22] = "0b1111101001010";
        ram[23] = "0b0000001000000";
        ram[24] = "0b1111011101010";
        ram[25] = "0b0000011111011";
        ram[26] = "0b0000001110101";
        ram[27] = "0b0000010111101";
        ram[28] = "0b0000001010000";
        ram[29] = "0b0000011110111";
        ram[30] = "0b0000000111111";
        ram[31] = "0b1111010011101";


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


SC_MODULE(dense_lay_64_32_sIfE) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sIfE_ram* meminst;


SC_CTOR(dense_lay_64_32_sIfE) {
meminst = new dense_lay_64_32_sIfE_ram("dense_lay_64_32_sIfE_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sIfE() {
    delete meminst;
}


};//endmodule
#endif
