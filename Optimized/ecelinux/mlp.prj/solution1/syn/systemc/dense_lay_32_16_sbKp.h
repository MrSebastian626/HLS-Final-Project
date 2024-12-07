// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_32_16_sbKp_H__
#define __dense_lay_32_16_sbKp_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_32_16_sbKp_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
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


   SC_CTOR(dense_lay_32_16_sbKp_ram) {
        ram[0] = "0b01110110111";
        ram[1] = "0b01011100001";
        ram[2] = "0b00001110010";
        ram[3] = "0b00011101111";
        ram[4] = "0b01000111000";
        ram[5] = "0b11100100010";
        ram[6] = "0b00111000000";
        ram[7] = "0b01000100111";
        ram[8] = "0b01010011001";
        ram[9] = "0b11111111000";
        ram[10] = "0b00010111111";
        ram[11] = "0b11011111101";
        ram[12] = "0b00101001000";
        ram[13] = "0b01001100010";
        ram[14] = "0b11100100101";
        ram[15] = "0b01000000100";


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


SC_MODULE(dense_lay_32_16_sbKp) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_32_16_sbKp_ram* meminst;


SC_CTOR(dense_lay_32_16_sbKp) {
meminst = new dense_lay_32_16_sbKp_ram("dense_lay_32_16_sbKp_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_32_16_sbKp() {
    delete meminst;
}


};//endmodule
#endif
