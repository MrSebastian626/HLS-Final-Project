// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_szec_H__
#define __dense_lay_64_32_szec_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_szec_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_szec_ram) {
        ram[0] = "0b1010000010000";
        ram[1] = "0b1111111100000";
        ram[2] = "0b0010001010100";
        ram[3] = "0b1111111001101";
        ram[4] = "0b1111001001011";
        ram[5] = "0b1111000001110";
        ram[6] = "0b1111101001010";
        ram[7] = "0b1111111111111";
        ram[8] = "0b0000001001000";
        ram[9] = "0b0000001101101";
        ram[10] = "0b1111010111101";
        ram[11] = "0b1111011010011";
        ram[12] = "0b1111110001100";
        ram[13] = "0b1111110110000";
        ram[14] = "0b1111111011111";
        ram[15] = "0b1111101111011";
        ram[16] = "0b1111110110010";
        ram[17] = "0b1111110101000";
        ram[18] = "0b0000001111011";
        ram[19] = "0b0000000000100";
        ram[20] = "0b0000010000011";
        ram[21] = "0b0000001011000";
        ram[22] = "0b0000000001001";
        ram[23] = "0b0000101001000";
        ram[24] = "0b0000110110110";
        ram[25] = "0b0000000000001";
        ram[26] = "0b1111011000100";
        ram[27] = "0b1111101111111";
        ram[28] = "0b0000000000001";
        ram[29] = "0b1111011010000";
        ram[30] = "0b1111111001011";
        ram[31] = "0b0000001000101";


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


SC_MODULE(dense_lay_64_32_szec) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_szec_ram* meminst;


SC_CTOR(dense_lay_64_32_szec) {
meminst = new dense_lay_64_32_szec_ram("dense_lay_64_32_szec_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_szec() {
    delete meminst;
}


};//endmodule
#endif
