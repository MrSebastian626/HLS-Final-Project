// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbak_H__
#define __dense_lay_64_32_sbak_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbak_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbak_ram) {
        ram[0] = "0b00100101000";
        ram[1] = "0b11011110010";
        ram[2] = "0b00010011001";
        ram[3] = "0b00000001010";
        ram[4] = "0b01000000111";
        ram[5] = "0b00110010110";
        ram[6] = "0b00010010010";
        ram[7] = "0b01010001111";
        ram[8] = "0b11100101110";
        ram[9] = "0b00100100000";
        ram[10] = "0b01010011101";
        ram[11] = "0b01010111111";
        ram[12] = "0b11011110111";
        ram[13] = "0b11100010110";
        ram[14] = "0b11101000011";
        ram[15] = "0b11111010101";
        ram[16] = "0b11111111010";
        ram[17] = "0b01000010100";
        ram[18] = "0b01010111110";
        ram[19] = "0b01000100011";
        ram[20] = "0b01001110100";
        ram[21] = "0b00111101001";
        ram[22] = "0b01100100100";
        ram[23] = "0b00110100100";
        ram[24] = "0b00001010000";
        ram[25] = "0b00011100011";
        ram[26] = "0b11101011110";
        ram[27] = "0b00111010001";
        ram[28] = "0b01011101000";
        ram[29] = "0b01001110101";
        ram[30] = "0b11011011011";
        ram[31] = "0b00111010010";


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


SC_MODULE(dense_lay_64_32_sbak) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbak_ram* meminst;


SC_CTOR(dense_lay_64_32_sbak) {
meminst = new dense_lay_64_32_sbak_ram("dense_lay_64_32_sbak_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbak() {
    delete meminst;
}


};//endmodule
#endif
