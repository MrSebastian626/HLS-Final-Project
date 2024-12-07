// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sBew_H__
#define __dense_lay_64_32_sBew_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sBew_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 15;
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


   SC_CTOR(dense_lay_64_32_sBew_ram) {
        ram[0] = "0b001100000100000";
        ram[1] = "0b111111100000100";
        ram[2] = "0b111001111001001";
        ram[3] = "0b110100101000101";
        ram[4] = "0b111011101101100";
        ram[5] = "0b111010001100000";
        ram[6] = "0b111111101011110";
        ram[7] = "0b111010000101010";
        ram[8] = "0b111111110100101";
        ram[9] = "0b111010011000111";
        ram[10] = "0b111001101001001";
        ram[11] = "0b111001100110100";
        ram[12] = "0b000000010100101";
        ram[13] = "0b000000010111000";
        ram[14] = "0b110011000000010";
        ram[15] = "0b000000000101001";
        ram[16] = "0b110101011010110";
        ram[17] = "0b111010011000100";
        ram[18] = "0b111011000110000";
        ram[19] = "0b111011110100000";
        ram[20] = "0b111001100010100";
        ram[21] = "0b111001111001111";
        ram[22] = "0b111100101101010";
        ram[23] = "0b100110110011111";
        ram[24] = "0b111001111101100";
        ram[25] = "0b111000111101110";
        ram[26] = "0b000000011110100";
        ram[27] = "0b111011100010101";
        ram[28] = "0b111011100111010";
        ram[29] = "0b111010100111001";
        ram[30] = "0b000000001110100";
        ram[31] = "0b111001000011011";


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


SC_MODULE(dense_lay_64_32_sBew) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sBew_ram* meminst;


SC_CTOR(dense_lay_64_32_sBew) {
meminst = new dense_lay_64_32_sBew_ram("dense_lay_64_32_sBew_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sBew() {
    delete meminst;
}


};//endmodule
#endif
