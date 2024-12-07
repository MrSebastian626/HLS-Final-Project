// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sNgs_H__
#define __dense_lay_64_32_sNgs_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sNgs_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
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


   SC_CTOR(dense_lay_64_32_sNgs_ram) {
        ram[0] = "0b1001101101";
        ram[1] = "0b1100001101";
        ram[2] = "0b0000011100";
        ram[3] = "0b1110011010";
        ram[4] = "0b1011101001";
        ram[5] = "0b0001100111";
        ram[6] = "0b0010000100";
        ram[7] = "0b0001110110";
        ram[8] = "0b1110000000";
        ram[9] = "0b0010111100";
        ram[10] = "0b0001111001";
        ram[11] = "0b0100010100";
        ram[12] = "0b1100010100";
        ram[13] = "0b1100100100";
        ram[14] = "0b0000100011";
        ram[15] = "0b1100000111";
        ram[16] = "0b1011001000";
        ram[17] = "0b0011101001";
        ram[18] = "0b0010001111";
        ram[19] = "0b0101000111";
        ram[20] = "0b0110100111";
        ram[21] = "0b0011010011";
        ram[22] = "0b0011011011";
        ram[23] = "0b1101110111";
        ram[24] = "0b0000011100";
        ram[25] = "0b0011011110";
        ram[26] = "0b1011111011";
        ram[27] = "0b0110101110";
        ram[28] = "0b0101110101";
        ram[29] = "0b0001110111";
        ram[30] = "0b0001001000";
        ram[31] = "0b0011100111";


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


SC_MODULE(dense_lay_64_32_sNgs) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sNgs_ram* meminst;


SC_CTOR(dense_lay_64_32_sNgs) {
meminst = new dense_lay_64_32_sNgs_ram("dense_lay_64_32_sNgs_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sNgs() {
    delete meminst;
}


};//endmodule
#endif
