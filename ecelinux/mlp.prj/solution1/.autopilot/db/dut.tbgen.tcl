set moduleName dut
set isTopModule 1
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
set C_modelName {dut}
set C_modelType { void 0 }
set C_modelArgList {
	{ strm_in_V_V int 16 regular {fifo 0 volatile }  }
	{ strm_out_V_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "strm_in_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "strm_in.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "strm_out_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "strm_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ strm_in_V_V_dout sc_in sc_lv 16 signal 0 } 
	{ strm_in_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ strm_in_V_V_read sc_out sc_logic 1 signal 0 } 
	{ strm_out_V_V_din sc_out sc_lv 16 signal 1 } 
	{ strm_out_V_V_full_n sc_in sc_logic 1 signal 1 } 
	{ strm_out_V_V_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "strm_in_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "strm_in_V_V", "role": "dout" }} , 
 	{ "name": "strm_in_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_in_V_V", "role": "empty_n" }} , 
 	{ "name": "strm_in_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_in_V_V", "role": "read" }} , 
 	{ "name": "strm_out_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "strm_out_V_V", "role": "din" }} , 
 	{ "name": "strm_out_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_out_V_V", "role": "full_n" }} , 
 	{ "name": "strm_out_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_out_V_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "dut",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1126917", "EstimateLatencyMax" : "1126917",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_mlp_monte_carlo_fu_103"}],
		"Port" : [
			{"Name" : "strm_in_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "strm_in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "strm_out_V_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "strm_out_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "b1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "b1_V"}]},
			{"Name" : "w1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "w1_V"}]},
			{"Name" : "b2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "b2_V"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "w2_V"}]},
			{"Name" : "b3_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "b3_V"}]},
			{"Name" : "w3_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "w3_V"}]},
			{"Name" : "b4_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "b4_V"}]},
			{"Name" : "w4_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "w4_V"}]},
			{"Name" : "w5_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "w5_V_0"}]},
			{"Name" : "outputs_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_mlp_monte_carlo_fu_103", "Port" : "outputs_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103", "Parent" : "0", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29"],
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
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.b1_V_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.w1_V_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.b2_V_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.w2_V_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.b3_V_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.w3_V_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.b4_V_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.w4_V_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.w5_V_0_U", "Parent" : "2"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.outputs_V_U", "Parent" : "2"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dense0_V_U", "Parent" : "2"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dense1_V_U", "Parent" : "2"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dense2_V_U", "Parent" : "2"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dense3_V_U", "Parent" : "2"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dropout0_V_U", "Parent" : "2"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dropout1_V_U", "Parent" : "2"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dropout2_V_U", "Parent" : "2"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dropout3_V_U", "Parent" : "2"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.grp_relu_16_s_fu_818", "Parent" : "2",
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
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mac_muladd_16tde_U2", "Parent" : "2"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mac_muladd_16tde_U3", "Parent" : "2"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mac_muladd_16udo_U4", "Parent" : "2"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mac_muladd_16vdy_U5", "Parent" : "2"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mac_muladd_12wdI_U6", "Parent" : "2"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mul_mul_18ns_xdS_U7", "Parent" : "2"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mul_mul_18ns_xdS_U8", "Parent" : "2"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_monte_carlo_fu_103.dut_mac_muladd_17yd2_U9", "Parent" : "2"}]}


set ArgLastReadFirstWriteLatency {
	dut {
		strm_in_V_V {Type I LastRead 1 FirstWrite -1}
		strm_out_V_V {Type O LastRead -1 FirstWrite 2}
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
	{"Name" : "Latency", "Min" : "1126917", "Max" : "1126917"}
	, {"Name" : "Interval", "Min" : "1126918", "Max" : "1126918"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	strm_in_V_V { ap_fifo {  { strm_in_V_V_dout fifo_data 0 16 }  { strm_in_V_V_empty_n fifo_status 0 1 }  { strm_in_V_V_read fifo_update 1 1 } } }
	strm_out_V_V { ap_fifo {  { strm_out_V_V_din fifo_data 1 16 }  { strm_out_V_V_full_n fifo_status 0 1 }  { strm_out_V_V_write fifo_update 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	strm_in_V_V { fifo_read 9 no_conditional }
	strm_out_V_V { fifo_write 2 no_conditional }
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
