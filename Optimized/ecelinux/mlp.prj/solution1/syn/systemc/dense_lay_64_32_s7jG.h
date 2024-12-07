// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_s7jG_H__
#define __dense_lay_64_32_s7jG_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_s7jG_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
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


   SC_CTOR(dense_lay_64_32_s7jG_ram) {
        ram[0] = "0b010100111";
        ram[1] = "0b100111100";
        ram[2] = "0b000001101";
        ram[3] = "0b001111101";
        ram[4] = "0b000010101";
        ram[5] = "0b010111100";
        ram[6] = "0b101010010";
        ram[7] = "0b000100010";
        ram[8] = "0b001001101";
        ram[9] = "0b000011100";
        ram[10] = "0b111100110";
        ram[11] = "0b001100010";
        ram[12] = "0b000101100";
        ram[13] = "0b111111000";
        ram[14] = "0b001001001";
        ram[15] = "0b011010110";
        ram[16] = "0b100100010";
        ram[17] = "0b001101101";
        ram[18] = "0b100100010";
        ram[19] = "0b111001011";
        ram[20] = "0b000111100";
        ram[21] = "0b101111000";
        ram[22] = "0b010111101";
        ram[23] = "0b000011110";
        ram[24] = "0b010100000";
        ram[25] = "0b111100111";
        ram[26] = "0b011111000";
        ram[27] = "0b001000101";
        ram[28] = "0b101001011";
        ram[29] = "0b100100000";
        ram[30] = "0b100101010";
        ram[31] = "0b010101110";


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


SC_MODULE(dense_lay_64_32_s7jG) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_s7jG_ram* meminst;


SC_CTOR(dense_lay_64_32_s7jG) {
meminst = new dense_lay_64_32_s7jG_ram("dense_lay_64_32_s7jG_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_s7jG() {
    delete meminst;
}


};//endmodule
#endif
