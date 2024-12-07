// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sKfY_H__
#define __dense_lay_64_32_sKfY_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sKfY_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sKfY_ram) {
        ram[0] = "0b00111000010";
        ram[1] = "0b00001100000";
        ram[2] = "0b10111110100";
        ram[3] = "0b00000110011";
        ram[4] = "0b11101101011";
        ram[5] = "0b11110000000";
        ram[6] = "0b00000101100";
        ram[7] = "0b00000011000";
        ram[8] = "0b00001000100";
        ram[9] = "0b00000110111";
        ram[10] = "0b11101100000";
        ram[11] = "0b11101100010";
        ram[12] = "0b11101111100";
        ram[13] = "0b11100101101";
        ram[14] = "0b00001100011";
        ram[15] = "0b00011000001";
        ram[16] = "0b11111100101";
        ram[17] = "0b00011100001";
        ram[18] = "0b00011000000";
        ram[19] = "0b00001001001";
        ram[20] = "0b11111111001";
        ram[21] = "0b00010100101";
        ram[22] = "0b11111010010";
        ram[23] = "0b10111101101";
        ram[24] = "0b10110000101";
        ram[25] = "0b11110010010";
        ram[26] = "0b11100001101";
        ram[27] = "0b00010100001";
        ram[28] = "0b00010101110";
        ram[29] = "0b11110111000";
        ram[30] = "0b00000111110";
        ram[31] = "0b11011010001";


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


SC_MODULE(dense_lay_64_32_sKfY) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sKfY_ram* meminst;


SC_CTOR(dense_lay_64_32_sKfY) {
meminst = new dense_lay_64_32_sKfY_ram("dense_lay_64_32_sKfY_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sKfY() {
    delete meminst;
}


};//endmodule
#endif
