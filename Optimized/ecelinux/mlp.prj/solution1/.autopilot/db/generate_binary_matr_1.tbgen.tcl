set moduleName generate_binary_matr_1
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
set C_modelName {generate_binary_matr.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ matrix_0 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_1 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_2 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_3 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_4 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_5 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_6 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_7 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_8 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_9 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_10 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_11 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_12 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_13 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_14 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_15 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_16 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_17 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_18 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_19 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_20 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_21 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_22 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_23 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_24 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_25 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_26 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_27 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_28 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_29 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_30 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ matrix_31 int 1 regular {array 100 { 0 3 } 0 1 }  }
	{ global_lfsr_seed_V int 16 regular {pointer 2} {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "matrix_0", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_1", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_2", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_3", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_4", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_5", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_6", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_7", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_8", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_9", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_10", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_11", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_12", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_13", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_14", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_15", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_16", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_17", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_18", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_19", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_20", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_21", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_22", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_23", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_24", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_25", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_26", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_27", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_28", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_29", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_30", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "matrix_31", "interface" : "memory", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "global_lfsr_seed_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "global_lfsr_seed.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 137
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ matrix_0_address0 sc_out sc_lv 7 signal 0 } 
	{ matrix_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ matrix_0_we0 sc_out sc_logic 1 signal 0 } 
	{ matrix_0_d0 sc_out sc_lv 1 signal 0 } 
	{ matrix_1_address0 sc_out sc_lv 7 signal 1 } 
	{ matrix_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ matrix_1_we0 sc_out sc_logic 1 signal 1 } 
	{ matrix_1_d0 sc_out sc_lv 1 signal 1 } 
	{ matrix_2_address0 sc_out sc_lv 7 signal 2 } 
	{ matrix_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ matrix_2_we0 sc_out sc_logic 1 signal 2 } 
	{ matrix_2_d0 sc_out sc_lv 1 signal 2 } 
	{ matrix_3_address0 sc_out sc_lv 7 signal 3 } 
	{ matrix_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ matrix_3_we0 sc_out sc_logic 1 signal 3 } 
	{ matrix_3_d0 sc_out sc_lv 1 signal 3 } 
	{ matrix_4_address0 sc_out sc_lv 7 signal 4 } 
	{ matrix_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ matrix_4_we0 sc_out sc_logic 1 signal 4 } 
	{ matrix_4_d0 sc_out sc_lv 1 signal 4 } 
	{ matrix_5_address0 sc_out sc_lv 7 signal 5 } 
	{ matrix_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ matrix_5_we0 sc_out sc_logic 1 signal 5 } 
	{ matrix_5_d0 sc_out sc_lv 1 signal 5 } 
	{ matrix_6_address0 sc_out sc_lv 7 signal 6 } 
	{ matrix_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ matrix_6_we0 sc_out sc_logic 1 signal 6 } 
	{ matrix_6_d0 sc_out sc_lv 1 signal 6 } 
	{ matrix_7_address0 sc_out sc_lv 7 signal 7 } 
	{ matrix_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ matrix_7_we0 sc_out sc_logic 1 signal 7 } 
	{ matrix_7_d0 sc_out sc_lv 1 signal 7 } 
	{ matrix_8_address0 sc_out sc_lv 7 signal 8 } 
	{ matrix_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ matrix_8_we0 sc_out sc_logic 1 signal 8 } 
	{ matrix_8_d0 sc_out sc_lv 1 signal 8 } 
	{ matrix_9_address0 sc_out sc_lv 7 signal 9 } 
	{ matrix_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ matrix_9_we0 sc_out sc_logic 1 signal 9 } 
	{ matrix_9_d0 sc_out sc_lv 1 signal 9 } 
	{ matrix_10_address0 sc_out sc_lv 7 signal 10 } 
	{ matrix_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ matrix_10_we0 sc_out sc_logic 1 signal 10 } 
	{ matrix_10_d0 sc_out sc_lv 1 signal 10 } 
	{ matrix_11_address0 sc_out sc_lv 7 signal 11 } 
	{ matrix_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ matrix_11_we0 sc_out sc_logic 1 signal 11 } 
	{ matrix_11_d0 sc_out sc_lv 1 signal 11 } 
	{ matrix_12_address0 sc_out sc_lv 7 signal 12 } 
	{ matrix_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ matrix_12_we0 sc_out sc_logic 1 signal 12 } 
	{ matrix_12_d0 sc_out sc_lv 1 signal 12 } 
	{ matrix_13_address0 sc_out sc_lv 7 signal 13 } 
	{ matrix_13_ce0 sc_out sc_logic 1 signal 13 } 
	{ matrix_13_we0 sc_out sc_logic 1 signal 13 } 
	{ matrix_13_d0 sc_out sc_lv 1 signal 13 } 
	{ matrix_14_address0 sc_out sc_lv 7 signal 14 } 
	{ matrix_14_ce0 sc_out sc_logic 1 signal 14 } 
	{ matrix_14_we0 sc_out sc_logic 1 signal 14 } 
	{ matrix_14_d0 sc_out sc_lv 1 signal 14 } 
	{ matrix_15_address0 sc_out sc_lv 7 signal 15 } 
	{ matrix_15_ce0 sc_out sc_logic 1 signal 15 } 
	{ matrix_15_we0 sc_out sc_logic 1 signal 15 } 
	{ matrix_15_d0 sc_out sc_lv 1 signal 15 } 
	{ matrix_16_address0 sc_out sc_lv 7 signal 16 } 
	{ matrix_16_ce0 sc_out sc_logic 1 signal 16 } 
	{ matrix_16_we0 sc_out sc_logic 1 signal 16 } 
	{ matrix_16_d0 sc_out sc_lv 1 signal 16 } 
	{ matrix_17_address0 sc_out sc_lv 7 signal 17 } 
	{ matrix_17_ce0 sc_out sc_logic 1 signal 17 } 
	{ matrix_17_we0 sc_out sc_logic 1 signal 17 } 
	{ matrix_17_d0 sc_out sc_lv 1 signal 17 } 
	{ matrix_18_address0 sc_out sc_lv 7 signal 18 } 
	{ matrix_18_ce0 sc_out sc_logic 1 signal 18 } 
	{ matrix_18_we0 sc_out sc_logic 1 signal 18 } 
	{ matrix_18_d0 sc_out sc_lv 1 signal 18 } 
	{ matrix_19_address0 sc_out sc_lv 7 signal 19 } 
	{ matrix_19_ce0 sc_out sc_logic 1 signal 19 } 
	{ matrix_19_we0 sc_out sc_logic 1 signal 19 } 
	{ matrix_19_d0 sc_out sc_lv 1 signal 19 } 
	{ matrix_20_address0 sc_out sc_lv 7 signal 20 } 
	{ matrix_20_ce0 sc_out sc_logic 1 signal 20 } 
	{ matrix_20_we0 sc_out sc_logic 1 signal 20 } 
	{ matrix_20_d0 sc_out sc_lv 1 signal 20 } 
	{ matrix_21_address0 sc_out sc_lv 7 signal 21 } 
	{ matrix_21_ce0 sc_out sc_logic 1 signal 21 } 
	{ matrix_21_we0 sc_out sc_logic 1 signal 21 } 
	{ matrix_21_d0 sc_out sc_lv 1 signal 21 } 
	{ matrix_22_address0 sc_out sc_lv 7 signal 22 } 
	{ matrix_22_ce0 sc_out sc_logic 1 signal 22 } 
	{ matrix_22_we0 sc_out sc_logic 1 signal 22 } 
	{ matrix_22_d0 sc_out sc_lv 1 signal 22 } 
	{ matrix_23_address0 sc_out sc_lv 7 signal 23 } 
	{ matrix_23_ce0 sc_out sc_logic 1 signal 23 } 
	{ matrix_23_we0 sc_out sc_logic 1 signal 23 } 
	{ matrix_23_d0 sc_out sc_lv 1 signal 23 } 
	{ matrix_24_address0 sc_out sc_lv 7 signal 24 } 
	{ matrix_24_ce0 sc_out sc_logic 1 signal 24 } 
	{ matrix_24_we0 sc_out sc_logic 1 signal 24 } 
	{ matrix_24_d0 sc_out sc_lv 1 signal 24 } 
	{ matrix_25_address0 sc_out sc_lv 7 signal 25 } 
	{ matrix_25_ce0 sc_out sc_logic 1 signal 25 } 
	{ matrix_25_we0 sc_out sc_logic 1 signal 25 } 
	{ matrix_25_d0 sc_out sc_lv 1 signal 25 } 
	{ matrix_26_address0 sc_out sc_lv 7 signal 26 } 
	{ matrix_26_ce0 sc_out sc_logic 1 signal 26 } 
	{ matrix_26_we0 sc_out sc_logic 1 signal 26 } 
	{ matrix_26_d0 sc_out sc_lv 1 signal 26 } 
	{ matrix_27_address0 sc_out sc_lv 7 signal 27 } 
	{ matrix_27_ce0 sc_out sc_logic 1 signal 27 } 
	{ matrix_27_we0 sc_out sc_logic 1 signal 27 } 
	{ matrix_27_d0 sc_out sc_lv 1 signal 27 } 
	{ matrix_28_address0 sc_out sc_lv 7 signal 28 } 
	{ matrix_28_ce0 sc_out sc_logic 1 signal 28 } 
	{ matrix_28_we0 sc_out sc_logic 1 signal 28 } 
	{ matrix_28_d0 sc_out sc_lv 1 signal 28 } 
	{ matrix_29_address0 sc_out sc_lv 7 signal 29 } 
	{ matrix_29_ce0 sc_out sc_logic 1 signal 29 } 
	{ matrix_29_we0 sc_out sc_logic 1 signal 29 } 
	{ matrix_29_d0 sc_out sc_lv 1 signal 29 } 
	{ matrix_30_address0 sc_out sc_lv 7 signal 30 } 
	{ matrix_30_ce0 sc_out sc_logic 1 signal 30 } 
	{ matrix_30_we0 sc_out sc_logic 1 signal 30 } 
	{ matrix_30_d0 sc_out sc_lv 1 signal 30 } 
	{ matrix_31_address0 sc_out sc_lv 7 signal 31 } 
	{ matrix_31_ce0 sc_out sc_logic 1 signal 31 } 
	{ matrix_31_we0 sc_out sc_logic 1 signal 31 } 
	{ matrix_31_d0 sc_out sc_lv 1 signal 31 } 
	{ global_lfsr_seed_V_i sc_in sc_lv 16 signal 32 } 
	{ global_lfsr_seed_V_o sc_out sc_lv 16 signal 32 } 
	{ global_lfsr_seed_V_o_ap_vld sc_out sc_logic 1 outvld 32 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "matrix_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_0", "role": "address0" }} , 
 	{ "name": "matrix_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_0", "role": "ce0" }} , 
 	{ "name": "matrix_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_0", "role": "we0" }} , 
 	{ "name": "matrix_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_0", "role": "d0" }} , 
 	{ "name": "matrix_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_1", "role": "address0" }} , 
 	{ "name": "matrix_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_1", "role": "ce0" }} , 
 	{ "name": "matrix_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_1", "role": "we0" }} , 
 	{ "name": "matrix_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_1", "role": "d0" }} , 
 	{ "name": "matrix_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_2", "role": "address0" }} , 
 	{ "name": "matrix_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_2", "role": "ce0" }} , 
 	{ "name": "matrix_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_2", "role": "we0" }} , 
 	{ "name": "matrix_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_2", "role": "d0" }} , 
 	{ "name": "matrix_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_3", "role": "address0" }} , 
 	{ "name": "matrix_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_3", "role": "ce0" }} , 
 	{ "name": "matrix_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_3", "role": "we0" }} , 
 	{ "name": "matrix_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_3", "role": "d0" }} , 
 	{ "name": "matrix_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_4", "role": "address0" }} , 
 	{ "name": "matrix_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_4", "role": "ce0" }} , 
 	{ "name": "matrix_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_4", "role": "we0" }} , 
 	{ "name": "matrix_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_4", "role": "d0" }} , 
 	{ "name": "matrix_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_5", "role": "address0" }} , 
 	{ "name": "matrix_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_5", "role": "ce0" }} , 
 	{ "name": "matrix_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_5", "role": "we0" }} , 
 	{ "name": "matrix_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_5", "role": "d0" }} , 
 	{ "name": "matrix_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_6", "role": "address0" }} , 
 	{ "name": "matrix_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_6", "role": "ce0" }} , 
 	{ "name": "matrix_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_6", "role": "we0" }} , 
 	{ "name": "matrix_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_6", "role": "d0" }} , 
 	{ "name": "matrix_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_7", "role": "address0" }} , 
 	{ "name": "matrix_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_7", "role": "ce0" }} , 
 	{ "name": "matrix_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_7", "role": "we0" }} , 
 	{ "name": "matrix_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_7", "role": "d0" }} , 
 	{ "name": "matrix_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_8", "role": "address0" }} , 
 	{ "name": "matrix_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_8", "role": "ce0" }} , 
 	{ "name": "matrix_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_8", "role": "we0" }} , 
 	{ "name": "matrix_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_8", "role": "d0" }} , 
 	{ "name": "matrix_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_9", "role": "address0" }} , 
 	{ "name": "matrix_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_9", "role": "ce0" }} , 
 	{ "name": "matrix_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_9", "role": "we0" }} , 
 	{ "name": "matrix_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_9", "role": "d0" }} , 
 	{ "name": "matrix_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_10", "role": "address0" }} , 
 	{ "name": "matrix_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_10", "role": "ce0" }} , 
 	{ "name": "matrix_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_10", "role": "we0" }} , 
 	{ "name": "matrix_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_10", "role": "d0" }} , 
 	{ "name": "matrix_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_11", "role": "address0" }} , 
 	{ "name": "matrix_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_11", "role": "ce0" }} , 
 	{ "name": "matrix_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_11", "role": "we0" }} , 
 	{ "name": "matrix_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_11", "role": "d0" }} , 
 	{ "name": "matrix_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_12", "role": "address0" }} , 
 	{ "name": "matrix_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_12", "role": "ce0" }} , 
 	{ "name": "matrix_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_12", "role": "we0" }} , 
 	{ "name": "matrix_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_12", "role": "d0" }} , 
 	{ "name": "matrix_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_13", "role": "address0" }} , 
 	{ "name": "matrix_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_13", "role": "ce0" }} , 
 	{ "name": "matrix_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_13", "role": "we0" }} , 
 	{ "name": "matrix_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_13", "role": "d0" }} , 
 	{ "name": "matrix_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_14", "role": "address0" }} , 
 	{ "name": "matrix_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_14", "role": "ce0" }} , 
 	{ "name": "matrix_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_14", "role": "we0" }} , 
 	{ "name": "matrix_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_14", "role": "d0" }} , 
 	{ "name": "matrix_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_15", "role": "address0" }} , 
 	{ "name": "matrix_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_15", "role": "ce0" }} , 
 	{ "name": "matrix_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_15", "role": "we0" }} , 
 	{ "name": "matrix_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_15", "role": "d0" }} , 
 	{ "name": "matrix_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_16", "role": "address0" }} , 
 	{ "name": "matrix_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_16", "role": "ce0" }} , 
 	{ "name": "matrix_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_16", "role": "we0" }} , 
 	{ "name": "matrix_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_16", "role": "d0" }} , 
 	{ "name": "matrix_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_17", "role": "address0" }} , 
 	{ "name": "matrix_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_17", "role": "ce0" }} , 
 	{ "name": "matrix_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_17", "role": "we0" }} , 
 	{ "name": "matrix_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_17", "role": "d0" }} , 
 	{ "name": "matrix_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_18", "role": "address0" }} , 
 	{ "name": "matrix_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_18", "role": "ce0" }} , 
 	{ "name": "matrix_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_18", "role": "we0" }} , 
 	{ "name": "matrix_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_18", "role": "d0" }} , 
 	{ "name": "matrix_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_19", "role": "address0" }} , 
 	{ "name": "matrix_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_19", "role": "ce0" }} , 
 	{ "name": "matrix_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_19", "role": "we0" }} , 
 	{ "name": "matrix_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_19", "role": "d0" }} , 
 	{ "name": "matrix_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_20", "role": "address0" }} , 
 	{ "name": "matrix_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_20", "role": "ce0" }} , 
 	{ "name": "matrix_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_20", "role": "we0" }} , 
 	{ "name": "matrix_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_20", "role": "d0" }} , 
 	{ "name": "matrix_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_21", "role": "address0" }} , 
 	{ "name": "matrix_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_21", "role": "ce0" }} , 
 	{ "name": "matrix_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_21", "role": "we0" }} , 
 	{ "name": "matrix_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_21", "role": "d0" }} , 
 	{ "name": "matrix_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_22", "role": "address0" }} , 
 	{ "name": "matrix_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_22", "role": "ce0" }} , 
 	{ "name": "matrix_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_22", "role": "we0" }} , 
 	{ "name": "matrix_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_22", "role": "d0" }} , 
 	{ "name": "matrix_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_23", "role": "address0" }} , 
 	{ "name": "matrix_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_23", "role": "ce0" }} , 
 	{ "name": "matrix_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_23", "role": "we0" }} , 
 	{ "name": "matrix_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_23", "role": "d0" }} , 
 	{ "name": "matrix_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_24", "role": "address0" }} , 
 	{ "name": "matrix_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_24", "role": "ce0" }} , 
 	{ "name": "matrix_24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_24", "role": "we0" }} , 
 	{ "name": "matrix_24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_24", "role": "d0" }} , 
 	{ "name": "matrix_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_25", "role": "address0" }} , 
 	{ "name": "matrix_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_25", "role": "ce0" }} , 
 	{ "name": "matrix_25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_25", "role": "we0" }} , 
 	{ "name": "matrix_25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_25", "role": "d0" }} , 
 	{ "name": "matrix_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_26", "role": "address0" }} , 
 	{ "name": "matrix_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_26", "role": "ce0" }} , 
 	{ "name": "matrix_26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_26", "role": "we0" }} , 
 	{ "name": "matrix_26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_26", "role": "d0" }} , 
 	{ "name": "matrix_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_27", "role": "address0" }} , 
 	{ "name": "matrix_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_27", "role": "ce0" }} , 
 	{ "name": "matrix_27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_27", "role": "we0" }} , 
 	{ "name": "matrix_27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_27", "role": "d0" }} , 
 	{ "name": "matrix_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_28", "role": "address0" }} , 
 	{ "name": "matrix_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_28", "role": "ce0" }} , 
 	{ "name": "matrix_28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_28", "role": "we0" }} , 
 	{ "name": "matrix_28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_28", "role": "d0" }} , 
 	{ "name": "matrix_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_29", "role": "address0" }} , 
 	{ "name": "matrix_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_29", "role": "ce0" }} , 
 	{ "name": "matrix_29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_29", "role": "we0" }} , 
 	{ "name": "matrix_29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_29", "role": "d0" }} , 
 	{ "name": "matrix_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_30", "role": "address0" }} , 
 	{ "name": "matrix_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_30", "role": "ce0" }} , 
 	{ "name": "matrix_30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_30", "role": "we0" }} , 
 	{ "name": "matrix_30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_30", "role": "d0" }} , 
 	{ "name": "matrix_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "matrix_31", "role": "address0" }} , 
 	{ "name": "matrix_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_31", "role": "ce0" }} , 
 	{ "name": "matrix_31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_31", "role": "we0" }} , 
 	{ "name": "matrix_31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_31", "role": "d0" }} , 
 	{ "name": "global_lfsr_seed_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "global_lfsr_seed_V", "role": "i" }} , 
 	{ "name": "global_lfsr_seed_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "global_lfsr_seed_V", "role": "o" }} , 
 	{ "name": "global_lfsr_seed_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "global_lfsr_seed_V", "role": "o_ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "generate_binary_matr_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1601", "EstimateLatencyMax" : "1601",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "matrix_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "global_lfsr_seed_V", "Type" : "OVld", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	generate_binary_matr_1 {
		matrix_0 {Type O LastRead -1 FirstWrite 1}
		matrix_1 {Type O LastRead -1 FirstWrite 1}
		matrix_2 {Type O LastRead -1 FirstWrite 2}
		matrix_3 {Type O LastRead -1 FirstWrite 2}
		matrix_4 {Type O LastRead -1 FirstWrite 3}
		matrix_5 {Type O LastRead -1 FirstWrite 3}
		matrix_6 {Type O LastRead -1 FirstWrite 4}
		matrix_7 {Type O LastRead -1 FirstWrite 4}
		matrix_8 {Type O LastRead -1 FirstWrite 5}
		matrix_9 {Type O LastRead -1 FirstWrite 5}
		matrix_10 {Type O LastRead -1 FirstWrite 6}
		matrix_11 {Type O LastRead -1 FirstWrite 6}
		matrix_12 {Type O LastRead -1 FirstWrite 7}
		matrix_13 {Type O LastRead -1 FirstWrite 7}
		matrix_14 {Type O LastRead -1 FirstWrite 8}
		matrix_15 {Type O LastRead -1 FirstWrite 8}
		matrix_16 {Type O LastRead -1 FirstWrite 9}
		matrix_17 {Type O LastRead -1 FirstWrite 9}
		matrix_18 {Type O LastRead -1 FirstWrite 10}
		matrix_19 {Type O LastRead -1 FirstWrite 10}
		matrix_20 {Type O LastRead -1 FirstWrite 11}
		matrix_21 {Type O LastRead -1 FirstWrite 11}
		matrix_22 {Type O LastRead -1 FirstWrite 12}
		matrix_23 {Type O LastRead -1 FirstWrite 12}
		matrix_24 {Type O LastRead -1 FirstWrite 13}
		matrix_25 {Type O LastRead -1 FirstWrite 13}
		matrix_26 {Type O LastRead -1 FirstWrite 14}
		matrix_27 {Type O LastRead -1 FirstWrite 14}
		matrix_28 {Type O LastRead -1 FirstWrite 15}
		matrix_29 {Type O LastRead -1 FirstWrite 15}
		matrix_30 {Type O LastRead -1 FirstWrite 16}
		matrix_31 {Type O LastRead -1 FirstWrite 16}
		global_lfsr_seed_V {Type IO LastRead 0 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1601", "Max" : "1601"}
	, {"Name" : "Interval", "Min" : "1601", "Max" : "1601"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	matrix_0 { ap_memory {  { matrix_0_address0 mem_address 1 7 }  { matrix_0_ce0 mem_ce 1 1 }  { matrix_0_we0 mem_we 1 1 }  { matrix_0_d0 mem_din 1 1 } } }
	matrix_1 { ap_memory {  { matrix_1_address0 mem_address 1 7 }  { matrix_1_ce0 mem_ce 1 1 }  { matrix_1_we0 mem_we 1 1 }  { matrix_1_d0 mem_din 1 1 } } }
	matrix_2 { ap_memory {  { matrix_2_address0 mem_address 1 7 }  { matrix_2_ce0 mem_ce 1 1 }  { matrix_2_we0 mem_we 1 1 }  { matrix_2_d0 mem_din 1 1 } } }
	matrix_3 { ap_memory {  { matrix_3_address0 mem_address 1 7 }  { matrix_3_ce0 mem_ce 1 1 }  { matrix_3_we0 mem_we 1 1 }  { matrix_3_d0 mem_din 1 1 } } }
	matrix_4 { ap_memory {  { matrix_4_address0 mem_address 1 7 }  { matrix_4_ce0 mem_ce 1 1 }  { matrix_4_we0 mem_we 1 1 }  { matrix_4_d0 mem_din 1 1 } } }
	matrix_5 { ap_memory {  { matrix_5_address0 mem_address 1 7 }  { matrix_5_ce0 mem_ce 1 1 }  { matrix_5_we0 mem_we 1 1 }  { matrix_5_d0 mem_din 1 1 } } }
	matrix_6 { ap_memory {  { matrix_6_address0 mem_address 1 7 }  { matrix_6_ce0 mem_ce 1 1 }  { matrix_6_we0 mem_we 1 1 }  { matrix_6_d0 mem_din 1 1 } } }
	matrix_7 { ap_memory {  { matrix_7_address0 mem_address 1 7 }  { matrix_7_ce0 mem_ce 1 1 }  { matrix_7_we0 mem_we 1 1 }  { matrix_7_d0 mem_din 1 1 } } }
	matrix_8 { ap_memory {  { matrix_8_address0 mem_address 1 7 }  { matrix_8_ce0 mem_ce 1 1 }  { matrix_8_we0 mem_we 1 1 }  { matrix_8_d0 mem_din 1 1 } } }
	matrix_9 { ap_memory {  { matrix_9_address0 mem_address 1 7 }  { matrix_9_ce0 mem_ce 1 1 }  { matrix_9_we0 mem_we 1 1 }  { matrix_9_d0 mem_din 1 1 } } }
	matrix_10 { ap_memory {  { matrix_10_address0 mem_address 1 7 }  { matrix_10_ce0 mem_ce 1 1 }  { matrix_10_we0 mem_we 1 1 }  { matrix_10_d0 mem_din 1 1 } } }
	matrix_11 { ap_memory {  { matrix_11_address0 mem_address 1 7 }  { matrix_11_ce0 mem_ce 1 1 }  { matrix_11_we0 mem_we 1 1 }  { matrix_11_d0 mem_din 1 1 } } }
	matrix_12 { ap_memory {  { matrix_12_address0 mem_address 1 7 }  { matrix_12_ce0 mem_ce 1 1 }  { matrix_12_we0 mem_we 1 1 }  { matrix_12_d0 mem_din 1 1 } } }
	matrix_13 { ap_memory {  { matrix_13_address0 mem_address 1 7 }  { matrix_13_ce0 mem_ce 1 1 }  { matrix_13_we0 mem_we 1 1 }  { matrix_13_d0 mem_din 1 1 } } }
	matrix_14 { ap_memory {  { matrix_14_address0 mem_address 1 7 }  { matrix_14_ce0 mem_ce 1 1 }  { matrix_14_we0 mem_we 1 1 }  { matrix_14_d0 mem_din 1 1 } } }
	matrix_15 { ap_memory {  { matrix_15_address0 mem_address 1 7 }  { matrix_15_ce0 mem_ce 1 1 }  { matrix_15_we0 mem_we 1 1 }  { matrix_15_d0 mem_din 1 1 } } }
	matrix_16 { ap_memory {  { matrix_16_address0 mem_address 1 7 }  { matrix_16_ce0 mem_ce 1 1 }  { matrix_16_we0 mem_we 1 1 }  { matrix_16_d0 mem_din 1 1 } } }
	matrix_17 { ap_memory {  { matrix_17_address0 mem_address 1 7 }  { matrix_17_ce0 mem_ce 1 1 }  { matrix_17_we0 mem_we 1 1 }  { matrix_17_d0 mem_din 1 1 } } }
	matrix_18 { ap_memory {  { matrix_18_address0 mem_address 1 7 }  { matrix_18_ce0 mem_ce 1 1 }  { matrix_18_we0 mem_we 1 1 }  { matrix_18_d0 mem_din 1 1 } } }
	matrix_19 { ap_memory {  { matrix_19_address0 mem_address 1 7 }  { matrix_19_ce0 mem_ce 1 1 }  { matrix_19_we0 mem_we 1 1 }  { matrix_19_d0 mem_din 1 1 } } }
	matrix_20 { ap_memory {  { matrix_20_address0 mem_address 1 7 }  { matrix_20_ce0 mem_ce 1 1 }  { matrix_20_we0 mem_we 1 1 }  { matrix_20_d0 mem_din 1 1 } } }
	matrix_21 { ap_memory {  { matrix_21_address0 mem_address 1 7 }  { matrix_21_ce0 mem_ce 1 1 }  { matrix_21_we0 mem_we 1 1 }  { matrix_21_d0 mem_din 1 1 } } }
	matrix_22 { ap_memory {  { matrix_22_address0 mem_address 1 7 }  { matrix_22_ce0 mem_ce 1 1 }  { matrix_22_we0 mem_we 1 1 }  { matrix_22_d0 mem_din 1 1 } } }
	matrix_23 { ap_memory {  { matrix_23_address0 mem_address 1 7 }  { matrix_23_ce0 mem_ce 1 1 }  { matrix_23_we0 mem_we 1 1 }  { matrix_23_d0 mem_din 1 1 } } }
	matrix_24 { ap_memory {  { matrix_24_address0 mem_address 1 7 }  { matrix_24_ce0 mem_ce 1 1 }  { matrix_24_we0 mem_we 1 1 }  { matrix_24_d0 mem_din 1 1 } } }
	matrix_25 { ap_memory {  { matrix_25_address0 mem_address 1 7 }  { matrix_25_ce0 mem_ce 1 1 }  { matrix_25_we0 mem_we 1 1 }  { matrix_25_d0 mem_din 1 1 } } }
	matrix_26 { ap_memory {  { matrix_26_address0 mem_address 1 7 }  { matrix_26_ce0 mem_ce 1 1 }  { matrix_26_we0 mem_we 1 1 }  { matrix_26_d0 mem_din 1 1 } } }
	matrix_27 { ap_memory {  { matrix_27_address0 mem_address 1 7 }  { matrix_27_ce0 mem_ce 1 1 }  { matrix_27_we0 mem_we 1 1 }  { matrix_27_d0 mem_din 1 1 } } }
	matrix_28 { ap_memory {  { matrix_28_address0 mem_address 1 7 }  { matrix_28_ce0 mem_ce 1 1 }  { matrix_28_we0 mem_we 1 1 }  { matrix_28_d0 mem_din 1 1 } } }
	matrix_29 { ap_memory {  { matrix_29_address0 mem_address 1 7 }  { matrix_29_ce0 mem_ce 1 1 }  { matrix_29_we0 mem_we 1 1 }  { matrix_29_d0 mem_din 1 1 } } }
	matrix_30 { ap_memory {  { matrix_30_address0 mem_address 1 7 }  { matrix_30_ce0 mem_ce 1 1 }  { matrix_30_we0 mem_we 1 1 }  { matrix_30_d0 mem_din 1 1 } } }
	matrix_31 { ap_memory {  { matrix_31_address0 mem_address 1 7 }  { matrix_31_ce0 mem_ce 1 1 }  { matrix_31_we0 mem_we 1 1 }  { matrix_31_d0 mem_din 1 1 } } }
	global_lfsr_seed_V { ap_ovld {  { global_lfsr_seed_V_i in_data 0 16 }  { global_lfsr_seed_V_o out_data 1 16 }  { global_lfsr_seed_V_o_ap_vld out_vld 1 1 } } }
}
