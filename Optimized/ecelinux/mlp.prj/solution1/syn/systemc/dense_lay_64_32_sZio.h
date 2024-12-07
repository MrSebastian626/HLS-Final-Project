// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sZio_H__
#define __dense_lay_64_32_sZio_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sZio_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sZio_ram) {
        ram[0] = "0b111000101";
        ram[1] = "0b111100010";
        ram[2] = "0b110110110";
        ram[3] = "0b101111000";
        ram[4] = "0b011000011";
        ram[5] = "0b110111010";
        ram[6] = "0b100011111";
        ram[7] = "0b010011011";
        ram[8] = "0b110110011";
        ram[9] = "0b010000101";
        ram[10] = "0b010111001";
        ram[11] = "0b100001110";
        ram[12] = "0b001001111";
        ram[13] = "0b011111110";
        ram[14] = "0b000101111";
        ram[15] = "0b101000111";
        ram[16] = "0b010111110";
        ram[17] = "0b000101110";
        ram[18] = "0b000110001";
        ram[19] = "0b100010110";
        ram[20] = "0b000001011";
        ram[21] = "0b010000010";
        ram[22] = "0b010101000";
        ram[23] = "0b001001010";
        ram[24] = "0b110010111";
        ram[25] = "0b110001000";
        ram[26] = "0b011001110";
        ram[27] = "0b010000111";
        ram[28] = "0b011001001";
        ram[29] = "0b110101011";
        ram[30] = "0b110001001";
        ram[31] = "0b101110100";


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


SC_MODULE(dense_lay_64_32_sZio) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sZio_ram* meminst;


SC_CTOR(dense_lay_64_32_sZio) {
meminst = new dense_lay_64_32_sZio_ram("dense_lay_64_32_sZio_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sZio() {
    delete meminst;
}


};//endmodule
#endif
