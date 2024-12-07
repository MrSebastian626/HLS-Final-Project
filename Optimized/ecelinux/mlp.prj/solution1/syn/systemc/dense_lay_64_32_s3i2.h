// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_s3i2_H__
#define __dense_lay_64_32_s3i2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_s3i2_ram : public sc_core::sc_module {

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


   SC_CTOR(dense_lay_64_32_s3i2_ram) {
        ram[0] = "0b111110000";
        ram[1] = "0b100100010";
        ram[2] = "0b010111011";
        ram[3] = "0b111000001";
        ram[4] = "0b101010001";
        ram[5] = "0b101100011";
        ram[6] = "0b001000010";
        ram[7] = "0b001001001";
        ram[8] = "0b111100001";
        ram[9] = "0b011001000";
        ram[10] = "0b011011011";
        ram[11] = "0b101100001";
        ram[12] = "0b011101110";
        ram[13] = "0b000101011";
        ram[14] = "0b101111101";
        ram[15] = "0b111011110";
        ram[16] = "0b110001010";
        ram[17] = "0b101100010";
        ram[18] = "0b000001001";
        ram[19] = "0b110101010";
        ram[20] = "0b111111101";
        ram[21] = "0b110010000";
        ram[22] = "0b010000101";
        ram[23] = "0b001011001";
        ram[24] = "0b111100011";
        ram[25] = "0b010100111";
        ram[26] = "0b111010010";
        ram[27] = "0b111010011";
        ram[28] = "0b000000000";
        ram[29] = "0b101100111";
        ram[30] = "0b011011001";
        ram[31] = "0b001100111";


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


SC_MODULE(dense_lay_64_32_s3i2) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_s3i2_ram* meminst;


SC_CTOR(dense_lay_64_32_s3i2) {
meminst = new dense_lay_64_32_s3i2_ram("dense_lay_64_32_s3i2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_s3i2() {
    delete meminst;
}


};//endmodule
#endif
