// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sDeQ_H__
#define __dense_lay_64_32_sDeQ_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sDeQ_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sDeQ_ram) {
        ram[0] = "0b111010111111";
        ram[1] = "0b000000111010";
        ram[2] = "0b111011010111";
        ram[3] = "0b101100010001";
        ram[4] = "0b001000011110";
        ram[5] = "0b111001101101";
        ram[6] = "0b111110011010";
        ram[7] = "0b111011010001";
        ram[8] = "0b111100101111";
        ram[9] = "0b111001101010";
        ram[10] = "0b000000101101";
        ram[11] = "0b111010110100";
        ram[12] = "0b111110111000";
        ram[13] = "0b000001000000";
        ram[14] = "0b111010011100";
        ram[15] = "0b111100001010";
        ram[16] = "0b111001111000";
        ram[17] = "0b111000110011";
        ram[18] = "0b001011000001";
        ram[19] = "0b111011001111";
        ram[20] = "0b111010100001";
        ram[21] = "0b111101100000";
        ram[22] = "0b000000001100";
        ram[23] = "0b000010010111";
        ram[24] = "0b000010001100";
        ram[25] = "0b000000111111";
        ram[26] = "0b111101111110";
        ram[27] = "0b111111010111";
        ram[28] = "0b111100110010";
        ram[29] = "0b000000001011";
        ram[30] = "0b000000110111";
        ram[31] = "0b000010010000";


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


SC_MODULE(dense_lay_64_32_sDeQ) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sDeQ_ram* meminst;


SC_CTOR(dense_lay_64_32_sDeQ) {
meminst = new dense_lay_64_32_sDeQ_ram("dense_lay_64_32_sDeQ_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sDeQ() {
    delete meminst;
}


};//endmodule
#endif
