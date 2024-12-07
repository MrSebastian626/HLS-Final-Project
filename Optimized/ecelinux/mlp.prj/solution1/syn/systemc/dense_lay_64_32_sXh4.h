// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sXh4_H__
#define __dense_lay_64_32_sXh4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sXh4_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sXh4_ram) {
        ram[0] = "0b1011100110000";
        ram[1] = "0b0000001111110";
        ram[2] = "0b0011100010101";
        ram[3] = "0b0010000111101";
        ram[4] = "0b0010111100001";
        ram[5] = "0b0010011110110";
        ram[6] = "0b0000010011110";
        ram[7] = "0b0010100110010";
        ram[8] = "0b1111101000011";
        ram[9] = "0b0010110000001";
        ram[10] = "0b0010100001111";
        ram[11] = "0b0010011100011";
        ram[12] = "0b0000001110011";
        ram[13] = "0b1111101001110";
        ram[14] = "0b0010100010010";
        ram[15] = "0b1111111001111";
        ram[16] = "0b0010000011111";
        ram[17] = "0b0010101111110";
        ram[18] = "0b0010111000111";
        ram[19] = "0b0011000000010";
        ram[20] = "0b0011100001110";
        ram[21] = "0b0011001000100";
        ram[22] = "0b0010100011110";
        ram[23] = "0b0010111110110";
        ram[24] = "0b0011001011101";
        ram[25] = "0b0010101100011";
        ram[26] = "0b0000001000110";
        ram[27] = "0b0010101111110";
        ram[28] = "0b0010101010000";
        ram[29] = "0b0010100011010";
        ram[30] = "0b1111110000010";
        ram[31] = "0b0010010110100";


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


SC_MODULE(dense_lay_64_32_sXh4) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sXh4_ram* meminst;


SC_CTOR(dense_lay_64_32_sXh4) {
meminst = new dense_lay_64_32_sXh4_ram("dense_lay_64_32_sXh4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sXh4() {
    delete meminst;
}


};//endmodule
#endif
