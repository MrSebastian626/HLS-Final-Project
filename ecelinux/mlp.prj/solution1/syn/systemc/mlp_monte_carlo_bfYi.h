// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mlp_monte_carlo_bfYi_H__
#define __mlp_monte_carlo_bfYi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct mlp_monte_carlo_bfYi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 15;
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


   SC_CTOR(mlp_monte_carlo_bfYi_ram) {
        ram[0] = "0b111111101011001";
        ram[1] = "0b010011110100001";
        ram[2] = "0b111111111010100";
        ram[3] = "0b111111110000001";
        ram[4] = "0b010011011100100";
        ram[5] = "0b111111111101110";
        ram[6] = "0b010011100100011";
        ram[7] = "0b010011010101100";
        ram[8] = "0b010011010010001";
        ram[9] = "0b111111111010001";
        ram[10] = "0b010011010110101";
        ram[11] = "0b111111110010000";
        ram[12] = "0b010011001110000";
        ram[13] = "0b010011010111001";
        ram[14] = "0b000010000010000";
        ram[15] = "0b010011010110001";


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


SC_MODULE(mlp_monte_carlo_bfYi) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


mlp_monte_carlo_bfYi_ram* meminst;


SC_CTOR(mlp_monte_carlo_bfYi) {
meminst = new mlp_monte_carlo_bfYi_ram("mlp_monte_carlo_bfYi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~mlp_monte_carlo_bfYi() {
    delete meminst;
}


};//endmodule
#endif
