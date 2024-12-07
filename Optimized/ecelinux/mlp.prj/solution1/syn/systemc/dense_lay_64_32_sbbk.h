// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbbk_H__
#define __dense_lay_64_32_sbbk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbbk_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 14;
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


   SC_CTOR(dense_lay_64_32_sbbk_ram) {
        ram[0] = "0b00110001101101";
        ram[1] = "0b11111111001101";
        ram[2] = "0b00100001101010";
        ram[3] = "0b11111011000000";
        ram[4] = "0b00000111010011";
        ram[5] = "0b11111001111000";
        ram[6] = "0b11111110111111";
        ram[7] = "0b11111100010110";
        ram[8] = "0b11111111011111";
        ram[9] = "0b11111000100010";
        ram[10] = "0b11111001000101";
        ram[11] = "0b11111010111011";
        ram[12] = "0b00000001110111";
        ram[13] = "0b00000001110110";
        ram[14] = "0b11110111111001";
        ram[15] = "0b00000010110011";
        ram[16] = "0b11111001010000";
        ram[17] = "0b11111100111001";
        ram[18] = "0b00010111110011";
        ram[19] = "0b11111101110111";
        ram[20] = "0b11111011000011";
        ram[21] = "0b11111100111101";
        ram[22] = "0b00000000010000";
        ram[23] = "0b10101011110010";
        ram[24] = "0b11110001100011";
        ram[25] = "0b11110100111001";
        ram[26] = "0b11111111010001";
        ram[27] = "0b11111111010010";
        ram[28] = "0b11111110100111";
        ram[29] = "0b11111110011010";
        ram[30] = "0b11111101111111";
        ram[31] = "0b11111011001110";


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


SC_MODULE(dense_lay_64_32_sbbk) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbbk_ram* meminst;


SC_CTOR(dense_lay_64_32_sbbk) {
meminst = new dense_lay_64_32_sbbk_ram("dense_lay_64_32_sbbk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbbk() {
    delete meminst;
}


};//endmodule
#endif
