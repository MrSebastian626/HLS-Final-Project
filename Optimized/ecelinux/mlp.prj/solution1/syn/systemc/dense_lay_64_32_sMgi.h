// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sMgi_H__
#define __dense_lay_64_32_sMgi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sMgi_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sMgi_ram) {
        ram[0] = "0b1110110010010";
        ram[1] = "0b1111101111000";
        ram[2] = "0b0001111110011";
        ram[3] = "0b0001101111001";
        ram[4] = "0b0001111000000";
        ram[5] = "0b0001000011101";
        ram[6] = "0b0000010111001";
        ram[7] = "0b0001000101010";
        ram[8] = "0b0000001011100";
        ram[9] = "0b0001010001010";
        ram[10] = "0b0001111011110";
        ram[11] = "0b0010010000011";
        ram[12] = "0b1111011100110";
        ram[13] = "0b0000001100000";
        ram[14] = "0b0001011101110";
        ram[15] = "0b0000001110100";
        ram[16] = "0b0010001101001";
        ram[17] = "0b0000100010000";
        ram[18] = "0b0001001000000";
        ram[19] = "0b0000011111010";
        ram[20] = "0b0000001110011";
        ram[21] = "0b0001000010111";
        ram[22] = "0b0000010101101";
        ram[23] = "0b0001111000100";
        ram[24] = "0b0110010010111";
        ram[25] = "0b0010011111111";
        ram[26] = "0b1111100100111";
        ram[27] = "0b1111110101100";
        ram[28] = "0b0000010001111";
        ram[29] = "0b0000110110111";
        ram[30] = "0b1111110110010";
        ram[31] = "0b0010100010100";


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


SC_MODULE(dense_lay_64_32_sMgi) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sMgi_ram* meminst;


SC_CTOR(dense_lay_64_32_sMgi) {
meminst = new dense_lay_64_32_sMgi_ram("dense_lay_64_32_sMgi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sMgi() {
    delete meminst;
}


};//endmodule
#endif
