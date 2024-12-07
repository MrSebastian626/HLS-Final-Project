// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sncg_H__
#define __dense_lay_64_32_sncg_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sncg_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sncg_ram) {
        ram[0] = "0b01010000001";
        ram[1] = "0b00000110101";
        ram[2] = "0b00110101101";
        ram[3] = "0b10000010110";
        ram[4] = "0b00111111111";
        ram[5] = "0b00001110000";
        ram[6] = "0b11101101010";
        ram[7] = "0b00011111100";
        ram[8] = "0b00011011100";
        ram[9] = "0b11110110011";
        ram[10] = "0b11111010000";
        ram[11] = "0b00011011001";
        ram[12] = "0b11110111011";
        ram[13] = "0b00010000001";
        ram[14] = "0b11100001001";
        ram[15] = "0b11101010110";
        ram[16] = "0b11000101111";
        ram[17] = "0b11101100011";
        ram[18] = "0b00110110111";
        ram[19] = "0b00011101010";
        ram[20] = "0b11011101011";
        ram[21] = "0b11110110101";
        ram[22] = "0b00001001100";
        ram[23] = "0b00110011000";
        ram[24] = "0b00100001111";
        ram[25] = "0b00011100100";
        ram[26] = "0b11011110001";
        ram[27] = "0b00000011111";
        ram[28] = "0b00001111101";
        ram[29] = "0b00010000100";
        ram[30] = "0b11010111110";
        ram[31] = "0b00001110110";


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


SC_MODULE(dense_lay_64_32_sncg) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sncg_ram* meminst;


SC_CTOR(dense_lay_64_32_sncg) {
meminst = new dense_lay_64_32_sncg_ram("dense_lay_64_32_sncg_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sncg() {
    delete meminst;
}


};//endmodule
#endif
