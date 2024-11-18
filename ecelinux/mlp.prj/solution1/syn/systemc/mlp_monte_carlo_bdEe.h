// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mlp_monte_carlo_bdEe_H__
#define __mlp_monte_carlo_bdEe_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct mlp_monte_carlo_bdEe_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 15;
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


   SC_CTOR(mlp_monte_carlo_bdEe_ram) {
        ram[0] = "0b111010110001110";
        ram[1] = "0b111111111000001";
        ram[2] = "0b010011001011001";
        ram[3] = "0b010010011001111";
        ram[4] = "0b001101001111101";
        ram[5] = "0b010010010011000";
        ram[6] = "0b111111111000011";
        ram[7] = "0b010011000110001";
        ram[8] = "0b000000000000000";
        ram[9] = "0b010011000110101";
        ram[10] = "0b010011001100110";
        ram[11] = "0b010011000010001";
        ram[12] = "0b111111111011111";
        ram[13] = "0b111111110001110";
        ram[14] = "0b010010011001011";
        ram[15] = "0b111111110110110";
        ram[16] = "0b010001110010010";
        ram[17] = "0b010011000100001";
        ram[18] = "0b010010101001100";
        ram[19] = "0b010011000110101";
        ram[20] = "0b010011010110001";
        ram[21] = "0b010011101101000";
        ram[22] = "0b010011001100011";
        ram[23] = "0b010001001100111";
        ram[24] = "0b010010001111111";
        ram[25] = "0b010010101111000";
        ram[26] = "0b111111111001101";
        ram[27] = "0b010011000001010";
        ram[28] = "0b010011001001011";
        ram[29] = "0b010010111111111";
        ram[30] = "0b111111110010001";
        ram[31] = "0b010010100011001";


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


SC_MODULE(mlp_monte_carlo_bdEe) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


mlp_monte_carlo_bdEe_ram* meminst;


SC_CTOR(mlp_monte_carlo_bdEe) {
meminst = new mlp_monte_carlo_bdEe_ram("mlp_monte_carlo_bdEe_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~mlp_monte_carlo_bdEe() {
    delete meminst;
}


};//endmodule
#endif
