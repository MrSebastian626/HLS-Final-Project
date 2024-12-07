// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_32_16_sbEo_H__
#define __dense_lay_32_16_sbEo_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_32_16_sbEo_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_lay_32_16_sbEo_ram) {
        ram[0] = "0b111110010001";
        ram[1] = "0b111111011100";
        ram[2] = "0b111100010101";
        ram[3] = "0b000000111011";
        ram[4] = "0b111111100101";
        ram[5] = "0b000010010011";
        ram[6] = "0b000111010101";
        ram[7] = "0b001000100110";
        ram[8] = "0b000101100111";
        ram[9] = "0b000011011011";
        ram[10] = "0b111110011111";
        ram[11] = "0b111110111011";
        ram[12] = "0b001000111101";
        ram[13] = "0b001000001001";
        ram[14] = "0b101010101101";
        ram[15] = "0b000110010101";


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


SC_MODULE(dense_lay_32_16_sbEo) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_32_16_sbEo_ram* meminst;


SC_CTOR(dense_lay_32_16_sbEo) {
meminst = new dense_lay_32_16_sbEo_ram("dense_lay_32_16_sbEo_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_32_16_sbEo() {
    delete meminst;
}


};//endmodule
#endif
