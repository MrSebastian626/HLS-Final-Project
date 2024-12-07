// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_svdy_H__
#define __dense_lay_64_32_svdy_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_svdy_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_svdy_ram) {
        ram[0] = "0b001001111111";
        ram[1] = "0b111101101000";
        ram[2] = "0b010110011011";
        ram[3] = "0b000101010011";
        ram[4] = "0b010110011110";
        ram[5] = "0b010011110110";
        ram[6] = "0b111110000011";
        ram[7] = "0b010000110000";
        ram[8] = "0b000011001000";
        ram[9] = "0b010010010010";
        ram[10] = "0b010011010011";
        ram[11] = "0b010011010100";
        ram[12] = "0b111011101001";
        ram[13] = "0b000010100110";
        ram[14] = "0b000110000100";
        ram[15] = "0b000000111001";
        ram[16] = "0b001011100001";
        ram[17] = "0b001100000101";
        ram[18] = "0b001111101111";
        ram[19] = "0b010010011000";
        ram[20] = "0b010001110100";
        ram[21] = "0b010010100001";
        ram[22] = "0b001111110110";
        ram[23] = "0b000110111010";
        ram[24] = "0b010110111001";
        ram[25] = "0b010011110010";
        ram[26] = "0b111111000110";
        ram[27] = "0b010011001100";
        ram[28] = "0b010010110001";
        ram[29] = "0b010001011000";
        ram[30] = "0b000000110101";
        ram[31] = "0b010000110111";


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


SC_MODULE(dense_lay_64_32_svdy) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_svdy_ram* meminst;


SC_CTOR(dense_lay_64_32_svdy) {
meminst = new dense_lay_64_32_svdy_ram("dense_lay_64_32_svdy_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_svdy() {
    delete meminst;
}


};//endmodule
#endif
