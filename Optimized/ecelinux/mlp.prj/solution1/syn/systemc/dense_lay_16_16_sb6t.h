// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_16_16_sb6t_H__
#define __dense_lay_16_16_sb6t_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_16_16_sb6t_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_16_16_sb6t_ram) {
        ram[0] = "0b1101010110";
        ram[1] = "0b1001001011";
        ram[2] = "0b0110011011";
        ram[3] = "0b1101110011";
        ram[4] = "0b0000011001";
        ram[5] = "0b0000010010";
        ram[6] = "0b0110101110";
        ram[7] = "0b1101101101";
        ram[8] = "0b0101111010";
        ram[9] = "0b0101100111";
        ram[10] = "0b0100000110";
        ram[11] = "0b1101100010";
        ram[12] = "0b0011100110";
        ram[13] = "0b1100101000";
        ram[14] = "0b1101100000";
        ram[15] = "0b0100101111";


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


SC_MODULE(dense_lay_16_16_sb6t) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_16_16_sb6t_ram* meminst;


SC_CTOR(dense_lay_16_16_sb6t) {
meminst = new dense_lay_16_16_sb6t_ram("dense_lay_16_16_sb6t_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_16_16_sb6t() {
    delete meminst;
}


};//endmodule
#endif