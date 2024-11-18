// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __mlp_monte_carlo_wg8j_H__
#define __mlp_monte_carlo_wg8j_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct mlp_monte_carlo_wg8j_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
  static const unsigned AddressRange = 512;
  static const unsigned AddressWidth = 9;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(mlp_monte_carlo_wg8j_ram) {
        ram[0] = "0b1001101011001";
        ram[1] = "0b1001100010000";
        ram[2] = "0b0000010100110";
        ram[3] = "0b1111110111101";
        ram[4] = "0b1011000101001";
        ram[5] = "0b0000001100001";
        ram[6] = "0b1011000111011";
        ram[7] = "0b1010001000101";
        ram[8] = "0b1010010001011";
        ram[9] = "0b1111011100110";
        ram[10] = "0b1010111011100";
        ram[11] = "0b0000010011011";
        ram[12] = "0b1011000101000";
        ram[13] = "0b1010000100111";
        ram[14] = "0b0010111011010";
        ram[15] = "0b1010110100010";
        ram[16] = "0b1111010100110";
        ram[17] = "0b0000100010101";
        ram[18] = "0b0000010111110";
        ram[19] = "0b0000100101111";
        ram[20] = "0b1111100000010";
        ram[21] = "0b0000101011100";
        ram[22] = "0b1111010110010";
        ram[23] = "0b1111100010100";
        ram[24] = "0b1111101011100";
        ram[25] = "0b0000101000101";
        ram[26] = "0b0000010011000";
        ram[27] = "0b1111100011011";
        ram[28] = "0b1111100110111";
        ram[29] = "0b0000010011101";
        ram[30] = "0b1111101111100";
        ram[31] = "0b0000011100010";
        ram[32] = "0b0000011000101";
        ram[33] = "0b0011010111011";
        ram[34] = "0b1111111000100";
        ram[35] = "0b1111001010001";
        ram[36] = "0b0010101101101";
        ram[37] = "0b1111100011111";
        ram[38] = "0b0011100011001";
        ram[39] = "0b0011110010000";
        ram[40] = "0b0011001001100";
        ram[41] = "0b1111100111000";
        ram[42] = "0b0011010111101";
        ram[43] = "0b0000000110111";
        ram[44] = "0b0011011001100";
        ram[45] = "0b0011100111101";
        ram[46] = "0b1110110100100";
        ram[47] = "0b0011010111001";
        ram[48] = "0b0001100001001";
        ram[49] = "0b0000011000001";
        ram[50] = "0b0000011110011";
        ram[51] = "0b1111100001111";
        ram[52] = "0b0000100111100";
        ram[53] = "0b0000100001010";
        ram[54] = "0b0000001001111";
        ram[55] = "0b0000011000111";
        ram[56] = "0b0001000000010";
        ram[57] = "0b1111011100010";
        ram[58] = "0b0000110010111";
        ram[59] = "0b1111011101000";
        ram[60] = "0b0000111010001";
        ram[61] = "0b1111111000001";
        ram[62] = "0b1101101010011";
        ram[63] = "0b1111111110101";
        ram[64] = "0b1111111101001";
        ram[65] = "0b0001000010110";
        ram[66] = "0b1111101010011";
        ram[67] = "0b1111001011111";
        ram[68] = "0b0010000010100";
        ram[69] = "0b1111111010100";
        ram[70] = "0b0001110101011";
        ram[71] = "0b0010000110111";
        ram[72] = "0b0001111110011";
        ram[73] = "0b0000000110000";
        ram[74] = "0b0000110100100";
        ram[75] = "0b1111110001101";
        ram[76] = "0b0001110100110";
        ram[77] = "0b0000110101100";
        ram[78] = "0b0000100101011";
        ram[79] = "0b0001111001111";
        ram[80] = "0b1111111000111";
        ram[81] = "0b0001001111111";
        ram[82] = "0b1111111100110";
        ram[83] = "0b0000001000011";
        ram[84] = "0b0000001111010";
        ram[85] = "0b1111101011110";
        ram[86] = "0b0000011100111";
        ram[87] = "0b0001001011001";
        ram[88] = "0b0001001100010";
        ram[89] = "0b1111010010001";
        ram[90] = "0b0000001101111";
        ram[91] = "0b0000010111010";
        ram[92] = "0b0000110111111";
        ram[93] = "0b0000111110111";
        ram[94] = "0b1111101100101";
        ram[95] = "0b0001100011001";
        ram[96] = "0b0000001110110";
        ram[97] = "0b1111101010001";
        ram[98] = "0b0000001100001";
        ram[99] = "0b1111010100100";
        ram[100] = "0b1111011111011";
        ram[101] = "0b0000001000010";
        ram[102] = "0b1111110100001";
        ram[103] = "0b0000010110011";
        ram[104] = "0b1111101110000";
        ram[105] = "0b1111100110111";
        ram[106] = "0b0000001010101";
        ram[107] = "0b0000011011010";
        ram[108] = "0b1111100110101";
        ram[109] = "0b0000100111011";
        ram[110] = "0b1111111011100";
        ram[111] = "0b1111111111001";
        ram[112] = "0b1111100000011";
        ram[113] = "0b0000010101101";
        ram[114] = "0b0000011101110";
        ram[115] = "0b1111100010010";
        ram[116] = "0b0000111110000";
        ram[117] = "0b1111100011011";
        ram[118] = "0b0000000011110";
        ram[119] = "0b0001011101111";
        ram[120] = "0b0001011101101";
        ram[121] = "0b1111101000110";
        ram[122] = "0b0001001111010";
        ram[123] = "0b1111000101011";
        ram[124] = "0b0000111100000";
        ram[125] = "0b0000001011100";
        ram[126] = "0b1111110110000";
        ram[127] = "0b0000010101111";
        ram[128] = "0b1111100101100";
        ram[129] = "0b1111100000100";
        ram[130] = "0b0000100001101";
        ram[131] = "0b0000001001010";
        ram[132] = "0b0000001100110";
        ram[133] = "0b1111011111010";
        ram[134] = "0b1111010110111";
        ram[135] = "0b0000101000010";
        ram[136] = "0b0000011011110";
        ram[137] = "0b1111110100000";
        ram[138] = "0b1111011011101";
        ram[139] = "0b0000000101001";
        ram[140] = "0b0000000110011";
        ram[141] = "0b0000011110101";
        ram[142] = "0b0000101100100";
        ram[143] = "0b1111010010111";
        ram[144] = "0b1110110111001";
        ram[145] = "0b0000010100100";
        ram[146] = "0b1111111111101";
        ram[147] = "0b1111100110110";
        ram[148] = "0b1111101101101";
        ram[149] = "0b0000011010111";
        ram[150] = "0b1111111100011";
        ram[151] = "0b0000110001000";
        ram[152] = "0b0000111000101";
        ram[153] = "0b1111101110000";
        ram[154] = "0b0000001111101";
        ram[155] = "0b1111011101111";
        ram[156] = "0b1111111010110";
        ram[157] = "0b0000101010000";
        ram[158] = "0b1111101111100";
        ram[159] = "0b0000010101111";
        ram[160] = "0b1101110100100";
        ram[161] = "0b0001001111111";
        ram[162] = "0b0000001111000";
        ram[163] = "0b1111010110010";
        ram[164] = "0b0000101001100";
        ram[165] = "0b0000001110011";
        ram[166] = "0b0000101110001";
        ram[167] = "0b0000100100001";
        ram[168] = "0b0000100111101";
        ram[169] = "0b0000011000010";
        ram[170] = "0b0000111001010";
        ram[171] = "0b1111110001110";
        ram[172] = "0b0000111001000";
        ram[173] = "0b0000111001110";
        ram[174] = "0b1110111011110";
        ram[175] = "0b0000100100110";
        ram[176] = "0b1100011110101";
        ram[177] = "0b0000101011011";
        ram[178] = "0b0000011011101";
        ram[179] = "0b1111001001110";
        ram[180] = "0b0000110101101";
        ram[181] = "0b0000010011000";
        ram[182] = "0b0000011011010";
        ram[183] = "0b0000001010111";
        ram[184] = "0b0000000011100";
        ram[185] = "0b0000010000000";
        ram[186] = "0b0000111100001";
        ram[187] = "0b1111111101101";
        ram[188] = "0b0001001000010";
        ram[189] = "0b0000001000011";
        ram[190] = "0b1111010100111";
        ram[191] = "0b0000101100101";
        ram[192] = "0b0000100100110";
        ram[193] = "0b1111101000100";
        ram[194] = "0b0000101010010";
        ram[195] = "0b1111011100001";
        ram[196] = "0b0000000000101";
        ram[197] = "0b0000100111010";
        ram[198] = "0b1111100010011";
        ram[199] = "0b1111011101111";
        ram[200] = "0b0000000111111";
        ram[201] = "0b1111100111110";
        ram[202] = "0b1111101100001";
        ram[203] = "0b1111111000011";
        ram[204] = "0b0000100000010";
        ram[205] = "0b0000011111100";
        ram[206] = "0b1111011100111";
        ram[207] = "0b0000001101000";
        ram[208] = "0b1111100110000";
        ram[209] = "0b1111110010111";
        ram[210] = "0b0000100100110";
        ram[211] = "0b0000011010001";
        ram[212] = "0b1111110011101";
        ram[213] = "0b0000100100100";
        ram[214] = "0b0000100101010";
        ram[215] = "0b1111011111110";
        ram[216] = "0b1111100101111";
        ram[217] = "0b1111110110011";
        ram[218] = "0b0000010100001";
        ram[219] = "0b0000000100001";
        ram[220] = "0b0000100110101";
        ram[221] = "0b1111101010111";
        ram[222] = "0b1111101011001";
        ram[223] = "0b1111100011100";
        ram[224] = "0b1111110010001";
        ram[225] = "0b1111111011100";
        ram[226] = "0b1111100010101";
        ram[227] = "0b0000000111011";
        ram[228] = "0b1111111100101";
        ram[229] = "0b0000010010011";
        ram[230] = "0b0000111010101";
        ram[231] = "0b0001000100110";
        ram[232] = "0b0000101100111";
        ram[233] = "0b0000011011011";
        ram[234] = "0b1111110011111";
        ram[235] = "0b1111110111011";
        ram[236] = "0b0001000111101";
        ram[237] = "0b0001000001001";
        ram[238] = "0b1101010101101";
        ram[239] = "0b0000110010101";
        ram[240] = "0b1111011101100";
        ram[241] = "0b1111101101001";
        ram[242] = "0b1111111010101";
        ram[243] = "0b0000100001100";
        ram[244] = "0b1111110111011";
        ram[245] = "0b1111101010100";
        ram[246] = "0b0000011111101";
        ram[247] = "0b1111110110000";
        ram[248] = "0b1111101111010";
        ram[249] = "0b0000010011110";
        ram[250] = "0b1111100101000";
        ram[251] = "0b0000000001100";
        ram[252] = "0b1111110011010";
        ram[253] = "0b0000001001010";
        ram[254] = "0b0000001001110";
        ram[255] = "0b1111100001000";
        ram[256] = "0b1101010000100";
        ram[257] = "0b1111101101101";
        ram[258] = "0b1111010101100";
        ram[259] = "0b0000010001001";
        ram[260] = "0b1111111001101";
        ram[261] = "0b1111011100011";
        ram[262] = "0b1111100101010";
        ram[263] = "0b0000001110011";
        ram[264] = "0b1111111011100";
        ram[265] = "0b1111110100100";
        ram[266] = "0b1111110010110";
        ram[267] = "0b1111100101101";
        ram[268] = "0b1111111010100";
        ram[269] = "0b0000110000000";
        ram[270] = "0b1100111010001";
        ram[271] = "0b0000011101100";
        ram[272] = "0b0000001101110";
        ram[273] = "0b0000111001111";
        ram[274] = "0b1111111010101";
        ram[275] = "0b0000011010010";
        ram[276] = "0b0000110111001";
        ram[277] = "0b1111011100111";
        ram[278] = "0b0000001100010";
        ram[279] = "0b0000100011000";
        ram[280] = "0b0000001011110";
        ram[281] = "0b1111011001000";
        ram[282] = "0b0000110110100";
        ram[283] = "0b1111001101001";
        ram[284] = "0b0000101110001";
        ram[285] = "0b0000011001100";
        ram[286] = "0b0000000000100";
        ram[287] = "0b1111101111010";
        ram[288] = "0b0000001110111";
        ram[289] = "0b0001110011111";
        ram[290] = "0b1111100111101";
        ram[291] = "0b1111100110111";
        ram[292] = "0b0001011000100";
        ram[293] = "0b1111101100010";
        ram[294] = "0b0001010100110";
        ram[295] = "0b0001010000110";
        ram[296] = "0b0001100101110";
        ram[297] = "0b1111010100111";
        ram[298] = "0b0000101111001";
        ram[299] = "0b1111101101000";
        ram[300] = "0b0001010101101";
        ram[301] = "0b0001101000100";
        ram[302] = "0b0000110010011";
        ram[303] = "0b0001111111100";
        ram[304] = "0b1111110100100";
        ram[305] = "0b0000111011111";
        ram[306] = "0b1111100110010";
        ram[307] = "0b1111101110110";
        ram[308] = "0b1111101101110";
        ram[309] = "0b0000000100001";
        ram[310] = "0b0000100001001";
        ram[311] = "0b0000001111111";
        ram[312] = "0b0000011101110";
        ram[313] = "0b1111001111101";
        ram[314] = "0b1111110111010";
        ram[315] = "0b1111111110101";
        ram[316] = "0b1111111110110";
        ram[317] = "0b0000110001011";
        ram[318] = "0b0000100101010";
        ram[319] = "0b0000101000000";
        ram[320] = "0b0001110110111";
        ram[321] = "0b0001011100001";
        ram[322] = "0b0000001110010";
        ram[323] = "0b0000011101111";
        ram[324] = "0b0001000111000";
        ram[325] = "0b1111100100010";
        ram[326] = "0b0000111000000";
        ram[327] = "0b0001000100111";
        ram[328] = "0b0001010011001";
        ram[329] = "0b1111111111000";
        ram[330] = "0b0000010111111";
        ram[331] = "0b1111011111101";
        ram[332] = "0b0000101001000";
        ram[333] = "0b0001001100010";
        ram[334] = "0b1111100100101";
        ram[335] = "0b0001000000100";
        ram[336] = "0b1111110111001";
        ram[337] = "0b0001110011001";
        ram[338] = "0b1111110001010";
        ram[339] = "0b0000011010110";
        ram[340] = "0b0000100011111";
        ram[341] = "0b0000001100001";
        ram[342] = "0b0001000010011";
        ram[343] = "0b0000011001101";
        ram[344] = "0b0000111001101";
        ram[345] = "0b0000011001000";
        ram[346] = "0b0001011100111";
        ram[347] = "0b0000001001011";
        ram[348] = "0b0000111001101";
        ram[349] = "0b0001010111101";
        ram[350] = "0b1110111101011";
        ram[351] = "0b0001110100010";
        ram[352] = "0b0000011101100";
        ram[353] = "0b0000010110101";
        ram[354] = "0b1111010100010";
        ram[355] = "0b0000010000111";
        ram[356] = "0b0000000000011";
        ram[357] = "0b1111110001001";
        ram[358] = "0b0000111011011";
        ram[359] = "0b0001000010011";
        ram[360] = "0b0000101010100";
        ram[361] = "0b1111111001000";
        ram[362] = "0b0000011110111";
        ram[363] = "0b0000011001111";
        ram[364] = "0b0001000010100";
        ram[365] = "0b0000011100001";
        ram[366] = "0b0001001000110";
        ram[367] = "0b0000001001011";
        ram[368] = "0b0000010101011";
        ram[369] = "0b0010100110011";
        ram[370] = "0b1111111101000";
        ram[371] = "0b0000001110010";
        ram[372] = "0b0011011100011";
        ram[373] = "0b0000011100100";
        ram[374] = "0b0010001111110";
        ram[375] = "0b0011100011101";
        ram[376] = "0b0011010101001";
        ram[377] = "0b0000100011000";
        ram[378] = "0b0011001000100";
        ram[379] = "0b1111110000001";
        ram[380] = "0b0011010101110";
        ram[381] = "0b0011010111110";
        ram[382] = "0b1010100100101";
        ram[383] = "0b0010111000010";
        ram[384] = "0b1110010110111";
        ram[385] = "0b0010001110111";
        ram[386] = "0b0000100110101";
        ram[387] = "0b0000001000010";
        ram[388] = "0b0001101000101";
        ram[389] = "0b0000000010110";
        ram[390] = "0b0010011010110";
        ram[391] = "0b0010111101011";
        ram[392] = "0b0001100110111";
        ram[393] = "0b0000000010111";
        ram[394] = "0b0010000000101";
        ram[395] = "0b1111110010101";
        ram[396] = "0b0010111000100";
        ram[397] = "0b0010100101101";
        ram[398] = "0b1110111011010";
        ram[399] = "0b0010000011010";
        ram[400] = "0b1100110000110";
        ram[401] = "0b1111101111011";
        ram[402] = "0b1111010001001";
        ram[403] = "0b1111001011111";
        ram[404] = "0b0000100000010";
        ram[405] = "0b1111011011101";
        ram[406] = "0b0000100000100";
        ram[407] = "0b1111100111110";
        ram[408] = "0b0000011110011";
        ram[409] = "0b1111011111100";
        ram[410] = "0b1111111101110";
        ram[411] = "0b1111110011111";
        ram[412] = "0b1111110011111";
        ram[413] = "0b0000101111110";
        ram[414] = "0b1111001101100";
        ram[415] = "0b1111111100011";
        ram[416] = "0b1111100111110";
        ram[417] = "0b0000011000110";
        ram[418] = "0b0000011111010";
        ram[419] = "0b0000100111100";
        ram[420] = "0b1111010011101";
        ram[421] = "0b1111011010110";
        ram[422] = "0b1111111010111";
        ram[423] = "0b1111111000011";
        ram[424] = "0b1111011010101";
        ram[425] = "0b0000000111011";
        ram[426] = "0b0000001101101";
        ram[427] = "0b0000010000100";
        ram[428] = "0b1111101011110";
        ram[429] = "0b0000010111010";
        ram[430] = "0b0000011101100";
        ram[431] = "0b0000001111110";
        ram[432] = "0b0000011110101";
        ram[433] = "0b1111110010100";
        ram[434] = "0b1111111010111";
        ram[435] = "0b1111100111101";
        ram[436] = "0b0001000101011";
        ram[437] = "0b1111011011010";
        ram[438] = "0b0000111100111";
        ram[439] = "0b0000101101101";
        ram[440] = "0b0001001110011";
        ram[441] = "0b1111010001000";
        ram[442] = "0b0000101011010";
        ram[443] = "0b1111111110101";
        ram[444] = "0b0001001101011";
        ram[445] = "0b0000101010011";
        ram[446] = "0b0000010000100";
        ram[447] = "0b0000011000101";
        ram[448] = "0b0000101111110";
        ram[449] = "0b0001001000101";
        ram[450] = "0b0000001101000";
        ram[451] = "0b0000001010111";
        ram[452] = "0b0000111100100";
        ram[453] = "0b0000001100110";
        ram[454] = "0b0001001011101";
        ram[455] = "0b0000000010010";
        ram[456] = "0b0000010100110";
        ram[457] = "0b0000010000000";
        ram[458] = "0b0001000111000";
        ram[459] = "0b0000010011000";
        ram[460] = "0b0001010000110";
        ram[461] = "0b0000101001110";
        ram[462] = "0b0000010110101";
        ram[463] = "0b0000101101100";
        ram[464] = "0b1111011111001";
        ram[465] = "0b0000010110100";
        ram[466] = "0b1111101111110";
        ram[467] = "0b1111100011100";
        ram[468] = "0b0001001010000";
        ram[469] = "0b1111110111111";
        ram[470] = "0b0000011110110";
        ram[471] = "0b0001001110101";
        ram[472] = "0b0001010111000";
        ram[473] = "0b0000010110011";
        ram[474] = "0b0000111000001";
        ram[475] = "0b1111011110010";
        ram[476] = "0b0000011011111";
        ram[477] = "0b0000011101101";
        ram[478] = "0b1111110000110";
        ram[479] = "0b0001001110111";
        ram[480] = "0b0000000011010";
        ram[481] = "0b0000100011010";
        ram[482] = "0b0000011001011";
        ram[483] = "0b0000100000101";
        ram[484] = "0b1111111001101";
        ram[485] = "0b1111011011001";
        ram[486] = "0b0000001100000";
        ram[487] = "0b0000010000000";
        ram[488] = "0b1111100001100";
        ram[489] = "0b1111101010011";
        ram[490] = "0b1111111010001";
        ram[491] = "0b1111111100010";
        ram[492] = "0b1111111111001";
        ram[493] = "0b0000001111101";
        ram[494] = "0b0000000111111";
        ram[495] = "0b1111101101100";
        ram[496] = "0b1010101101001";
        ram[497] = "0b0000011101001";
        ram[498] = "0b1111001001001";
        ram[499] = "0b1111000111100";
        ram[500] = "0b1111101100011";
        ram[501] = "0b1111010011001";
        ram[502] = "0b0000001011100";
        ram[503] = "0b1111010110111";
        ram[504] = "0b0000100101001";
        ram[505] = "0b1111101001000";
        ram[506] = "0b0000001100000";
        ram[507] = "0b0000001010000";
        ram[508] = "0b1111100000100";
        ram[509] = "0b1111111110000";
        ram[510] = "0b1111011101101";
        ram[511] = "0b0000011110101";


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


SC_MODULE(mlp_monte_carlo_wg8j) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 512;
static const unsigned AddressWidth = 9;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


mlp_monte_carlo_wg8j_ram* meminst;


SC_CTOR(mlp_monte_carlo_wg8j) {
meminst = new mlp_monte_carlo_wg8j_ram("mlp_monte_carlo_wg8j_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~mlp_monte_carlo_wg8j() {
    delete meminst;
}


};//endmodule
#endif