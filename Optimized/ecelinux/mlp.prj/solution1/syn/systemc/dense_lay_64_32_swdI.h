// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_swdI_H__
#define __dense_lay_64_32_swdI_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_swdI_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_swdI_ram) {
        ram[0] = "0b010100111111";
        ram[1] = "0b111100011001";
        ram[2] = "0b000000000001";
        ram[3] = "0b000011011111";
        ram[4] = "0b001000101001";
        ram[5] = "0b001001000110";
        ram[6] = "0b111100110101";
        ram[7] = "0b000110000001";
        ram[8] = "0b111111101011";
        ram[9] = "0b000011111100";
        ram[10] = "0b000110100110";
        ram[11] = "0b000011010011";
        ram[12] = "0b111101110000";
        ram[13] = "0b000001110000";
        ram[14] = "0b000110010111";
        ram[15] = "0b111100000000";
        ram[16] = "0b000011000101";
        ram[17] = "0b000011001000";
        ram[18] = "0b000111110010";
        ram[19] = "0b000111011010";
        ram[20] = "0b001011100101";
        ram[21] = "0b000101010010";
        ram[22] = "0b001001011010";
        ram[23] = "0b111110000010";
        ram[24] = "0b111011111010";
        ram[25] = "0b001000010010";
        ram[26] = "0b111101110100";
        ram[27] = "0b000011000110";
        ram[28] = "0b000101101111";
        ram[29] = "0b000100000100";
        ram[30] = "0b000001101010";
        ram[31] = "0b000010100001";


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


SC_MODULE(dense_lay_64_32_swdI) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_swdI_ram* meminst;


SC_CTOR(dense_lay_64_32_swdI) {
meminst = new dense_lay_64_32_swdI_ram("dense_lay_64_32_swdI_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_swdI() {
    delete meminst;
}


};//endmodule
#endif
