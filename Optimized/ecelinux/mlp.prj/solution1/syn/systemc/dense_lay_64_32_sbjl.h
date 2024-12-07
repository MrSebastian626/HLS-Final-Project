// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbjl_H__
#define __dense_lay_64_32_sbjl_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbjl_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbjl_ram) {
        ram[0] = "0b0101001010110";
        ram[1] = "0b1111101110110";
        ram[2] = "0b0010100111110";
        ram[3] = "0b0010110001111";
        ram[4] = "0b0010110101101";
        ram[5] = "0b0001111101111";
        ram[6] = "0b1111111000111";
        ram[7] = "0b0010001110111";
        ram[8] = "0b1111111011000";
        ram[9] = "0b0010000101011";
        ram[10] = "0b0010010011001";
        ram[11] = "0b0010001110011";
        ram[12] = "0b0000010001011";
        ram[13] = "0b0000000110001";
        ram[14] = "0b0010001011011";
        ram[15] = "0b0000001001010";
        ram[16] = "0b0010000000111";
        ram[17] = "0b0010001010101";
        ram[18] = "0b0010000001011";
        ram[19] = "0b0010001100100";
        ram[20] = "0b0010111000100";
        ram[21] = "0b0010000000000";
        ram[22] = "0b0010001110000";
        ram[23] = "0b0010000001010";
        ram[24] = "0b0010000111100";
        ram[25] = "0b0010001101110";
        ram[26] = "0b1111101110011";
        ram[27] = "0b0010110001000";
        ram[28] = "0b0010011111100";
        ram[29] = "0b0010001100100";
        ram[30] = "0b0000010000100";
        ram[31] = "0b0001011110110";


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


SC_MODULE(dense_lay_64_32_sbjl) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbjl_ram* meminst;


SC_CTOR(dense_lay_64_32_sbjl) {
meminst = new dense_lay_64_32_sbjl_ram("dense_lay_64_32_sbjl_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbjl() {
    delete meminst;
}


};//endmodule
#endif
