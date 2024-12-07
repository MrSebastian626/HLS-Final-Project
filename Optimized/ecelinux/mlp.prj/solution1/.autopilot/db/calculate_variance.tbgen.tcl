set moduleName calculate_variance
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
set C_modelName {calculate_variance}
set C_modelType { int 27 }
set C_modelArgList {
	{ outputs_V_2 int 27 regular {array 100 { 1 3 } 1 1 }  }
	{ mean_V int 27 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "outputs_V_2", "interface" : "memory", "bitwidth" : 27, "direction" : "READONLY"} , 
 	{ "Name" : "mean_V", "interface" : "wire", "bitwidth" : 27, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 27} ]}
# RTL Port declarations: 
set portNum 11
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ outputs_V_2_address0 sc_out sc_lv 7 signal 0 } 
	{ outputs_V_2_ce0 sc_out sc_logic 1 signal 0 } 
	{ outputs_V_2_q0 sc_in sc_lv 27 signal 0 } 
	{ mean_V sc_in sc_lv 27 signal 1 } 
	{ ap_return sc_out sc_lv 27 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "outputs_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "outputs_V_2", "role": "address0" }} , 
 	{ "name": "outputs_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outputs_V_2", "role": "ce0" }} , 
 	{ "name": "outputs_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "outputs_V_2", "role": "q0" }} , 
 	{ "name": "mean_V", "direction": "in", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "mean_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "calculate_variance",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "719", "EstimateLatencyMax" : "719",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outputs_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mean_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_fpext_32ns_64cdu_U696", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_fsqrt_32ns_32ceu_U697", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_57ns_55s_cfu_U698", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	calculate_variance {
		outputs_V_2 {Type I LastRead 1 FirstWrite -1}
		mean_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "719", "Max" : "719"}
	, {"Name" : "Interval", "Min" : "719", "Max" : "719"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	outputs_V_2 { ap_memory {  { outputs_V_2_address0 mem_address 1 7 }  { outputs_V_2_ce0 mem_ce 1 1 }  { outputs_V_2_q0 mem_dout 0 27 } } }
	mean_V { ap_none {  { mean_V in_data 0 27 } } }
}
