// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_srcU_H__
#define __dense_lay_64_32_srcU_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_srcU_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_srcU_ram) {
        ram[0] = "0b001111101";
        ram[1] = "0b000000110";
        ram[2] = "0b101011011";
        ram[3] = "0b100011100";
        ram[4] = "0b000011000";
        ram[5] = "0b000110011";
        ram[6] = "0b111110110";
        ram[7] = "0b101011001";
        ram[8] = "0b000010101";
        ram[9] = "0b111110001";
        ram[10] = "0b011100101";
        ram[11] = "0b110001111";
        ram[12] = "0b000000010";
        ram[13] = "0b110110101";
        ram[14] = "0b100101000";
        ram[15] = "0b101110100";
        ram[16] = "0b111110101";
        ram[17] = "0b001011000";
        ram[18] = "0b001000100";
        ram[19] = "0b101010110";
        ram[20] = "0b001111000";
        ram[21] = "0b111100100";
        ram[22] = "0b110000011";
        ram[23] = "0b010000001";
        ram[24] = "0b000111010";
        ram[25] = "0b110111011";
        ram[26] = "0b000010010";
        ram[27] = "0b111110011";
        ram[28] = "0b001000100";
        ram[29] = "0b010001010";
        ram[30] = "0b001011010";
        ram[31] = "0b010001100";


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


SC_MODULE(dense_lay_64_32_srcU) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_srcU_ram* meminst;


SC_CTOR(dense_lay_64_32_srcU) {
meminst = new dense_lay_64_32_srcU_ram("dense_lay_64_32_srcU_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_srcU() {
    delete meminst;
}


};//endmodule
#endif
