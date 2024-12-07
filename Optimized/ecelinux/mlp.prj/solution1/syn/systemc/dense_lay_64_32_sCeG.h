// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sCeG_H__
#define __dense_lay_64_32_sCeG_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sCeG_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
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


   SC_CTOR(dense_lay_64_32_sCeG_ram) {
        ram[0] = "0b00100000110";
        ram[1] = "0b11110101011";
        ram[2] = "0b11001110111";
        ram[3] = "0b00011011110";
        ram[4] = "0b11010101111";
        ram[5] = "0b00010000111";
        ram[6] = "0b11011111011";
        ram[7] = "0b00011010010";
        ram[8] = "0b11101010010";
        ram[9] = "0b00001111101";
        ram[10] = "0b00100111010";
        ram[11] = "0b00001000100";
        ram[12] = "0b00010110001";
        ram[13] = "0b11010010110";
        ram[14] = "0b11110001001";
        ram[15] = "0b11110000100";
        ram[16] = "0b00000001001";
        ram[17] = "0b00111000110";
        ram[18] = "0b11111011100";
        ram[19] = "0b00111100001";
        ram[20] = "0b00010110000";
        ram[21] = "0b11110000001";
        ram[22] = "0b01001110000";
        ram[23] = "0b00000110001";
        ram[24] = "0b00100000011";
        ram[25] = "0b00000000100";
        ram[26] = "0b11100000001";
        ram[27] = "0b00110001001";
        ram[28] = "0b11110111001";
        ram[29] = "0b00101111011";
        ram[30] = "0b11111101110";
        ram[31] = "0b11111011100";


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


SC_MODULE(dense_lay_64_32_sCeG) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sCeG_ram* meminst;


SC_CTOR(dense_lay_64_32_sCeG) {
meminst = new dense_lay_64_32_sCeG_ram("dense_lay_64_32_sCeG_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sCeG() {
    delete meminst;
}


};//endmodule
#endif
