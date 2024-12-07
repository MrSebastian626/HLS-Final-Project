// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sYie_H__
#define __dense_lay_64_32_sYie_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sYie_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sYie_ram) {
        ram[0] = "0b01110101111";
        ram[1] = "0b11111101100";
        ram[2] = "0b11100010001";
        ram[3] = "0b11101101000";
        ram[4] = "0b00011110111";
        ram[5] = "0b00100010001";
        ram[6] = "0b00010100000";
        ram[7] = "0b00000110001";
        ram[8] = "0b11111100000";
        ram[9] = "0b00010000111";
        ram[10] = "0b00000111100";
        ram[11] = "0b00010110010";
        ram[12] = "0b00011000010";
        ram[13] = "0b11110000001";
        ram[14] = "0b11001001001";
        ram[15] = "0b11100110111";
        ram[16] = "0b10111100101";
        ram[17] = "0b00100111101";
        ram[18] = "0b00101110001";
        ram[19] = "0b00001000111";
        ram[20] = "0b01000011000";
        ram[21] = "0b00101111101";
        ram[22] = "0b00011100100";
        ram[23] = "0b00011000100";
        ram[24] = "0b01000010001";
        ram[25] = "0b11011111101";
        ram[26] = "0b00001010001";
        ram[27] = "0b00001110110";
        ram[28] = "0b00010001000";
        ram[29] = "0b00101100010";
        ram[30] = "0b11100001100";
        ram[31] = "0b00101000010";


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


SC_MODULE(dense_lay_64_32_sYie) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sYie_ram* meminst;


SC_CTOR(dense_lay_64_32_sYie) {
meminst = new dense_lay_64_32_sYie_ram("dense_lay_64_32_sYie_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sYie() {
    delete meminst;
}


};//endmodule
#endif
