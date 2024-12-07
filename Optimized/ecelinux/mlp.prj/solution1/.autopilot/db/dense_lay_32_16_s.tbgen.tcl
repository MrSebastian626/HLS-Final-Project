set moduleName dense_lay_32_16_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_lay<32, 16>}
set C_modelType { int 432 }
set C_modelArgList {
	{ input_0_V_read int 26 regular  }
	{ input_1_V_read int 26 regular  }
	{ input_2_V_read int 26 regular  }
	{ input_3_V_read int 26 regular  }
	{ input_4_V_read int 26 regular  }
	{ input_5_V_read int 26 regular  }
	{ input_6_V_read int 26 regular  }
	{ input_7_V_read int 26 regular  }
	{ input_8_V_read int 26 regular  }
	{ input_9_V_read int 26 regular  }
	{ input_10_V_read int 26 regular  }
	{ input_11_V_read int 26 regular  }
	{ input_12_V_read int 26 regular  }
	{ input_13_V_read int 26 regular  }
	{ input_14_V_read int 26 regular  }
	{ input_15_V_read int 26 regular  }
	{ input_16_V_read int 26 regular  }
	{ input_17_V_read int 26 regular  }
	{ input_18_V_read int 26 regular  }
	{ input_19_V_read int 26 regular  }
	{ input_20_V_read int 26 regular  }
	{ input_21_V_read int 26 regular  }
	{ input_22_V_read int 26 regular  }
	{ input_23_V_read int 26 regular  }
	{ input_24_V_read int 26 regular  }
	{ input_25_V_read int 26 regular  }
	{ input_26_V_read int 26 regular  }
	{ input_27_V_read int 26 regular  }
	{ input_28_V_read int 26 regular  }
	{ input_29_V_read int 26 regular  }
	{ input_30_V_read int 26 regular  }
	{ input_31_V_read int 26 regular  }
	{ output_0_V_read int 26 regular  }
	{ output_1_V_read int 26 regular  }
	{ output_2_V_read int 26 regular  }
	{ output_3_V_read int 26 regular  }
	{ output_4_V_read int 26 regular  }
	{ output_5_V_read int 26 regular  }
	{ output_6_V_read int 26 regular  }
	{ output_7_V_read int 26 regular  }
	{ output_8_V_read int 26 regular  }
	{ output_9_V_read int 26 regular  }
	{ output_10_V_read int 26 regular  }
	{ output_11_V_read int 26 regular  }
	{ output_12_V_read int 26 regular  }
	{ output_13_V_read int 26 regular  }
	{ output_14_V_read int 26 regular  }
	{ output_15_V_read int 26 regular  }
	{ mask int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask78 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask79 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask80 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask81 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask82 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask83 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask84 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask85 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask86 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask87 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask88 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask89 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask90 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask91 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask92 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask_offset int 7 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_3_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_4_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_5_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_6_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_7_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_8_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_9_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_10_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_11_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_12_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_13_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_14_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_15_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_16_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_17_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_18_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_19_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_20_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_21_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_22_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_23_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_24_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_25_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_26_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_27_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_28_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_29_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_30_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "input_31_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_0_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_1_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_2_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_3_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_4_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_5_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_6_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_7_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_8_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_9_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_10_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_11_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_12_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_13_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_14_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "output_15_V_read", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "mask", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask78", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask79", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask80", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask81", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask82", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask83", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask84", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask85", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask86", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask87", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask88", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask89", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask90", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask91", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask92", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask_offset", "interface" : "wire", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 432} ]}
# RTL Port declarations: 
set portNum 119
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_0_V_read sc_in sc_lv 26 signal 0 } 
	{ input_1_V_read sc_in sc_lv 26 signal 1 } 
	{ input_2_V_read sc_in sc_lv 26 signal 2 } 
	{ input_3_V_read sc_in sc_lv 26 signal 3 } 
	{ input_4_V_read sc_in sc_lv 26 signal 4 } 
	{ input_5_V_read sc_in sc_lv 26 signal 5 } 
	{ input_6_V_read sc_in sc_lv 26 signal 6 } 
	{ input_7_V_read sc_in sc_lv 26 signal 7 } 
	{ input_8_V_read sc_in sc_lv 26 signal 8 } 
	{ input_9_V_read sc_in sc_lv 26 signal 9 } 
	{ input_10_V_read sc_in sc_lv 26 signal 10 } 
	{ input_11_V_read sc_in sc_lv 26 signal 11 } 
	{ input_12_V_read sc_in sc_lv 26 signal 12 } 
	{ input_13_V_read sc_in sc_lv 26 signal 13 } 
	{ input_14_V_read sc_in sc_lv 26 signal 14 } 
	{ input_15_V_read sc_in sc_lv 26 signal 15 } 
	{ input_16_V_read sc_in sc_lv 26 signal 16 } 
	{ input_17_V_read sc_in sc_lv 26 signal 17 } 
	{ input_18_V_read sc_in sc_lv 26 signal 18 } 
	{ input_19_V_read sc_in sc_lv 26 signal 19 } 
	{ input_20_V_read sc_in sc_lv 26 signal 20 } 
	{ input_21_V_read sc_in sc_lv 26 signal 21 } 
	{ input_22_V_read sc_in sc_lv 26 signal 22 } 
	{ input_23_V_read sc_in sc_lv 26 signal 23 } 
	{ input_24_V_read sc_in sc_lv 26 signal 24 } 
	{ input_25_V_read sc_in sc_lv 26 signal 25 } 
	{ input_26_V_read sc_in sc_lv 26 signal 26 } 
	{ input_27_V_read sc_in sc_lv 26 signal 27 } 
	{ input_28_V_read sc_in sc_lv 26 signal 28 } 
	{ input_29_V_read sc_in sc_lv 26 signal 29 } 
	{ input_30_V_read sc_in sc_lv 26 signal 30 } 
	{ input_31_V_read sc_in sc_lv 26 signal 31 } 
	{ output_0_V_read sc_in sc_lv 26 signal 32 } 
	{ output_1_V_read sc_in sc_lv 26 signal 33 } 
	{ output_2_V_read sc_in sc_lv 26 signal 34 } 
	{ output_3_V_read sc_in sc_lv 26 signal 35 } 
	{ output_4_V_read sc_in sc_lv 26 signal 36 } 
	{ output_5_V_read sc_in sc_lv 26 signal 37 } 
	{ output_6_V_read sc_in sc_lv 26 signal 38 } 
	{ output_7_V_read sc_in sc_lv 26 signal 39 } 
	{ output_8_V_read sc_in sc_lv 26 signal 40 } 
	{ output_9_V_read sc_in sc_lv 26 signal 41 } 
	{ output_10_V_read sc_in sc_lv 26 signal 42 } 
	{ output_11_V_read sc_in sc_lv 26 signal 43 } 
	{ output_12_V_read sc_in sc_lv 26 signal 44 } 
	{ output_13_V_read sc_in sc_lv 26 signal 45 } 
	{ output_14_V_read sc_in sc_lv 26 signal 46 } 
	{ output_15_V_read sc_in sc_lv 26 signal 47 } 
	{ mask_address0 sc_out sc_lv 7 signal 48 } 
	{ mask_ce0 sc_out sc_logic 1 signal 48 } 
	{ mask_q0 sc_in sc_lv 1 signal 48 } 
	{ mask78_address0 sc_out sc_lv 7 signal 49 } 
	{ mask78_ce0 sc_out sc_logic 1 signal 49 } 
	{ mask78_q0 sc_in sc_lv 1 signal 49 } 
	{ mask79_address0 sc_out sc_lv 7 signal 50 } 
	{ mask79_ce0 sc_out sc_logic 1 signal 50 } 
	{ mask79_q0 sc_in sc_lv 1 signal 50 } 
	{ mask80_address0 sc_out sc_lv 7 signal 51 } 
	{ mask80_ce0 sc_out sc_logic 1 signal 51 } 
	{ mask80_q0 sc_in sc_lv 1 signal 51 } 
	{ mask81_address0 sc_out sc_lv 7 signal 52 } 
	{ mask81_ce0 sc_out sc_logic 1 signal 52 } 
	{ mask81_q0 sc_in sc_lv 1 signal 52 } 
	{ mask82_address0 sc_out sc_lv 7 signal 53 } 
	{ mask82_ce0 sc_out sc_logic 1 signal 53 } 
	{ mask82_q0 sc_in sc_lv 1 signal 53 } 
	{ mask83_address0 sc_out sc_lv 7 signal 54 } 
	{ mask83_ce0 sc_out sc_logic 1 signal 54 } 
	{ mask83_q0 sc_in sc_lv 1 signal 54 } 
	{ mask84_address0 sc_out sc_lv 7 signal 55 } 
	{ mask84_ce0 sc_out sc_logic 1 signal 55 } 
	{ mask84_q0 sc_in sc_lv 1 signal 55 } 
	{ mask85_address0 sc_out sc_lv 7 signal 56 } 
	{ mask85_ce0 sc_out sc_logic 1 signal 56 } 
	{ mask85_q0 sc_in sc_lv 1 signal 56 } 
	{ mask86_address0 sc_out sc_lv 7 signal 57 } 
	{ mask86_ce0 sc_out sc_logic 1 signal 57 } 
	{ mask86_q0 sc_in sc_lv 1 signal 57 } 
	{ mask87_address0 sc_out sc_lv 7 signal 58 } 
	{ mask87_ce0 sc_out sc_logic 1 signal 58 } 
	{ mask87_q0 sc_in sc_lv 1 signal 58 } 
	{ mask88_address0 sc_out sc_lv 7 signal 59 } 
	{ mask88_ce0 sc_out sc_logic 1 signal 59 } 
	{ mask88_q0 sc_in sc_lv 1 signal 59 } 
	{ mask89_address0 sc_out sc_lv 7 signal 60 } 
	{ mask89_ce0 sc_out sc_logic 1 signal 60 } 
	{ mask89_q0 sc_in sc_lv 1 signal 60 } 
	{ mask90_address0 sc_out sc_lv 7 signal 61 } 
	{ mask90_ce0 sc_out sc_logic 1 signal 61 } 
	{ mask90_q0 sc_in sc_lv 1 signal 61 } 
	{ mask91_address0 sc_out sc_lv 7 signal 62 } 
	{ mask91_ce0 sc_out sc_logic 1 signal 62 } 
	{ mask91_q0 sc_in sc_lv 1 signal 62 } 
	{ mask92_address0 sc_out sc_lv 7 signal 63 } 
	{ mask92_ce0 sc_out sc_logic 1 signal 63 } 
	{ mask92_q0 sc_in sc_lv 1 signal 63 } 
	{ mask_offset sc_in sc_lv 7 signal 64 } 
	{ ap_return_0 sc_out sc_lv 27 signal -1 } 
	{ ap_return_1 sc_out sc_lv 27 signal -1 } 
	{ ap_return_2 sc_out sc_lv 27 signal -1 } 
	{ ap_return_3 sc_out sc_lv 27 signal -1 } 
	{ ap_return_4 sc_out sc_lv 27 signal -1 } 
	{ ap_return_5 sc_out sc_lv 27 signal -1 } 
	{ ap_return_6 sc_out sc_lv 27 signal -1 } 
	{ ap_return_7 sc_out sc_lv 27 signal -1 } 
	{ ap_return_8 sc_out sc_lv 27 signal -1 } 
	{ ap_return_9 sc_out sc_lv 27 signal -1 } 
	{ ap_return_10 sc_out sc_lv 27 signal -1 } 
	{ ap_return_11 sc_out sc_lv 27 signal -1 } 
	{ ap_return_12 sc_out sc_lv 27 signal -1 } 
	{ ap_return_13 sc_out sc_lv 27 signal -1 } 
	{ ap_return_14 sc_out sc_lv 27 signal -1 } 
	{ ap_return_15 sc_out sc_lv 27 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_0_V_read", "role": "default" }} , 
 	{ "name": "input_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_1_V_read", "role": "default" }} , 
 	{ "name": "input_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_2_V_read", "role": "default" }} , 
 	{ "name": "input_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_3_V_read", "role": "default" }} , 
 	{ "name": "input_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_4_V_read", "role": "default" }} , 
 	{ "name": "input_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_5_V_read", "role": "default" }} , 
 	{ "name": "input_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_6_V_read", "role": "default" }} , 
 	{ "name": "input_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_7_V_read", "role": "default" }} , 
 	{ "name": "input_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_8_V_read", "role": "default" }} , 
 	{ "name": "input_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_9_V_read", "role": "default" }} , 
 	{ "name": "input_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_10_V_read", "role": "default" }} , 
 	{ "name": "input_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_11_V_read", "role": "default" }} , 
 	{ "name": "input_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_12_V_read", "role": "default" }} , 
 	{ "name": "input_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_13_V_read", "role": "default" }} , 
 	{ "name": "input_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_14_V_read", "role": "default" }} , 
 	{ "name": "input_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_15_V_read", "role": "default" }} , 
 	{ "name": "input_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_16_V_read", "role": "default" }} , 
 	{ "name": "input_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_17_V_read", "role": "default" }} , 
 	{ "name": "input_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_18_V_read", "role": "default" }} , 
 	{ "name": "input_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_19_V_read", "role": "default" }} , 
 	{ "name": "input_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_20_V_read", "role": "default" }} , 
 	{ "name": "input_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_21_V_read", "role": "default" }} , 
 	{ "name": "input_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_22_V_read", "role": "default" }} , 
 	{ "name": "input_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_23_V_read", "role": "default" }} , 
 	{ "name": "input_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_24_V_read", "role": "default" }} , 
 	{ "name": "input_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_25_V_read", "role": "default" }} , 
 	{ "name": "input_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_26_V_read", "role": "default" }} , 
 	{ "name": "input_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_27_V_read", "role": "default" }} , 
 	{ "name": "input_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_28_V_read", "role": "default" }} , 
 	{ "name": "input_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_29_V_read", "role": "default" }} , 
 	{ "name": "input_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_30_V_read", "role": "default" }} , 
 	{ "name": "input_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "input_31_V_read", "role": "default" }} , 
 	{ "name": "output_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_0_V_read", "role": "default" }} , 
 	{ "name": "output_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_1_V_read", "role": "default" }} , 
 	{ "name": "output_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_2_V_read", "role": "default" }} , 
 	{ "name": "output_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_3_V_read", "role": "default" }} , 
 	{ "name": "output_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_4_V_read", "role": "default" }} , 
 	{ "name": "output_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_5_V_read", "role": "default" }} , 
 	{ "name": "output_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_6_V_read", "role": "default" }} , 
 	{ "name": "output_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_7_V_read", "role": "default" }} , 
 	{ "name": "output_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_8_V_read", "role": "default" }} , 
 	{ "name": "output_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_9_V_read", "role": "default" }} , 
 	{ "name": "output_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_10_V_read", "role": "default" }} , 
 	{ "name": "output_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_11_V_read", "role": "default" }} , 
 	{ "name": "output_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_12_V_read", "role": "default" }} , 
 	{ "name": "output_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_13_V_read", "role": "default" }} , 
 	{ "name": "output_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_14_V_read", "role": "default" }} , 
 	{ "name": "output_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "output_15_V_read", "role": "default" }} , 
 	{ "name": "mask_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask", "role": "address0" }} , 
 	{ "name": "mask_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask", "role": "ce0" }} , 
 	{ "name": "mask_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask", "role": "q0" }} , 
 	{ "name": "mask78_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask78", "role": "address0" }} , 
 	{ "name": "mask78_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask78", "role": "ce0" }} , 
 	{ "name": "mask78_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask78", "role": "q0" }} , 
 	{ "name": "mask79_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask79", "role": "address0" }} , 
 	{ "name": "mask79_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask79", "role": "ce0" }} , 
 	{ "name": "mask79_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask79", "role": "q0" }} , 
 	{ "name": "mask80_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask80", "role": "address0" }} , 
 	{ "name": "mask80_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask80", "role": "ce0" }} , 
 	{ "name": "mask80_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask80", "role": "q0" }} , 
 	{ "name": "mask81_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask81", "role": "address0" }} , 
 	{ "name": "mask81_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask81", "role": "ce0" }} , 
 	{ "name": "mask81_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask81", "role": "q0" }} , 
 	{ "name": "mask82_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask82", "role": "address0" }} , 
 	{ "name": "mask82_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask82", "role": "ce0" }} , 
 	{ "name": "mask82_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask82", "role": "q0" }} , 
 	{ "name": "mask83_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask83", "role": "address0" }} , 
 	{ "name": "mask83_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask83", "role": "ce0" }} , 
 	{ "name": "mask83_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask83", "role": "q0" }} , 
 	{ "name": "mask84_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask84", "role": "address0" }} , 
 	{ "name": "mask84_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask84", "role": "ce0" }} , 
 	{ "name": "mask84_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask84", "role": "q0" }} , 
 	{ "name": "mask85_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask85", "role": "address0" }} , 
 	{ "name": "mask85_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask85", "role": "ce0" }} , 
 	{ "name": "mask85_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask85", "role": "q0" }} , 
 	{ "name": "mask86_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask86", "role": "address0" }} , 
 	{ "name": "mask86_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask86", "role": "ce0" }} , 
 	{ "name": "mask86_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask86", "role": "q0" }} , 
 	{ "name": "mask87_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask87", "role": "address0" }} , 
 	{ "name": "mask87_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask87", "role": "ce0" }} , 
 	{ "name": "mask87_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask87", "role": "q0" }} , 
 	{ "name": "mask88_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask88", "role": "address0" }} , 
 	{ "name": "mask88_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask88", "role": "ce0" }} , 
 	{ "name": "mask88_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask88", "role": "q0" }} , 
 	{ "name": "mask89_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask89", "role": "address0" }} , 
 	{ "name": "mask89_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask89", "role": "ce0" }} , 
 	{ "name": "mask89_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask89", "role": "q0" }} , 
 	{ "name": "mask90_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask90", "role": "address0" }} , 
 	{ "name": "mask90_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask90", "role": "ce0" }} , 
 	{ "name": "mask90_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask90", "role": "q0" }} , 
 	{ "name": "mask91_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask91", "role": "address0" }} , 
 	{ "name": "mask91_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask91", "role": "ce0" }} , 
 	{ "name": "mask91_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask91", "role": "q0" }} , 
 	{ "name": "mask92_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask92", "role": "address0" }} , 
 	{ "name": "mask92_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask92", "role": "ce0" }} , 
 	{ "name": "mask92_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask92", "role": "q0" }} , 
 	{ "name": "mask_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask_offset", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34"],
		"CDFG" : "dense_lay_32_16_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "225", "EstimateLatencyMax" : "225",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b3_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_7_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_8_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_9_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_10_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_11_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_12_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_13_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_14_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_15_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_16_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_17_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_18_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_19_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_20_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_21_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_22_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_23_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_24_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_25_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_26_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_27_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_28_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_29_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_30_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_31_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mux_164_1_1_1_U529", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	dense_lay_32_16_s {
		input_0_V_read {Type I LastRead 0 FirstWrite -1}
		input_1_V_read {Type I LastRead 0 FirstWrite -1}
		input_2_V_read {Type I LastRead 0 FirstWrite -1}
		input_3_V_read {Type I LastRead 0 FirstWrite -1}
		input_4_V_read {Type I LastRead 0 FirstWrite -1}
		input_5_V_read {Type I LastRead 0 FirstWrite -1}
		input_6_V_read {Type I LastRead 0 FirstWrite -1}
		input_7_V_read {Type I LastRead 0 FirstWrite -1}
		input_8_V_read {Type I LastRead 0 FirstWrite -1}
		input_9_V_read {Type I LastRead 0 FirstWrite -1}
		input_10_V_read {Type I LastRead 0 FirstWrite -1}
		input_11_V_read {Type I LastRead 0 FirstWrite -1}
		input_12_V_read {Type I LastRead 0 FirstWrite -1}
		input_13_V_read {Type I LastRead 0 FirstWrite -1}
		input_14_V_read {Type I LastRead 0 FirstWrite -1}
		input_15_V_read {Type I LastRead 0 FirstWrite -1}
		input_16_V_read {Type I LastRead 0 FirstWrite -1}
		input_17_V_read {Type I LastRead 0 FirstWrite -1}
		input_18_V_read {Type I LastRead 0 FirstWrite -1}
		input_19_V_read {Type I LastRead 0 FirstWrite -1}
		input_20_V_read {Type I LastRead 0 FirstWrite -1}
		input_21_V_read {Type I LastRead 0 FirstWrite -1}
		input_22_V_read {Type I LastRead 0 FirstWrite -1}
		input_23_V_read {Type I LastRead 0 FirstWrite -1}
		input_24_V_read {Type I LastRead 0 FirstWrite -1}
		input_25_V_read {Type I LastRead 0 FirstWrite -1}
		input_26_V_read {Type I LastRead 0 FirstWrite -1}
		input_27_V_read {Type I LastRead 0 FirstWrite -1}
		input_28_V_read {Type I LastRead 0 FirstWrite -1}
		input_29_V_read {Type I LastRead 0 FirstWrite -1}
		input_30_V_read {Type I LastRead 0 FirstWrite -1}
		input_31_V_read {Type I LastRead 0 FirstWrite -1}
		output_0_V_read {Type I LastRead 0 FirstWrite -1}
		output_1_V_read {Type I LastRead 0 FirstWrite -1}
		output_2_V_read {Type I LastRead 0 FirstWrite -1}
		output_3_V_read {Type I LastRead 0 FirstWrite -1}
		output_4_V_read {Type I LastRead 0 FirstWrite -1}
		output_5_V_read {Type I LastRead 0 FirstWrite -1}
		output_6_V_read {Type I LastRead 0 FirstWrite -1}
		output_7_V_read {Type I LastRead 0 FirstWrite -1}
		output_8_V_read {Type I LastRead 0 FirstWrite -1}
		output_9_V_read {Type I LastRead 0 FirstWrite -1}
		output_10_V_read {Type I LastRead 0 FirstWrite -1}
		output_11_V_read {Type I LastRead 0 FirstWrite -1}
		output_12_V_read {Type I LastRead 0 FirstWrite -1}
		output_13_V_read {Type I LastRead 0 FirstWrite -1}
		output_14_V_read {Type I LastRead 0 FirstWrite -1}
		output_15_V_read {Type I LastRead 0 FirstWrite -1}
		mask {Type I LastRead 1 FirstWrite -1}
		mask78 {Type I LastRead 1 FirstWrite -1}
		mask79 {Type I LastRead 1 FirstWrite -1}
		mask80 {Type I LastRead 1 FirstWrite -1}
		mask81 {Type I LastRead 1 FirstWrite -1}
		mask82 {Type I LastRead 1 FirstWrite -1}
		mask83 {Type I LastRead 1 FirstWrite -1}
		mask84 {Type I LastRead 1 FirstWrite -1}
		mask85 {Type I LastRead 1 FirstWrite -1}
		mask86 {Type I LastRead 1 FirstWrite -1}
		mask87 {Type I LastRead 1 FirstWrite -1}
		mask88 {Type I LastRead 1 FirstWrite -1}
		mask89 {Type I LastRead 1 FirstWrite -1}
		mask90 {Type I LastRead 1 FirstWrite -1}
		mask91 {Type I LastRead 1 FirstWrite -1}
		mask92 {Type I LastRead 1 FirstWrite -1}
		mask_offset {Type I LastRead 0 FirstWrite -1}
		b3_V {Type I LastRead -1 FirstWrite -1}
		w3_V_0 {Type I LastRead -1 FirstWrite -1}
		w3_V_1 {Type I LastRead -1 FirstWrite -1}
		w3_V_2 {Type I LastRead -1 FirstWrite -1}
		w3_V_3 {Type I LastRead -1 FirstWrite -1}
		w3_V_4 {Type I LastRead -1 FirstWrite -1}
		w3_V_5 {Type I LastRead -1 FirstWrite -1}
		w3_V_6 {Type I LastRead -1 FirstWrite -1}
		w3_V_7 {Type I LastRead -1 FirstWrite -1}
		w3_V_8 {Type I LastRead -1 FirstWrite -1}
		w3_V_9 {Type I LastRead -1 FirstWrite -1}
		w3_V_10 {Type I LastRead -1 FirstWrite -1}
		w3_V_11 {Type I LastRead -1 FirstWrite -1}
		w3_V_12 {Type I LastRead -1 FirstWrite -1}
		w3_V_13 {Type I LastRead -1 FirstWrite -1}
		w3_V_14 {Type I LastRead -1 FirstWrite -1}
		w3_V_15 {Type I LastRead -1 FirstWrite -1}
		w3_V_16 {Type I LastRead -1 FirstWrite -1}
		w3_V_17 {Type I LastRead -1 FirstWrite -1}
		w3_V_18 {Type I LastRead -1 FirstWrite -1}
		w3_V_19 {Type I LastRead -1 FirstWrite -1}
		w3_V_20 {Type I LastRead -1 FirstWrite -1}
		w3_V_21 {Type I LastRead -1 FirstWrite -1}
		w3_V_22 {Type I LastRead -1 FirstWrite -1}
		w3_V_23 {Type I LastRead -1 FirstWrite -1}
		w3_V_24 {Type I LastRead -1 FirstWrite -1}
		w3_V_25 {Type I LastRead -1 FirstWrite -1}
		w3_V_26 {Type I LastRead -1 FirstWrite -1}
		w3_V_27 {Type I LastRead -1 FirstWrite -1}
		w3_V_28 {Type I LastRead -1 FirstWrite -1}
		w3_V_29 {Type I LastRead -1 FirstWrite -1}
		w3_V_30 {Type I LastRead -1 FirstWrite -1}
		w3_V_31 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "225", "Max" : "225"}
	, {"Name" : "Interval", "Min" : "225", "Max" : "225"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_0_V_read { ap_none {  { input_0_V_read in_data 0 26 } } }
	input_1_V_read { ap_none {  { input_1_V_read in_data 0 26 } } }
	input_2_V_read { ap_none {  { input_2_V_read in_data 0 26 } } }
	input_3_V_read { ap_none {  { input_3_V_read in_data 0 26 } } }
	input_4_V_read { ap_none {  { input_4_V_read in_data 0 26 } } }
	input_5_V_read { ap_none {  { input_5_V_read in_data 0 26 } } }
	input_6_V_read { ap_none {  { input_6_V_read in_data 0 26 } } }
	input_7_V_read { ap_none {  { input_7_V_read in_data 0 26 } } }
	input_8_V_read { ap_none {  { input_8_V_read in_data 0 26 } } }
	input_9_V_read { ap_none {  { input_9_V_read in_data 0 26 } } }
	input_10_V_read { ap_none {  { input_10_V_read in_data 0 26 } } }
	input_11_V_read { ap_none {  { input_11_V_read in_data 0 26 } } }
	input_12_V_read { ap_none {  { input_12_V_read in_data 0 26 } } }
	input_13_V_read { ap_none {  { input_13_V_read in_data 0 26 } } }
	input_14_V_read { ap_none {  { input_14_V_read in_data 0 26 } } }
	input_15_V_read { ap_none {  { input_15_V_read in_data 0 26 } } }
	input_16_V_read { ap_none {  { input_16_V_read in_data 0 26 } } }
	input_17_V_read { ap_none {  { input_17_V_read in_data 0 26 } } }
	input_18_V_read { ap_none {  { input_18_V_read in_data 0 26 } } }
	input_19_V_read { ap_none {  { input_19_V_read in_data 0 26 } } }
	input_20_V_read { ap_none {  { input_20_V_read in_data 0 26 } } }
	input_21_V_read { ap_none {  { input_21_V_read in_data 0 26 } } }
	input_22_V_read { ap_none {  { input_22_V_read in_data 0 26 } } }
	input_23_V_read { ap_none {  { input_23_V_read in_data 0 26 } } }
	input_24_V_read { ap_none {  { input_24_V_read in_data 0 26 } } }
	input_25_V_read { ap_none {  { input_25_V_read in_data 0 26 } } }
	input_26_V_read { ap_none {  { input_26_V_read in_data 0 26 } } }
	input_27_V_read { ap_none {  { input_27_V_read in_data 0 26 } } }
	input_28_V_read { ap_none {  { input_28_V_read in_data 0 26 } } }
	input_29_V_read { ap_none {  { input_29_V_read in_data 0 26 } } }
	input_30_V_read { ap_none {  { input_30_V_read in_data 0 26 } } }
	input_31_V_read { ap_none {  { input_31_V_read in_data 0 26 } } }
	output_0_V_read { ap_none {  { output_0_V_read in_data 0 26 } } }
	output_1_V_read { ap_none {  { output_1_V_read in_data 0 26 } } }
	output_2_V_read { ap_none {  { output_2_V_read in_data 0 26 } } }
	output_3_V_read { ap_none {  { output_3_V_read in_data 0 26 } } }
	output_4_V_read { ap_none {  { output_4_V_read in_data 0 26 } } }
	output_5_V_read { ap_none {  { output_5_V_read in_data 0 26 } } }
	output_6_V_read { ap_none {  { output_6_V_read in_data 0 26 } } }
	output_7_V_read { ap_none {  { output_7_V_read in_data 0 26 } } }
	output_8_V_read { ap_none {  { output_8_V_read in_data 0 26 } } }
	output_9_V_read { ap_none {  { output_9_V_read in_data 0 26 } } }
	output_10_V_read { ap_none {  { output_10_V_read in_data 0 26 } } }
	output_11_V_read { ap_none {  { output_11_V_read in_data 0 26 } } }
	output_12_V_read { ap_none {  { output_12_V_read in_data 0 26 } } }
	output_13_V_read { ap_none {  { output_13_V_read in_data 0 26 } } }
	output_14_V_read { ap_none {  { output_14_V_read in_data 0 26 } } }
	output_15_V_read { ap_none {  { output_15_V_read in_data 0 26 } } }
	mask { ap_memory {  { mask_address0 mem_address 1 7 }  { mask_ce0 mem_ce 1 1 }  { mask_q0 mem_dout 0 1 } } }
	mask78 { ap_memory {  { mask78_address0 mem_address 1 7 }  { mask78_ce0 mem_ce 1 1 }  { mask78_q0 mem_dout 0 1 } } }
	mask79 { ap_memory {  { mask79_address0 mem_address 1 7 }  { mask79_ce0 mem_ce 1 1 }  { mask79_q0 mem_dout 0 1 } } }
	mask80 { ap_memory {  { mask80_address0 mem_address 1 7 }  { mask80_ce0 mem_ce 1 1 }  { mask80_q0 mem_dout 0 1 } } }
	mask81 { ap_memory {  { mask81_address0 mem_address 1 7 }  { mask81_ce0 mem_ce 1 1 }  { mask81_q0 mem_dout 0 1 } } }
	mask82 { ap_memory {  { mask82_address0 mem_address 1 7 }  { mask82_ce0 mem_ce 1 1 }  { mask82_q0 mem_dout 0 1 } } }
	mask83 { ap_memory {  { mask83_address0 mem_address 1 7 }  { mask83_ce0 mem_ce 1 1 }  { mask83_q0 mem_dout 0 1 } } }
	mask84 { ap_memory {  { mask84_address0 mem_address 1 7 }  { mask84_ce0 mem_ce 1 1 }  { mask84_q0 mem_dout 0 1 } } }
	mask85 { ap_memory {  { mask85_address0 mem_address 1 7 }  { mask85_ce0 mem_ce 1 1 }  { mask85_q0 mem_dout 0 1 } } }
	mask86 { ap_memory {  { mask86_address0 mem_address 1 7 }  { mask86_ce0 mem_ce 1 1 }  { mask86_q0 mem_dout 0 1 } } }
	mask87 { ap_memory {  { mask87_address0 mem_address 1 7 }  { mask87_ce0 mem_ce 1 1 }  { mask87_q0 mem_dout 0 1 } } }
	mask88 { ap_memory {  { mask88_address0 mem_address 1 7 }  { mask88_ce0 mem_ce 1 1 }  { mask88_q0 mem_dout 0 1 } } }
	mask89 { ap_memory {  { mask89_address0 mem_address 1 7 }  { mask89_ce0 mem_ce 1 1 }  { mask89_q0 mem_dout 0 1 } } }
	mask90 { ap_memory {  { mask90_address0 mem_address 1 7 }  { mask90_ce0 mem_ce 1 1 }  { mask90_q0 mem_dout 0 1 } } }
	mask91 { ap_memory {  { mask91_address0 mem_address 1 7 }  { mask91_ce0 mem_ce 1 1 }  { mask91_q0 mem_dout 0 1 } } }
	mask92 { ap_memory {  { mask92_address0 mem_address 1 7 }  { mask92_ce0 mem_ce 1 1 }  { mask92_q0 mem_dout 0 1 } } }
	mask_offset { ap_none {  { mask_offset in_data 0 7 } } }
}
