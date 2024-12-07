// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_stde_H__
#define __dense_lay_64_32_stde_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_stde_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
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


   SC_CTOR(dense_lay_64_32_stde_ram) {
        ram[0] = "0b0110001110001";
        ram[1] = "0b1111100010100";
        ram[2] = "0b0101001101101";
        ram[3] = "0b0000111000001";
        ram[4] = "0b0100001110100";
        ram[5] = "0b0011111011010";
        ram[6] = "0b1111111111111";
        ram[7] = "0b0100000010111";
        ram[8] = "0b0000010101110";
        ram[9] = "0b0100001110000";
        ram[10] = "0b0011001111101";
        ram[11] = "0b0011110101000";
        ram[12] = "0b1111111000110";
        ram[13] = "0b1111110010110";
        ram[14] = "0b0000101100010";
        ram[15] = "0b1111101001101";
        ram[16] = "0b0010000111110";
        ram[17] = "0b0100000000110";
        ram[18] = "0b0100110111110";
        ram[19] = "0b0100011010100";
        ram[20] = "0b0100000100001";
        ram[21] = "0b0011100111100";
        ram[22] = "0b0101100011010";
        ram[23] = "0b0010111100110";
        ram[24] = "0b0110111011110";
        ram[25] = "0b0011010100011";
        ram[26] = "0b1111110110011";
        ram[27] = "0b0100011010101";
        ram[28] = "0b0100001001000";
        ram[29] = "0b0100011100100";
        ram[30] = "0b1111100011101";
        ram[31] = "0b0100001101111";


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


SC_MODULE(dense_lay_64_32_stde) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_stde_ram* meminst;


SC_CTOR(dense_lay_64_32_stde) {
meminst = new dense_lay_64_32_stde_ram("dense_lay_64_32_stde_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_stde() {
    delete meminst;
}


};//endmodule
#endif
