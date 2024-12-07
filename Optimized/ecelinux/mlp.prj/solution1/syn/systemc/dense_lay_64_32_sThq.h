// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sThq_H__
#define __dense_lay_64_32_sThq_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sThq_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sThq_ram) {
        ram[0] = "0b10011111011";
        ram[1] = "0b11100011010";
        ram[2] = "0b11111111000";
        ram[3] = "0b11111100110";
        ram[4] = "0b11010011001";
        ram[5] = "0b11101011101";
        ram[6] = "0b11111011001";
        ram[7] = "0b11100000101";
        ram[8] = "0b00011010000";
        ram[9] = "0b11101100000";
        ram[10] = "0b11101110011";
        ram[11] = "0b11110110110";
        ram[12] = "0b11100101111";
        ram[13] = "0b11010010101";
        ram[14] = "0b11111100010";
        ram[15] = "0b11101011010";
        ram[16] = "0b00011011010";
        ram[17] = "0b11111010001";
        ram[18] = "0b11101011000";
        ram[19] = "0b11100000101";
        ram[20] = "0b11110100001";
        ram[21] = "0b11101001100";
        ram[22] = "0b11110101001";
        ram[23] = "0b00001110011";
        ram[24] = "0b11001000000";
        ram[25] = "0b00001000001";
        ram[26] = "0b11111000101";
        ram[27] = "0b11011101111";
        ram[28] = "0b11101111000";
        ram[29] = "0b11111100000";
        ram[30] = "0b11101000000";
        ram[31] = "0b11110011110";


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


SC_MODULE(dense_lay_64_32_sThq) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sThq_ram* meminst;


SC_CTOR(dense_lay_64_32_sThq) {
meminst = new dense_lay_64_32_sThq_ram("dense_lay_64_32_sThq_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sThq() {
    delete meminst;
}


};//endmodule
#endif
