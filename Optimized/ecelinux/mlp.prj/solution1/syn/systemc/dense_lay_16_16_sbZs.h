// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_16_16_sbZs_H__
#define __dense_lay_16_16_sbZs_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_16_16_sbZs_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
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


   SC_CTOR(dense_lay_16_16_sbZs_ram) {
        ram[0] = "0b1110000000";
        ram[1] = "0b1010000100";
        ram[2] = "0b0000001010";
        ram[3] = "0b1011101100";
        ram[4] = "0b1110110000";
        ram[5] = "0b0011001101";
        ram[6] = "0b1100100000";
        ram[7] = "0b0000010000";
        ram[8] = "0b0101001110";
        ram[9] = "0b0010110010";
        ram[10] = "0b0100001011";
        ram[11] = "0b0001010111";
        ram[12] = "0b0010000101";
        ram[13] = "0b1110110101";
        ram[14] = "0b1110011010";
        ram[15] = "0b0110010111";


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


SC_MODULE(dense_lay_16_16_sbZs) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_16_16_sbZs_ram* meminst;


SC_CTOR(dense_lay_16_16_sbZs) {
meminst = new dense_lay_16_16_sbZs_ram("dense_lay_16_16_sbZs_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_16_16_sbZs() {
    delete meminst;
}


};//endmodule
#endif
