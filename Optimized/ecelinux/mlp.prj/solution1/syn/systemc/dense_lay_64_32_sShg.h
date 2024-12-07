// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sShg_H__
#define __dense_lay_64_32_sShg_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sShg_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sShg_ram) {
        ram[0] = "0b011011011";
        ram[1] = "0b101010110";
        ram[2] = "0b011101010";
        ram[3] = "0b001100001";
        ram[4] = "0b100001111";
        ram[5] = "0b010010101";
        ram[6] = "0b010110000";
        ram[7] = "0b111001000";
        ram[8] = "0b111010011";
        ram[9] = "0b011101111";
        ram[10] = "0b110101001";
        ram[11] = "0b111101011";
        ram[12] = "0b010001111";
        ram[13] = "0b100010101";
        ram[14] = "0b111001001";
        ram[15] = "0b011000001";
        ram[16] = "0b110110011";
        ram[17] = "0b101011100";
        ram[18] = "0b001110110";
        ram[19] = "0b100100001";
        ram[20] = "0b010000010";
        ram[21] = "0b011110100";
        ram[22] = "0b101110110";
        ram[23] = "0b010110100";
        ram[24] = "0b110100101";
        ram[25] = "0b110111000";
        ram[26] = "0b100000111";
        ram[27] = "0b100011000";
        ram[28] = "0b101000101";
        ram[29] = "0b010010101";
        ram[30] = "0b101110010";
        ram[31] = "0b001000001";


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


SC_MODULE(dense_lay_64_32_sShg) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sShg_ram* meminst;


SC_CTOR(dense_lay_64_32_sShg) {
meminst = new dense_lay_64_32_sShg_ram("dense_lay_64_32_sShg_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sShg() {
    delete meminst;
}


};//endmodule
#endif
