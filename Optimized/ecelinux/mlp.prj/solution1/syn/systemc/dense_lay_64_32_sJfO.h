// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sJfO_H__
#define __dense_lay_64_32_sJfO_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sJfO_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
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


   SC_CTOR(dense_lay_64_32_sJfO_ram) {
        ram[0] = "0b001100001";
        ram[1] = "0b011111110";
        ram[2] = "0b001100101";
        ram[3] = "0b010000100";
        ram[4] = "0b011100111";
        ram[5] = "0b101011001";
        ram[6] = "0b000101111";
        ram[7] = "0b110110010";
        ram[8] = "0b001000000";
        ram[9] = "0b010000110";
        ram[10] = "0b101000100";
        ram[11] = "0b110110100";
        ram[12] = "0b110100111";
        ram[13] = "0b100110011";
        ram[14] = "0b110011100";
        ram[15] = "0b100111011";
        ram[16] = "0b100111000";
        ram[17] = "0b010110101";
        ram[18] = "0b001011110";
        ram[19] = "0b101111010";
        ram[20] = "0b111111010";
        ram[21] = "0b001101010";
        ram[22] = "0b101001011";
        ram[23] = "0b111100101";
        ram[24] = "0b001111010";
        ram[25] = "0b100111010";
        ram[26] = "0b001111011";
        ram[27] = "0b011111010";
        ram[28] = "0b100000101";
        ram[29] = "0b100100101";
        ram[30] = "0b000110010";
        ram[31] = "0b010100100";


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


SC_MODULE(dense_lay_64_32_sJfO) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sJfO_ram* meminst;


SC_CTOR(dense_lay_64_32_sJfO) {
meminst = new dense_lay_64_32_sJfO_ram("dense_lay_64_32_sJfO_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sJfO() {
    delete meminst;
}


};//endmodule
#endif
