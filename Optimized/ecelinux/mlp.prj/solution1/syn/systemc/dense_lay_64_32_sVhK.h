// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sVhK_H__
#define __dense_lay_64_32_sVhK_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sVhK_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_sVhK_ram) {
        ram[0] = "0b001010111100";
        ram[1] = "0b000010000111";
        ram[2] = "0b111011101010";
        ram[3] = "0b111101001010";
        ram[4] = "0b000010100100";
        ram[5] = "0b111111000110";
        ram[6] = "0b000011001110";
        ram[7] = "0b110110011110";
        ram[8] = "0b000000100010";
        ram[9] = "0b111000010010";
        ram[10] = "0b111011111101";
        ram[11] = "0b111111101100";
        ram[12] = "0b111100100110";
        ram[13] = "0b000001100001";
        ram[14] = "0b110001101000";
        ram[15] = "0b000000110111";
        ram[16] = "0b000111100110";
        ram[17] = "0b110100110000";
        ram[18] = "0b000011101001";
        ram[19] = "0b110011100010";
        ram[20] = "0b110100001101";
        ram[21] = "0b111001101110";
        ram[22] = "0b110100000001";
        ram[23] = "0b101111001101";
        ram[24] = "0b000000101001";
        ram[25] = "0b000000111001";
        ram[26] = "0b000010111010";
        ram[27] = "0b110110011111";
        ram[28] = "0b111010100111";
        ram[29] = "0b111011010110";
        ram[30] = "0b111101011001";
        ram[31] = "0b000010011110";


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


SC_MODULE(dense_lay_64_32_sVhK) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sVhK_ram* meminst;


SC_CTOR(dense_lay_64_32_sVhK) {
meminst = new dense_lay_64_32_sVhK_ram("dense_lay_64_32_sVhK_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sVhK() {
    delete meminst;
}


};//endmodule
#endif
