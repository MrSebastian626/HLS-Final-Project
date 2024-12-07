// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbml_H__
#define __dense_lay_64_32_sbml_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbml_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sbml_ram) {
        ram[0] = "0b000010010001";
        ram[1] = "0b111100110001";
        ram[2] = "0b101111011101";
        ram[3] = "0b110100000010";
        ram[4] = "0b101111100111";
        ram[5] = "0b000101011000";
        ram[6] = "0b111110110010";
        ram[7] = "0b111100101101";
        ram[8] = "0b000010000111";
        ram[9] = "0b111111010010";
        ram[10] = "0b111011101110";
        ram[11] = "0b000010001111";
        ram[12] = "0b111100111001";
        ram[13] = "0b000000101010";
        ram[14] = "0b101111111101";
        ram[15] = "0b000011100001";
        ram[16] = "0b101111011110";
        ram[17] = "0b000001010010";
        ram[18] = "0b111110001000";
        ram[19] = "0b111111001011";
        ram[20] = "0b000011010001";
        ram[21] = "0b000010011111";
        ram[22] = "0b000100111011";
        ram[23] = "0b111111111010";
        ram[24] = "0b111001010011";
        ram[25] = "0b110000101101";
        ram[26] = "0b111100001000";
        ram[27] = "0b000001101111";
        ram[28] = "0b111011001111";
        ram[29] = "0b000011001001";
        ram[30] = "0b111011101000";
        ram[31] = "0b111000110000";


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


SC_MODULE(dense_lay_64_32_sbml) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbml_ram* meminst;


SC_CTOR(dense_lay_64_32_sbml) {
meminst = new dense_lay_64_32_sbml_ram("dense_lay_64_32_sbml_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbml() {
    delete meminst;
}


};//endmodule
#endif
