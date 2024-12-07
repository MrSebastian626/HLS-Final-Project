// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_lay_64_32_sbom_H__
#define __dense_lay_64_32_sbom_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_lay_64_32_sbom_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 14;
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


   SC_CTOR(dense_lay_64_32_sbom_ram) {
        ram[0] = "0b01100011101001";
        ram[1] = "0b00000011101001";
        ram[2] = "0b00101101111000";
        ram[3] = "0b00111011101011";
        ram[4] = "0b00100111100010";
        ram[5] = "0b00100111010010";
        ram[6] = "0b00000011100001";
        ram[7] = "0b00101101001000";
        ram[8] = "0b11111111101000";
        ram[9] = "0b00101100000000";
        ram[10] = "0b00110011011010";
        ram[11] = "0b00101011111111";
        ram[12] = "0b11111111000010";
        ram[13] = "0b11111111100101";
        ram[14] = "0b00101101011101";
        ram[15] = "0b00000011101110";
        ram[16] = "0b00111110001100";
        ram[17] = "0b00101010000011";
        ram[18] = "0b00100100011101";
        ram[19] = "0b00100100000110";
        ram[20] = "0b00101100011101";
        ram[21] = "0b00101011100111";
        ram[22] = "0b00100010100101";
        ram[23] = "0b00111110100111";
        ram[24] = "0b00101101011011";
        ram[25] = "0b00101111001010";
        ram[26] = "0b11111101110001";
        ram[27] = "0b00101001001011";
        ram[28] = "0b00101001110010";
        ram[29] = "0b00101010111001";
        ram[30] = "0b11111101111001";
        ram[31] = "0b00110100110100";


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


SC_MODULE(dense_lay_64_32_sbom) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_lay_64_32_sbom_ram* meminst;


SC_CTOR(dense_lay_64_32_sbom) {
meminst = new dense_lay_64_32_sbom_ram("dense_lay_64_32_sbom_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_lay_64_32_sbom() {
    delete meminst;
}


};//endmodule
#endif
