set moduleName dense_lay_16_16_s
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
set C_modelName {dense_lay<16, 16>}
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
	{ mask46 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask47 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask48 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask49 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask50 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask51 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask52 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask53 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask54 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask55 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask56 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask57 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask58 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask59 int 1 regular {array 100 { 1 3 } 1 1 }  }
	{ mask60 int 1 regular {array 100 { 1 3 } 1 1 }  }
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
 	{ "Name" : "mask46", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask47", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask48", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask49", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask50", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask51", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask52", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask53", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask54", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask55", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask56", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask57", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask58", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask59", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask60", "interface" : "memory", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "mask_offset", "interface" : "wire", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 432} ]}
# RTL Port declarations: 
set portNum 103
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
	{ output_0_V_read sc_in sc_lv 26 signal 16 } 
	{ output_1_V_read sc_in sc_lv 26 signal 17 } 
	{ output_2_V_read sc_in sc_lv 26 signal 18 } 
	{ output_3_V_read sc_in sc_lv 26 signal 19 } 
	{ output_4_V_read sc_in sc_lv 26 signal 20 } 
	{ output_5_V_read sc_in sc_lv 26 signal 21 } 
	{ output_6_V_read sc_in sc_lv 26 signal 22 } 
	{ output_7_V_read sc_in sc_lv 26 signal 23 } 
	{ output_8_V_read sc_in sc_lv 26 signal 24 } 
	{ output_9_V_read sc_in sc_lv 26 signal 25 } 
	{ output_10_V_read sc_in sc_lv 26 signal 26 } 
	{ output_11_V_read sc_in sc_lv 26 signal 27 } 
	{ output_12_V_read sc_in sc_lv 26 signal 28 } 
	{ output_13_V_read sc_in sc_lv 26 signal 29 } 
	{ output_14_V_read sc_in sc_lv 26 signal 30 } 
	{ output_15_V_read sc_in sc_lv 26 signal 31 } 
	{ mask_address0 sc_out sc_lv 7 signal 32 } 
	{ mask_ce0 sc_out sc_logic 1 signal 32 } 
	{ mask_q0 sc_in sc_lv 1 signal 32 } 
	{ mask46_address0 sc_out sc_lv 7 signal 33 } 
	{ mask46_ce0 sc_out sc_logic 1 signal 33 } 
	{ mask46_q0 sc_in sc_lv 1 signal 33 } 
	{ mask47_address0 sc_out sc_lv 7 signal 34 } 
	{ mask47_ce0 sc_out sc_logic 1 signal 34 } 
	{ mask47_q0 sc_in sc_lv 1 signal 34 } 
	{ mask48_address0 sc_out sc_lv 7 signal 35 } 
	{ mask48_ce0 sc_out sc_logic 1 signal 35 } 
	{ mask48_q0 sc_in sc_lv 1 signal 35 } 
	{ mask49_address0 sc_out sc_lv 7 signal 36 } 
	{ mask49_ce0 sc_out sc_logic 1 signal 36 } 
	{ mask49_q0 sc_in sc_lv 1 signal 36 } 
	{ mask50_address0 sc_out sc_lv 7 signal 37 } 
	{ mask50_ce0 sc_out sc_logic 1 signal 37 } 
	{ mask50_q0 sc_in sc_lv 1 signal 37 } 
	{ mask51_address0 sc_out sc_lv 7 signal 38 } 
	{ mask51_ce0 sc_out sc_logic 1 signal 38 } 
	{ mask51_q0 sc_in sc_lv 1 signal 38 } 
	{ mask52_address0 sc_out sc_lv 7 signal 39 } 
	{ mask52_ce0 sc_out sc_logic 1 signal 39 } 
	{ mask52_q0 sc_in sc_lv 1 signal 39 } 
	{ mask53_address0 sc_out sc_lv 7 signal 40 } 
	{ mask53_ce0 sc_out sc_logic 1 signal 40 } 
	{ mask53_q0 sc_in sc_lv 1 signal 40 } 
	{ mask54_address0 sc_out sc_lv 7 signal 41 } 
	{ mask54_ce0 sc_out sc_logic 1 signal 41 } 
	{ mask54_q0 sc_in sc_lv 1 signal 41 } 
	{ mask55_address0 sc_out sc_lv 7 signal 42 } 
	{ mask55_ce0 sc_out sc_logic 1 signal 42 } 
	{ mask55_q0 sc_in sc_lv 1 signal 42 } 
	{ mask56_address0 sc_out sc_lv 7 signal 43 } 
	{ mask56_ce0 sc_out sc_logic 1 signal 43 } 
	{ mask56_q0 sc_in sc_lv 1 signal 43 } 
	{ mask57_address0 sc_out sc_lv 7 signal 44 } 
	{ mask57_ce0 sc_out sc_logic 1 signal 44 } 
	{ mask57_q0 sc_in sc_lv 1 signal 44 } 
	{ mask58_address0 sc_out sc_lv 7 signal 45 } 
	{ mask58_ce0 sc_out sc_logic 1 signal 45 } 
	{ mask58_q0 sc_in sc_lv 1 signal 45 } 
	{ mask59_address0 sc_out sc_lv 7 signal 46 } 
	{ mask59_ce0 sc_out sc_logic 1 signal 46 } 
	{ mask59_q0 sc_in sc_lv 1 signal 46 } 
	{ mask60_address0 sc_out sc_lv 7 signal 47 } 
	{ mask60_ce0 sc_out sc_logic 1 signal 47 } 
	{ mask60_q0 sc_in sc_lv 1 signal 47 } 
	{ mask_offset sc_in sc_lv 7 signal 48 } 
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
 	{ "name": "mask46_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask46", "role": "address0" }} , 
 	{ "name": "mask46_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask46", "role": "ce0" }} , 
 	{ "name": "mask46_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask46", "role": "q0" }} , 
 	{ "name": "mask47_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask47", "role": "address0" }} , 
 	{ "name": "mask47_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask47", "role": "ce0" }} , 
 	{ "name": "mask47_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask47", "role": "q0" }} , 
 	{ "name": "mask48_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask48", "role": "address0" }} , 
 	{ "name": "mask48_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask48", "role": "ce0" }} , 
 	{ "name": "mask48_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask48", "role": "q0" }} , 
 	{ "name": "mask49_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask49", "role": "address0" }} , 
 	{ "name": "mask49_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask49", "role": "ce0" }} , 
 	{ "name": "mask49_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask49", "role": "q0" }} , 
 	{ "name": "mask50_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask50", "role": "address0" }} , 
 	{ "name": "mask50_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask50", "role": "ce0" }} , 
 	{ "name": "mask50_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask50", "role": "q0" }} , 
 	{ "name": "mask51_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask51", "role": "address0" }} , 
 	{ "name": "mask51_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask51", "role": "ce0" }} , 
 	{ "name": "mask51_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask51", "role": "q0" }} , 
 	{ "name": "mask52_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask52", "role": "address0" }} , 
 	{ "name": "mask52_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask52", "role": "ce0" }} , 
 	{ "name": "mask52_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask52", "role": "q0" }} , 
 	{ "name": "mask53_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask53", "role": "address0" }} , 
 	{ "name": "mask53_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask53", "role": "ce0" }} , 
 	{ "name": "mask53_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask53", "role": "q0" }} , 
 	{ "name": "mask54_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask54", "role": "address0" }} , 
 	{ "name": "mask54_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask54", "role": "ce0" }} , 
 	{ "name": "mask54_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask54", "role": "q0" }} , 
 	{ "name": "mask55_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask55", "role": "address0" }} , 
 	{ "name": "mask55_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask55", "role": "ce0" }} , 
 	{ "name": "mask55_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask55", "role": "q0" }} , 
 	{ "name": "mask56_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask56", "role": "address0" }} , 
 	{ "name": "mask56_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask56", "role": "ce0" }} , 
 	{ "name": "mask56_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask56", "role": "q0" }} , 
 	{ "name": "mask57_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask57", "role": "address0" }} , 
 	{ "name": "mask57_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask57", "role": "ce0" }} , 
 	{ "name": "mask57_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask57", "role": "q0" }} , 
 	{ "name": "mask58_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask58", "role": "address0" }} , 
 	{ "name": "mask58_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask58", "role": "ce0" }} , 
 	{ "name": "mask58_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask58", "role": "q0" }} , 
 	{ "name": "mask59_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask59", "role": "address0" }} , 
 	{ "name": "mask59_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask59", "role": "ce0" }} , 
 	{ "name": "mask59_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask59", "role": "q0" }} , 
 	{ "name": "mask60_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mask60", "role": "address0" }} , 
 	{ "name": "mask60_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mask60", "role": "ce0" }} , 
 	{ "name": "mask60_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mask60", "role": "q0" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18"],
		"CDFG" : "dense_lay_16_16_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "145", "EstimateLatencyMax" : "145",
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
			{"Name" : "mask46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V_15", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b4_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_7_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_8_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_9_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_10_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_11_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_12_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_13_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_14_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_15_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mux_164_1_1_1_U629", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	dense_lay_16_16_s {
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
		mask46 {Type I LastRead 1 FirstWrite -1}
		mask47 {Type I LastRead 1 FirstWrite -1}
		mask48 {Type I LastRead 1 FirstWrite -1}
		mask49 {Type I LastRead 1 FirstWrite -1}
		mask50 {Type I LastRead 1 FirstWrite -1}
		mask51 {Type I LastRead 1 FirstWrite -1}
		mask52 {Type I LastRead 1 FirstWrite -1}
		mask53 {Type I LastRead 1 FirstWrite -1}
		mask54 {Type I LastRead 1 FirstWrite -1}
		mask55 {Type I LastRead 1 FirstWrite -1}
		mask56 {Type I LastRead 1 FirstWrite -1}
		mask57 {Type I LastRead 1 FirstWrite -1}
		mask58 {Type I LastRead 1 FirstWrite -1}
		mask59 {Type I LastRead 1 FirstWrite -1}
		mask60 {Type I LastRead 1 FirstWrite -1}
		mask_offset {Type I LastRead 0 FirstWrite -1}
		b4_V {Type I LastRead -1 FirstWrite -1}
		w4_V_0 {Type I LastRead -1 FirstWrite -1}
		w4_V_1 {Type I LastRead -1 FirstWrite -1}
		w4_V_2 {Type I LastRead -1 FirstWrite -1}
		w4_V_3 {Type I LastRead -1 FirstWrite -1}
		w4_V_4 {Type I LastRead -1 FirstWrite -1}
		w4_V_5 {Type I LastRead -1 FirstWrite -1}
		w4_V_6 {Type I LastRead -1 FirstWrite -1}
		w4_V_7 {Type I LastRead -1 FirstWrite -1}
		w4_V_8 {Type I LastRead -1 FirstWrite -1}
		w4_V_9 {Type I LastRead -1 FirstWrite -1}
		w4_V_10 {Type I LastRead -1 FirstWrite -1}
		w4_V_11 {Type I LastRead -1 FirstWrite -1}
		w4_V_12 {Type I LastRead -1 FirstWrite -1}
		w4_V_13 {Type I LastRead -1 FirstWrite -1}
		w4_V_14 {Type I LastRead -1 FirstWrite -1}
		w4_V_15 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "145", "Max" : "145"}
	, {"Name" : "Interval", "Min" : "145", "Max" : "145"}
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
	mask46 { ap_memory {  { mask46_address0 mem_address 1 7 }  { mask46_ce0 mem_ce 1 1 }  { mask46_q0 mem_dout 0 1 } } }
	mask47 { ap_memory {  { mask47_address0 mem_address 1 7 }  { mask47_ce0 mem_ce 1 1 }  { mask47_q0 mem_dout 0 1 } } }
	mask48 { ap_memory {  { mask48_address0 mem_address 1 7 }  { mask48_ce0 mem_ce 1 1 }  { mask48_q0 mem_dout 0 1 } } }
	mask49 { ap_memory {  { mask49_address0 mem_address 1 7 }  { mask49_ce0 mem_ce 1 1 }  { mask49_q0 mem_dout 0 1 } } }
	mask50 { ap_memory {  { mask50_address0 mem_address 1 7 }  { mask50_ce0 mem_ce 1 1 }  { mask50_q0 mem_dout 0 1 } } }
	mask51 { ap_memory {  { mask51_address0 mem_address 1 7 }  { mask51_ce0 mem_ce 1 1 }  { mask51_q0 mem_dout 0 1 } } }
	mask52 { ap_memory {  { mask52_address0 mem_address 1 7 }  { mask52_ce0 mem_ce 1 1 }  { mask52_q0 mem_dout 0 1 } } }
	mask53 { ap_memory {  { mask53_address0 mem_address 1 7 }  { mask53_ce0 mem_ce 1 1 }  { mask53_q0 mem_dout 0 1 } } }
	mask54 { ap_memory {  { mask54_address0 mem_address 1 7 }  { mask54_ce0 mem_ce 1 1 }  { mask54_q0 mem_dout 0 1 } } }
	mask55 { ap_memory {  { mask55_address0 mem_address 1 7 }  { mask55_ce0 mem_ce 1 1 }  { mask55_q0 mem_dout 0 1 } } }
	mask56 { ap_memory {  { mask56_address0 mem_address 1 7 }  { mask56_ce0 mem_ce 1 1 }  { mask56_q0 mem_dout 0 1 } } }
	mask57 { ap_memory {  { mask57_address0 mem_address 1 7 }  { mask57_ce0 mem_ce 1 1 }  { mask57_q0 mem_dout 0 1 } } }
	mask58 { ap_memory {  { mask58_address0 mem_address 1 7 }  { mask58_ce0 mem_ce 1 1 }  { mask58_q0 mem_dout 0 1 } } }
	mask59 { ap_memory {  { mask59_address0 mem_address 1 7 }  { mask59_ce0 mem_ce 1 1 }  { mask59_q0 mem_dout 0 1 } } }
	mask60 { ap_memory {  { mask60_address0 mem_address 1 7 }  { mask60_ce0 mem_ce 1 1 }  { mask60_q0 mem_dout 0 1 } } }
	mask_offset { ap_none {  { mask_offset in_data 0 7 } } }
}
