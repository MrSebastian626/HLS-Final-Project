// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_16_16_scbu_H__
#define __dense_lay_16_16_scbu_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_16_16_scbu_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 14;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_lay_16_16_scbu_ram) {
        ram[0] = "0b01000001111100";
        ram[1] = "0b01000000111000";
        ram[2] = "0b00000000110010";
        ram[3] = "0b00111001111111";
        ram[4] = "0b11111011010110";
        ram[5] = "0b11111010001000";
        ram[6] = "0b11111011000110";
        ram[7] = "0b01000001111111";
        ram[8] = "0b11111010010101";
        ram[9] = "0b00000101011100";
        ram[10] = "0b00111001111001";
        ram[11] = "0b00111111011110";
        ram[12] = "0b00000000000001";
        ram[13] = "0b00111001100100";
        ram[14] = "0b00000000010010";
        ram[15] = "0b00111101100011";


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


SC_MODULE(dense_lay_16_16_scbu) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_16_16_scbu_ram* meminst;


SC_CTOR(dense_lay_16_16_scbu) {
meminst = new dense_lay_16_16_scbu_ram("dense_lay_16_16_scbu_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_16_16_scbu() {
    delete meminst;
}


};//endmodule
#endif