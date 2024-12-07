// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sudo_H__
#define __dense_lay_64_32_sudo_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sudo_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sudo_ram) {
        ram[0] = "0b1111101111001";
        ram[1] = "0b0000011100010";
        ram[2] = "0b1110110101111";
        ram[3] = "0b1110010011111";
        ram[4] = "0b0000001010111";
        ram[5] = "0b0000010010111";
        ram[6] = "0b0000001100000";
        ram[7] = "0b1111001001101";
        ram[8] = "0b1111101001111";
        ram[9] = "0b1111010110011";
        ram[10] = "0b1111101001011";
        ram[11] = "0b1111010010011";
        ram[12] = "0b1111100011100";
        ram[13] = "0b1111110111011";
        ram[14] = "0b1000100101010";
        ram[15] = "0b1111111000001";
        ram[16] = "0b0001011000100";
        ram[17] = "0b1110011101111";
        ram[18] = "0b0011100010100";
        ram[19] = "0b1111000010111";
        ram[20] = "0b1111001011000";
        ram[21] = "0b1111010110011";
        ram[22] = "0b1110010110010";
        ram[23] = "0b1110101110011";
        ram[24] = "0b1011110010011";
        ram[25] = "0b1101001001110";
        ram[26] = "0b1111111011111";
        ram[27] = "0b1110011011001";
        ram[28] = "0b1111111001000";
        ram[29] = "0b1110111111101";
        ram[30] = "0b1111100100001";
        ram[31] = "0b1111101111101";


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


SC_MODULE(dense_lay_64_32_sudo) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sudo_ram* meminst;


SC_CTOR(dense_lay_64_32_sudo) {
meminst = new dense_lay_64_32_sudo_ram("dense_lay_64_32_sudo_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sudo() {
    delete meminst;
}


};//endmodule
#endif
