// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbfk_H__
#define __dense_lay_64_32_sbfk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbfk_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbfk_ram) {
        ram[0] = "0b100101011000";
        ram[1] = "0b000000110010";
        ram[2] = "0b010010101000";
        ram[3] = "0b001011000110";
        ram[4] = "0b110111000100";
        ram[5] = "0b111100000100";
        ram[6] = "0b000000101001";
        ram[7] = "0b000000111100";
        ram[8] = "0b000000100001";
        ram[9] = "0b111110011011";
        ram[10] = "0b000000010000";
        ram[11] = "0b111100001111";
        ram[12] = "0b000000111100";
        ram[13] = "0b111110011110";
        ram[14] = "0b001010010110";
        ram[15] = "0b111110111010";
        ram[16] = "0b001100011101";
        ram[17] = "0b111100100011";
        ram[18] = "0b111011101111";
        ram[19] = "0b111011111101";
        ram[20] = "0b111110010001";
        ram[21] = "0b111110101010";
        ram[22] = "0b110110001010";
        ram[23] = "0b111001000111";
        ram[24] = "0b000100101011";
        ram[25] = "0b111101110010";
        ram[26] = "0b111011001000";
        ram[27] = "0b111110001010";
        ram[28] = "0b110110111110";
        ram[29] = "0b111011000011";
        ram[30] = "0b111111010100";
        ram[31] = "0b110100001100";


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


SC_MODULE(dense_lay_64_32_sbfk) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbfk_ram* meminst;


SC_CTOR(dense_lay_64_32_sbfk) {
meminst = new dense_lay_64_32_sbfk_ram("dense_lay_64_32_sbfk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbfk() {
    delete meminst;
}


};//endmodule
#endif
