// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_s4jc_H__
#define __dense_lay_64_32_s4jc_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_s4jc_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_s4jc_ram) {
        ram[0] = "0b011010110";
        ram[1] = "0b111001010";
        ram[2] = "0b011001110";
        ram[3] = "0b101001000";
        ram[4] = "0b111110000";
        ram[5] = "0b100001000";
        ram[6] = "0b000010100";
        ram[7] = "0b100010111";
        ram[8] = "0b001100011";
        ram[9] = "0b111010000";
        ram[10] = "0b101001010";
        ram[11] = "0b011001111";
        ram[12] = "0b101010111";
        ram[13] = "0b000100111";
        ram[14] = "0b010111001";
        ram[15] = "0b001010101";
        ram[16] = "0b101100011";
        ram[17] = "0b110001101";
        ram[18] = "0b110011010";
        ram[19] = "0b011111010";
        ram[20] = "0b110001011";
        ram[21] = "0b001101011";
        ram[22] = "0b110010000";
        ram[23] = "0b010000110";
        ram[24] = "0b001010100";
        ram[25] = "0b101010110";
        ram[26] = "0b111000110";
        ram[27] = "0b100101101";
        ram[28] = "0b001110111";
        ram[29] = "0b001010010";
        ram[30] = "0b001010011";
        ram[31] = "0b100110101";


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


SC_MODULE(dense_lay_64_32_s4jc) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_s4jc_ram* meminst;


SC_CTOR(dense_lay_64_32_s4jc) {
meminst = new dense_lay_64_32_s4jc_ram("dense_lay_64_32_s4jc_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_s4jc() {
    delete meminst;
}


};//endmodule
#endif
