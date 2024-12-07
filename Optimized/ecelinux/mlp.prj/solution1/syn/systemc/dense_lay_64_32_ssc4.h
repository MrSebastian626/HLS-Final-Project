// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_ssc4_H__
#define __dense_lay_64_32_ssc4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_ssc4_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_ssc4_ram) {
        ram[0] = "0b00011000001";
        ram[1] = "0b11110110010";
        ram[2] = "0b11010001100";
        ram[3] = "0b11001111101";
        ram[4] = "0b11111110100";
        ram[5] = "0b00000100001";
        ram[6] = "0b00010001010";
        ram[7] = "0b11001101010";
        ram[8] = "0b11110010100";
        ram[9] = "0b11011111011";
        ram[10] = "0b11001100110";
        ram[11] = "0b11010110101";
        ram[12] = "0b11110010111";
        ram[13] = "0b00000110111";
        ram[14] = "0b11101011111";
        ram[15] = "0b11100100001";
        ram[16] = "0b11011100001";
        ram[17] = "0b11100001100";
        ram[18] = "0b11101010010";
        ram[19] = "0b11100001100";
        ram[20] = "0b11110100111";
        ram[21] = "0b11101111111";
        ram[22] = "0b11101110100";
        ram[23] = "0b11111110100";
        ram[24] = "0b00000100100";
        ram[25] = "0b11010111111";
        ram[26] = "0b11101111100";
        ram[27] = "0b11110111010";
        ram[28] = "0b11110000100";
        ram[29] = "0b00000000011";
        ram[30] = "0b11100111001";
        ram[31] = "0b10111110001";


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


SC_MODULE(dense_lay_64_32_ssc4) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_ssc4_ram* meminst;


SC_CTOR(dense_lay_64_32_ssc4) {
meminst = new dense_lay_64_32_ssc4_ram("dense_lay_64_32_ssc4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_ssc4() {
    delete meminst;
}


};//endmodule
#endif
