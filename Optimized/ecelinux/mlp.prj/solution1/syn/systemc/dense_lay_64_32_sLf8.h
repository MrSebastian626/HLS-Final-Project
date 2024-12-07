// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sLf8_H__
#define __dense_lay_64_32_sLf8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sLf8_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sLf8_ram) {
        ram[0] = "0b011010000101";
        ram[1] = "0b111111101001";
        ram[2] = "0b001001111100";
        ram[3] = "0b111111100010";
        ram[4] = "0b010000000110";
        ram[5] = "0b001000110001";
        ram[6] = "0b111101110101";
        ram[7] = "0b000011001100";
        ram[8] = "0b111110000110";
        ram[9] = "0b000111101110";
        ram[10] = "0b000011011111";
        ram[11] = "0b001001101110";
        ram[12] = "0b111101111101";
        ram[13] = "0b000010010111";
        ram[14] = "0b000001001111";
        ram[15] = "0b111111010010";
        ram[16] = "0b000101101010";
        ram[17] = "0b001000001011";
        ram[18] = "0b010000000010";
        ram[19] = "0b000101010000";
        ram[20] = "0b000000111110";
        ram[21] = "0b000001001001";
        ram[22] = "0b000001101010";
        ram[23] = "0b111000111100";
        ram[24] = "0b000010001101";
        ram[25] = "0b000100111110";
        ram[26] = "0b111101010100";
        ram[27] = "0b000110111000";
        ram[28] = "0b001010011110";
        ram[29] = "0b001000111011";
        ram[30] = "0b000000111011";
        ram[31] = "0b001110011100";


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


SC_MODULE(dense_lay_64_32_sLf8) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sLf8_ram* meminst;


SC_CTOR(dense_lay_64_32_sLf8) {
meminst = new dense_lay_64_32_sLf8_ram("dense_lay_64_32_sLf8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sLf8() {
    delete meminst;
}


};//endmodule
#endif
