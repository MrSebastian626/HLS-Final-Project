// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mlp_monte_carlo_wjbC_H__
#define __mlp_monte_carlo_wjbC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct mlp_monte_carlo_wjbC_ram : public sc_core::sc_module {

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


   SC_CTOR(mlp_monte_carlo_wjbC_ram) {
        ram[0] = "0b001110100011";
        ram[1] = "0b010100110111";
        ram[2] = "0b111001011011";
        ram[3] = "0b001001111100";
        ram[4] = "0b111101110001";
        ram[5] = "0b111010101100";
        ram[6] = "0b000000011111";
        ram[7] = "0b010001100110";
        ram[8] = "0b111110101100";
        ram[9] = "0b000101001100";
        ram[10] = "0b001111110000";
        ram[11] = "0b010011111010";
        ram[12] = "0b000010001000";
        ram[13] = "0b010001110110";
        ram[14] = "0b111000000110";
        ram[15] = "0b001111000100";


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


SC_MODULE(mlp_monte_carlo_wjbC) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


mlp_monte_carlo_wjbC_ram* meminst;


SC_CTOR(mlp_monte_carlo_wjbC) {
meminst = new mlp_monte_carlo_wjbC_ram("mlp_monte_carlo_wjbC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~mlp_monte_carlo_wjbC() {
    delete meminst;
}


};//endmodule
#endif
