// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbil_H__
#define __dense_lay_64_32_sbil_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbil_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbil_ram) {
        ram[0] = "0b1001000101100";
        ram[1] = "0b1111110011111";
        ram[2] = "0b0000000000010";
        ram[3] = "0b1110111111001";
        ram[4] = "0b1110100111001";
        ram[5] = "0b1110010101110";
        ram[6] = "0b0000000011111";
        ram[7] = "0b1101111111111";
        ram[8] = "0b1111100110011";
        ram[9] = "0b1110000000000";
        ram[10] = "0b1110110110110";
        ram[11] = "0b1110000110011";
        ram[12] = "0b0000011000101";
        ram[13] = "0b1111110010101";
        ram[14] = "0b0000000001110";
        ram[15] = "0b0000000010011";
        ram[16] = "0b1110010111011";
        ram[17] = "0b1110000000000";
        ram[18] = "0b1110110111110";
        ram[19] = "0b1110011010001";
        ram[20] = "0b1110000111111";
        ram[21] = "0b1110111110001";
        ram[22] = "0b1101111110101";
        ram[23] = "0b0000011000011";
        ram[24] = "0b1110000010110";
        ram[25] = "0b1110100010000";
        ram[26] = "0b0000000010011";
        ram[27] = "0b1110100101000";
        ram[28] = "0b1110100101011";
        ram[29] = "0b1110110000001";
        ram[30] = "0b0000010010110";
        ram[31] = "0b1101110110111";


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


SC_MODULE(dense_lay_64_32_sbil) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbil_ram* meminst;


SC_CTOR(dense_lay_64_32_sbil) {
meminst = new dense_lay_64_32_sbil_ram("dense_lay_64_32_sbil_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbil() {
    delete meminst;
}


};//endmodule
#endif
