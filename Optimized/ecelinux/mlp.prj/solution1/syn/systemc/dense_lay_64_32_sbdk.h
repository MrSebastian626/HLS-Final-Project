// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbdk_H__
#define __dense_lay_64_32_sbdk_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbdk_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbdk_ram) {
        ram[0] = "0b000010110010";
        ram[1] = "0b111111100000";
        ram[2] = "0b101000111111";
        ram[3] = "0b000001001101";
        ram[4] = "0b110100100000";
        ram[5] = "0b000000101000";
        ram[6] = "0b000010110000";
        ram[7] = "0b000110000110";
        ram[8] = "0b111110000011";
        ram[9] = "0b000101101001";
        ram[10] = "0b000100111110";
        ram[11] = "0b000011000011";
        ram[12] = "0b000000100000";
        ram[13] = "0b000000101010";
        ram[14] = "0b000000010001";
        ram[15] = "0b000001011010";
        ram[16] = "0b111111010111";
        ram[17] = "0b000011010000";
        ram[18] = "0b111110010111";
        ram[19] = "0b000100001111";
        ram[20] = "0b000110010001";
        ram[21] = "0b001000110111";
        ram[22] = "0b000101110101";
        ram[23] = "0b111101011100";
        ram[24] = "0b111011110001";
        ram[25] = "0b111101111100";
        ram[26] = "0b111110101101";
        ram[27] = "0b000010110001";
        ram[28] = "0b111100000100";
        ram[29] = "0b000101011110";
        ram[30] = "0b111110101011";
        ram[31] = "0b111111100011";


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


SC_MODULE(dense_lay_64_32_sbdk) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbdk_ram* meminst;


SC_CTOR(dense_lay_64_32_sbdk) {
meminst = new dense_lay_64_32_sbdk_ram("dense_lay_64_32_sbdk_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbdk() {
    delete meminst;
}


};//endmodule
#endif
