// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_16_16_sb9t_H__
#define __dense_lay_16_16_sb9t_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_16_16_sb9t_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
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


   SC_CTOR(dense_lay_16_16_sb9t_ram) {
        ram[0] = "0b001010100101";
        ram[1] = "0b001111001110";
        ram[2] = "0b000100000100";
        ram[3] = "0b001101000010";
        ram[4] = "0b000000000110";
        ram[5] = "0b111111111000";
        ram[6] = "0b000001000011";
        ram[7] = "0b001101110110";
        ram[8] = "0b000010011010";
        ram[9] = "0b111010110100";
        ram[10] = "0b001100011010";
        ram[11] = "0b010000011111";
        ram[12] = "0b000000111110";
        ram[13] = "0b001011111100";
        ram[14] = "0b111001110110";
        ram[15] = "0b000100111010";


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


SC_MODULE(dense_lay_16_16_sb9t) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_16_16_sb9t_ram* meminst;


SC_CTOR(dense_lay_16_16_sb9t) {
meminst = new dense_lay_16_16_sb9t_ram("dense_lay_16_16_sb9t_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_16_16_sb9t() {
    delete meminst;
}


};//endmodule
#endif
