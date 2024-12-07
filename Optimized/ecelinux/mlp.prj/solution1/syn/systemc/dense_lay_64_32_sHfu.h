// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sHfu_H__
#define __dense_lay_64_32_sHfu_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sHfu_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sHfu_ram) {
        ram[0] = "0b101110010111";
        ram[1] = "0b000001010000";
        ram[2] = "0b111001100110";
        ram[3] = "0b000010111111";
        ram[4] = "0b000010000001";
        ram[5] = "0b111100100001";
        ram[6] = "0b111100101100";
        ram[7] = "0b111101011000";
        ram[8] = "0b000010100010";
        ram[9] = "0b111000101001";
        ram[10] = "0b000001100001";
        ram[11] = "0b111011110111";
        ram[12] = "0b111011111001";
        ram[13] = "0b111111001000";
        ram[14] = "0b111110111001";
        ram[15] = "0b111100111100";
        ram[16] = "0b000001101001";
        ram[17] = "0b111011101110";
        ram[18] = "0b111111000010";
        ram[19] = "0b111100110111";
        ram[20] = "0b000001000101";
        ram[21] = "0b111011101111";
        ram[22] = "0b111101100001";
        ram[23] = "0b111110110001";
        ram[24] = "0b111011011010";
        ram[25] = "0b111111010101";
        ram[26] = "0b000001111111";
        ram[27] = "0b000001001000";
        ram[28] = "0b111101001100";
        ram[29] = "0b111111011001";
        ram[30] = "0b111011111101";
        ram[31] = "0b111101010000";


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


SC_MODULE(dense_lay_64_32_sHfu) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sHfu_ram* meminst;


SC_CTOR(dense_lay_64_32_sHfu) {
meminst = new dense_lay_64_32_sHfu_ram("dense_lay_64_32_sHfu_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sHfu() {
    delete meminst;
}


};//endmodule
#endif
