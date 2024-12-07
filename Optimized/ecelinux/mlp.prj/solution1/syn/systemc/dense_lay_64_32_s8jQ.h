// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_s8jQ_H__
#define __dense_lay_64_32_s8jQ_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_s8jQ_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_s8jQ_ram) {
        ram[0] = "0b011000011110";
        ram[1] = "0b111100101011";
        ram[2] = "0b110111001011";
        ram[3] = "0b000001101011";
        ram[4] = "0b000010111101";
        ram[5] = "0b001001111001";
        ram[6] = "0b111111001011";
        ram[7] = "0b000001011111";
        ram[8] = "0b111100101101";
        ram[9] = "0b000101000000";
        ram[10] = "0b000011110000";
        ram[11] = "0b000100010011";
        ram[12] = "0b000010111001";
        ram[13] = "0b111101001010";
        ram[14] = "0b000011010101";
        ram[15] = "0b000010111001";
        ram[16] = "0b001001010110";
        ram[17] = "0b000100010000";
        ram[18] = "0b000111101101";
        ram[19] = "0b111111010000";
        ram[20] = "0b001000101011";
        ram[21] = "0b001001011001";
        ram[22] = "0b000001000100";
        ram[23] = "0b000010000100";
        ram[24] = "0b001001010101";
        ram[25] = "0b000110001111";
        ram[26] = "0b111100110111";
        ram[27] = "0b111111110000";
        ram[28] = "0b000101111111";
        ram[29] = "0b000101000111";
        ram[30] = "0b000001111100";
        ram[31] = "0b000110101101";


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


SC_MODULE(dense_lay_64_32_s8jQ) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_s8jQ_ram* meminst;


SC_CTOR(dense_lay_64_32_s8jQ) {
meminst = new dense_lay_64_32_s8jQ_ram("dense_lay_64_32_s8jQ_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_s8jQ() {
    delete meminst;
}


};//endmodule
#endif
