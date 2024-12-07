// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_socq_H__
#define __dense_lay_64_32_socq_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_socq_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_socq_ram) {
        ram[0] = "0b001111000011";
        ram[1] = "0b000010001001";
        ram[2] = "0b010001110111";
        ram[3] = "0b111101001110";
        ram[4] = "0b110110100000";
        ram[5] = "0b000000010001";
        ram[6] = "0b111100110101";
        ram[7] = "0b000000000110";
        ram[8] = "0b000000000000";
        ram[9] = "0b111100001100";
        ram[10] = "0b000001010101";
        ram[11] = "0b000000110010";
        ram[12] = "0b111110001110";
        ram[13] = "0b111111001011";
        ram[14] = "0b000011110101";
        ram[15] = "0b111101011011";
        ram[16] = "0b000101000100";
        ram[17] = "0b111101110001";
        ram[18] = "0b111110110101";
        ram[19] = "0b111011011001";
        ram[20] = "0b000001101011";
        ram[21] = "0b000011101011";
        ram[22] = "0b000001110001";
        ram[23] = "0b110110000110";
        ram[24] = "0b111111111100";
        ram[25] = "0b000010110000";
        ram[26] = "0b111110101111";
        ram[27] = "0b111100111100";
        ram[28] = "0b000001100000";
        ram[29] = "0b111101000001";
        ram[30] = "0b111011100100";
        ram[31] = "0b000001000111";


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


SC_MODULE(dense_lay_64_32_socq) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_socq_ram* meminst;


SC_CTOR(dense_lay_64_32_socq) {
meminst = new dense_lay_64_32_socq_ram("dense_lay_64_32_socq_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_socq() {
    delete meminst;
}


};//endmodule
#endif
