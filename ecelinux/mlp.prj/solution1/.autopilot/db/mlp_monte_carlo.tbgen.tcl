set moduleName mlp_monte_carlo
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
set C_modelName {mlp_monte_carlo}
set C_modelType { int 32 }
set C_modelArgList {
	{ input_V int 16 regular {array 9 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32} ]}
# RTL Port declarations: 
set portNum 11
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_V_address0 sc_out sc_lv 4 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_q0 sc_in sc_lv 16 signal 0 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27"],
		"CDFG" : "mlp_monte_carlo",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1126905", "EstimateLatencyMax" : "1126905",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_relu_16_s_fu_818"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_relu_16_s_fu_818"}],
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w5_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outputs_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b1_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w1_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b2_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w2_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b3_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w3_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b4_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w4_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w5_V_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.outputs_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense0_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense1_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense2_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense3_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout0_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout1_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout2_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout3_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_16_s_fu_818", "Parent" : "0",
		"CDFG" : "relu_16_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mac_muladd_16tde_U2", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mac_muladd_16tde_U3", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mac_muladd_16udo_U4", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mac_muladd_16vdy_U5", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mac_muladd_12wdI_U6", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_mul_18ns_xdS_U7", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_mul_18ns_xdS_U8", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mac_muladd_17yd2_U9", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mlp_monte_carlo {
		input_V {Type I LastRead 9 FirstWrite -1}
		b1_V {Type I LastRead -1 FirstWrite -1}
		w1_V {Type I LastRead -1 FirstWrite -1}
		b2_V {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		b3_V {Type I LastRead -1 FirstWrite -1}
		w3_V {Type I LastRead -1 FirstWrite -1}
		b4_V {Type I LastRead -1 FirstWrite -1}
		w4_V {Type I LastRead -1 FirstWrite -1}
		w5_V_0 {Type I LastRead -1 FirstWrite -1}
		outputs_V {Type IO LastRead -1 FirstWrite -1}}
	relu_16_s {
		data_V {Type IO LastRead 1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1126905", "Max" : "1126905"}
	, {"Name" : "Interval", "Min" : "1126905", "Max" : "1126905"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 4 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 16 } } }
}
