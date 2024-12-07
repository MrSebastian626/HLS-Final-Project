// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_syd2_H__
#define __dense_lay_64_32_syd2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_syd2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
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


   SC_CTOR(dense_lay_64_32_syd2_ram) {
        ram[0] = "0b0010100011";
        ram[1] = "0b0000001011";
        ram[2] = "0b1100111001";
        ram[3] = "0b1101100100";
        ram[4] = "0b0000101001";
        ram[5] = "0b0001011110";
        ram[6] = "0b1101011010";
        ram[7] = "0b0100010111";
        ram[8] = "0b1101000101";
        ram[9] = "0b0011011011";
        ram[10] = "0b0011010011";
        ram[11] = "0b1111001011";
        ram[12] = "0b1111010001";
        ram[13] = "0b0001001110";
        ram[14] = "0b1011110110";
        ram[15] = "0b0001010111";
        ram[16] = "0b1001111001";
        ram[17] = "0b1111100010";
        ram[18] = "0b0001010000";
        ram[19] = "0b0000011101";
        ram[20] = "0b0100010100";
        ram[21] = "0b0100111100";
        ram[22] = "0b0110111111";
        ram[23] = "0b0000010111";
        ram[24] = "0b1100001100";
        ram[25] = "0b1101101111";
        ram[26] = "0b0001001111";
        ram[27] = "0b0000010001";
        ram[28] = "0b0101010001";
        ram[29] = "0b1110110010";
        ram[30] = "0b0010101101";
        ram[31] = "0b1000011101";


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


SC_MODULE(dense_lay_64_32_syd2) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_syd2_ram* meminst;


SC_CTOR(dense_lay_64_32_syd2) {
meminst = new dense_lay_64_32_syd2_ram("dense_lay_64_32_syd2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_syd2() {
    delete meminst;
}


};//endmodule
#endif
