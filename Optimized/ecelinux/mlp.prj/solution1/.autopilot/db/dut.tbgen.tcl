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
	{ strm_in_V_V int 27 regular {fifo 0 volatile }  }
	{ strm_out_V_V int 27 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "strm_in_V_V", "interface" : "fifo", "bitwidth" : 27, "direction" : "READONLY", "bitSlice":[{"low":0,"up":26,"cElement": [{"cName": "strm_in.V.V","cData": "int27","bit_use": { "low": 0,"up": 26},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "strm_out_V_V", "interface" : "fifo", "bitwidth" : 27, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":26,"cElement": [{"cName": "strm_out.V.V","cData": "int27","bit_use": { "low": 0,"up": 26},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ strm_in_V_V_dout sc_in sc_lv 27 signal 0 } 
	{ strm_in_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ strm_in_V_V_read sc_out sc_logic 1 signal 0 } 
	{ strm_out_V_V_din sc_out sc_lv 27 signal 1 } 
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
 	{ "name": "strm_in_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "strm_in_V_V", "role": "dout" }} , 
 	{ "name": "strm_in_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_in_V_V", "role": "empty_n" }} , 
 	{ "name": "strm_in_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_in_V_V", "role": "read" }} , 
 	{ "name": "strm_out_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":27, "type": "signal", "bundle":{"name": "strm_out_V_V", "role": "din" }} , 
 	{ "name": "strm_out_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_out_V_V", "role": "full_n" }} , 
 	{ "name": "strm_out_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "strm_out_V_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dut",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "189971", "EstimateLatencyMax" : "189971",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_mlp_xcel_fu_388"}],
		"Port" : [
			{"Name" : "strm_in_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "strm_in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "strm_out_V_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "strm_out_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "global_lfsr_seed_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "global_lfsr_seed_V"}]},
			{"Name" : "b1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "b1_V"}]},
			{"Name" : "w1_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_0"}]},
			{"Name" : "w1_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_1"}]},
			{"Name" : "w1_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_2"}]},
			{"Name" : "w1_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_3"}]},
			{"Name" : "w1_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_4"}]},
			{"Name" : "w1_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_5"}]},
			{"Name" : "w1_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_6"}]},
			{"Name" : "w1_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_7"}]},
			{"Name" : "w1_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w1_V_8"}]},
			{"Name" : "b2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "b2_V"}]},
			{"Name" : "w2_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_0"}]},
			{"Name" : "w2_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_1"}]},
			{"Name" : "w2_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_2"}]},
			{"Name" : "w2_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_3"}]},
			{"Name" : "w2_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_4"}]},
			{"Name" : "w2_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_5"}]},
			{"Name" : "w2_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_6"}]},
			{"Name" : "w2_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_7"}]},
			{"Name" : "w2_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_8"}]},
			{"Name" : "w2_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_9"}]},
			{"Name" : "w2_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_10"}]},
			{"Name" : "w2_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_11"}]},
			{"Name" : "w2_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_12"}]},
			{"Name" : "w2_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_13"}]},
			{"Name" : "w2_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_14"}]},
			{"Name" : "w2_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_15"}]},
			{"Name" : "w2_V_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_16"}]},
			{"Name" : "w2_V_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_17"}]},
			{"Name" : "w2_V_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_18"}]},
			{"Name" : "w2_V_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_19"}]},
			{"Name" : "w2_V_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_20"}]},
			{"Name" : "w2_V_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_21"}]},
			{"Name" : "w2_V_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_22"}]},
			{"Name" : "w2_V_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_23"}]},
			{"Name" : "w2_V_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_24"}]},
			{"Name" : "w2_V_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_25"}]},
			{"Name" : "w2_V_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_26"}]},
			{"Name" : "w2_V_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_27"}]},
			{"Name" : "w2_V_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_28"}]},
			{"Name" : "w2_V_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_29"}]},
			{"Name" : "w2_V_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_30"}]},
			{"Name" : "w2_V_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_31"}]},
			{"Name" : "w2_V_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_63"}]},
			{"Name" : "w2_V_62", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_62"}]},
			{"Name" : "w2_V_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_61"}]},
			{"Name" : "w2_V_60", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_60"}]},
			{"Name" : "w2_V_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_59"}]},
			{"Name" : "w2_V_58", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_58"}]},
			{"Name" : "w2_V_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_57"}]},
			{"Name" : "w2_V_56", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_56"}]},
			{"Name" : "w2_V_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_55"}]},
			{"Name" : "w2_V_54", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_54"}]},
			{"Name" : "w2_V_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_53"}]},
			{"Name" : "w2_V_52", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_52"}]},
			{"Name" : "w2_V_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_51"}]},
			{"Name" : "w2_V_50", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_50"}]},
			{"Name" : "w2_V_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_49"}]},
			{"Name" : "w2_V_48", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_48"}]},
			{"Name" : "w2_V_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_47"}]},
			{"Name" : "w2_V_46", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_46"}]},
			{"Name" : "w2_V_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_45"}]},
			{"Name" : "w2_V_44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_44"}]},
			{"Name" : "w2_V_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_43"}]},
			{"Name" : "w2_V_42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_42"}]},
			{"Name" : "w2_V_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_41"}]},
			{"Name" : "w2_V_40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_40"}]},
			{"Name" : "w2_V_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_39"}]},
			{"Name" : "w2_V_38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_38"}]},
			{"Name" : "w2_V_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_37"}]},
			{"Name" : "w2_V_36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_36"}]},
			{"Name" : "w2_V_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_35"}]},
			{"Name" : "w2_V_34", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_34"}]},
			{"Name" : "w2_V_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_33"}]},
			{"Name" : "w2_V_32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w2_V_32"}]},
			{"Name" : "b3_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "b3_V"}]},
			{"Name" : "w3_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_0"}]},
			{"Name" : "w3_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_1"}]},
			{"Name" : "w3_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_2"}]},
			{"Name" : "w3_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_3"}]},
			{"Name" : "w3_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_4"}]},
			{"Name" : "w3_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_5"}]},
			{"Name" : "w3_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_6"}]},
			{"Name" : "w3_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_7"}]},
			{"Name" : "w3_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_8"}]},
			{"Name" : "w3_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_9"}]},
			{"Name" : "w3_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_10"}]},
			{"Name" : "w3_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_11"}]},
			{"Name" : "w3_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_12"}]},
			{"Name" : "w3_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_13"}]},
			{"Name" : "w3_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_14"}]},
			{"Name" : "w3_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_15"}]},
			{"Name" : "w3_V_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_16"}]},
			{"Name" : "w3_V_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_17"}]},
			{"Name" : "w3_V_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_18"}]},
			{"Name" : "w3_V_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_19"}]},
			{"Name" : "w3_V_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_20"}]},
			{"Name" : "w3_V_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_21"}]},
			{"Name" : "w3_V_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_22"}]},
			{"Name" : "w3_V_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_23"}]},
			{"Name" : "w3_V_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_24"}]},
			{"Name" : "w3_V_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_25"}]},
			{"Name" : "w3_V_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_26"}]},
			{"Name" : "w3_V_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_27"}]},
			{"Name" : "w3_V_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_28"}]},
			{"Name" : "w3_V_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_29"}]},
			{"Name" : "w3_V_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_30"}]},
			{"Name" : "w3_V_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w3_V_31"}]},
			{"Name" : "b4_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "b4_V"}]},
			{"Name" : "w4_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_0"}]},
			{"Name" : "w4_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_1"}]},
			{"Name" : "w4_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_2"}]},
			{"Name" : "w4_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_3"}]},
			{"Name" : "w4_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_4"}]},
			{"Name" : "w4_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_5"}]},
			{"Name" : "w4_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_6"}]},
			{"Name" : "w4_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_7"}]},
			{"Name" : "w4_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_8"}]},
			{"Name" : "w4_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_9"}]},
			{"Name" : "w4_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_10"}]},
			{"Name" : "w4_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_11"}]},
			{"Name" : "w4_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_12"}]},
			{"Name" : "w4_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_13"}]},
			{"Name" : "w4_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_14"}]},
			{"Name" : "w4_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "w4_V_15"}]},
			{"Name" : "outputs_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_mlp_xcel_fu_388", "Port" : "outputs_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "198", "199", "234", "246", "247", "266", "270", "272"],
		"CDFG" : "mlp_xcel",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "189949", "EstimateLatencyMax" : "189949",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generate_binary_matr_fu_1794"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generate_binary_matr_1_fu_2227"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_calculate_variance_fu_2353"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generate_binary_matr_2_fu_2361"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generate_binary_matr_2_fu_2361"}],
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
			{"Name" : "global_lfsr_seed_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "246", "SubInstance" : "grp_generate_binary_matr_1_fu_2227", "Port" : "global_lfsr_seed_V"},
					{"ID" : "270", "SubInstance" : "grp_generate_binary_matr_2_fu_2361", "Port" : "global_lfsr_seed_V"},
					{"ID" : "198", "SubInstance" : "grp_generate_binary_matr_fu_1794", "Port" : "global_lfsr_seed_V"}]},
			{"Name" : "b1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "b1_V"}]},
			{"Name" : "w1_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_0"}]},
			{"Name" : "w1_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_1"}]},
			{"Name" : "w1_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_2"}]},
			{"Name" : "w1_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_3"}]},
			{"Name" : "w1_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_4"}]},
			{"Name" : "w1_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_5"}]},
			{"Name" : "w1_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_6"}]},
			{"Name" : "w1_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_7"}]},
			{"Name" : "w1_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_dense_lay_9_64_s_fu_2064", "Port" : "w1_V_8"}]},
			{"Name" : "b2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "b2_V"}]},
			{"Name" : "w2_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_0"}]},
			{"Name" : "w2_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_1"}]},
			{"Name" : "w2_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_2"}]},
			{"Name" : "w2_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_3"}]},
			{"Name" : "w2_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_4"}]},
			{"Name" : "w2_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_5"}]},
			{"Name" : "w2_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_6"}]},
			{"Name" : "w2_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_7"}]},
			{"Name" : "w2_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_8"}]},
			{"Name" : "w2_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_9"}]},
			{"Name" : "w2_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_10"}]},
			{"Name" : "w2_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_11"}]},
			{"Name" : "w2_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_12"}]},
			{"Name" : "w2_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_13"}]},
			{"Name" : "w2_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_14"}]},
			{"Name" : "w2_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_15"}]},
			{"Name" : "w2_V_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_16"}]},
			{"Name" : "w2_V_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_17"}]},
			{"Name" : "w2_V_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_18"}]},
			{"Name" : "w2_V_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_19"}]},
			{"Name" : "w2_V_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_20"}]},
			{"Name" : "w2_V_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_21"}]},
			{"Name" : "w2_V_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_22"}]},
			{"Name" : "w2_V_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_23"}]},
			{"Name" : "w2_V_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_24"}]},
			{"Name" : "w2_V_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_25"}]},
			{"Name" : "w2_V_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_26"}]},
			{"Name" : "w2_V_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_27"}]},
			{"Name" : "w2_V_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_28"}]},
			{"Name" : "w2_V_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_29"}]},
			{"Name" : "w2_V_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_30"}]},
			{"Name" : "w2_V_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_31"}]},
			{"Name" : "w2_V_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_63"}]},
			{"Name" : "w2_V_62", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_62"}]},
			{"Name" : "w2_V_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_61"}]},
			{"Name" : "w2_V_60", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_60"}]},
			{"Name" : "w2_V_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_59"}]},
			{"Name" : "w2_V_58", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_58"}]},
			{"Name" : "w2_V_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_57"}]},
			{"Name" : "w2_V_56", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_56"}]},
			{"Name" : "w2_V_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_55"}]},
			{"Name" : "w2_V_54", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_54"}]},
			{"Name" : "w2_V_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_53"}]},
			{"Name" : "w2_V_52", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_52"}]},
			{"Name" : "w2_V_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_51"}]},
			{"Name" : "w2_V_50", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_50"}]},
			{"Name" : "w2_V_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_49"}]},
			{"Name" : "w2_V_48", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_48"}]},
			{"Name" : "w2_V_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_47"}]},
			{"Name" : "w2_V_46", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_46"}]},
			{"Name" : "w2_V_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_45"}]},
			{"Name" : "w2_V_44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_44"}]},
			{"Name" : "w2_V_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_43"}]},
			{"Name" : "w2_V_42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_42"}]},
			{"Name" : "w2_V_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_41"}]},
			{"Name" : "w2_V_40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_40"}]},
			{"Name" : "w2_V_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_39"}]},
			{"Name" : "w2_V_38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_38"}]},
			{"Name" : "w2_V_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_37"}]},
			{"Name" : "w2_V_36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_36"}]},
			{"Name" : "w2_V_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_35"}]},
			{"Name" : "w2_V_34", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_34"}]},
			{"Name" : "w2_V_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_33"}]},
			{"Name" : "w2_V_32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "131", "SubInstance" : "grp_dense_lay_64_32_s_fu_1530", "Port" : "w2_V_32"}]},
			{"Name" : "b3_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "b3_V"}]},
			{"Name" : "w3_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_0"}]},
			{"Name" : "w3_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_1"}]},
			{"Name" : "w3_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_2"}]},
			{"Name" : "w3_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_3"}]},
			{"Name" : "w3_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_4"}]},
			{"Name" : "w3_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_5"}]},
			{"Name" : "w3_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_6"}]},
			{"Name" : "w3_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_7"}]},
			{"Name" : "w3_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_8"}]},
			{"Name" : "w3_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_9"}]},
			{"Name" : "w3_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_10"}]},
			{"Name" : "w3_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_11"}]},
			{"Name" : "w3_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_12"}]},
			{"Name" : "w3_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_13"}]},
			{"Name" : "w3_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_14"}]},
			{"Name" : "w3_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_15"}]},
			{"Name" : "w3_V_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_16"}]},
			{"Name" : "w3_V_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_17"}]},
			{"Name" : "w3_V_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_18"}]},
			{"Name" : "w3_V_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_19"}]},
			{"Name" : "w3_V_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_20"}]},
			{"Name" : "w3_V_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_21"}]},
			{"Name" : "w3_V_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_22"}]},
			{"Name" : "w3_V_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_23"}]},
			{"Name" : "w3_V_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_24"}]},
			{"Name" : "w3_V_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_25"}]},
			{"Name" : "w3_V_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_26"}]},
			{"Name" : "w3_V_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_27"}]},
			{"Name" : "w3_V_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_28"}]},
			{"Name" : "w3_V_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_29"}]},
			{"Name" : "w3_V_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_30"}]},
			{"Name" : "w3_V_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "199", "SubInstance" : "grp_dense_lay_32_16_s_fu_1928", "Port" : "w3_V_31"}]},
			{"Name" : "b4_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "b4_V"}]},
			{"Name" : "w4_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_0"}]},
			{"Name" : "w4_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_1"}]},
			{"Name" : "w4_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_2"}]},
			{"Name" : "w4_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_3"}]},
			{"Name" : "w4_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_4"}]},
			{"Name" : "w4_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_5"}]},
			{"Name" : "w4_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_6"}]},
			{"Name" : "w4_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_7"}]},
			{"Name" : "w4_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_8"}]},
			{"Name" : "w4_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_9"}]},
			{"Name" : "w4_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_10"}]},
			{"Name" : "w4_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_11"}]},
			{"Name" : "w4_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_12"}]},
			{"Name" : "w4_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_13"}]},
			{"Name" : "w4_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_14"}]},
			{"Name" : "w4_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "247", "SubInstance" : "grp_dense_lay_16_16_s_fu_2265", "Port" : "w4_V_15"}]},
			{"Name" : "outputs_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "266", "SubInstance" : "grp_calculate_variance_fu_2353", "Port" : "outputs_V_2"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.outputs_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_0_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_1_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_2_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_3_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_4_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_5_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_6_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_7_U", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_8_U", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_9_U", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_10_U", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_11_U", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_12_U", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_13_U", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_14_U", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_15_U", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_16_U", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_17_U", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_18_U", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_19_U", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_20_U", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_21_U", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_22_U", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_23_U", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_24_U", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_25_U", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_26_U", "Parent" : "1"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_27_U", "Parent" : "1"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_28_U", "Parent" : "1"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_29_U", "Parent" : "1"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_30_U", "Parent" : "1"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_31_U", "Parent" : "1"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_32_U", "Parent" : "1"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_33_U", "Parent" : "1"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_34_U", "Parent" : "1"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_35_U", "Parent" : "1"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_36_U", "Parent" : "1"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_37_U", "Parent" : "1"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_38_U", "Parent" : "1"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_39_U", "Parent" : "1"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_40_U", "Parent" : "1"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_41_U", "Parent" : "1"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_42_U", "Parent" : "1"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_43_U", "Parent" : "1"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_44_U", "Parent" : "1"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_45_U", "Parent" : "1"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_46_U", "Parent" : "1"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_47_U", "Parent" : "1"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_48_U", "Parent" : "1"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_49_U", "Parent" : "1"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_50_U", "Parent" : "1"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_51_U", "Parent" : "1"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_52_U", "Parent" : "1"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_53_U", "Parent" : "1"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_54_U", "Parent" : "1"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_55_U", "Parent" : "1"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_56_U", "Parent" : "1"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_57_U", "Parent" : "1"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_58_U", "Parent" : "1"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_59_U", "Parent" : "1"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_60_U", "Parent" : "1"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_61_U", "Parent" : "1"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_62_U", "Parent" : "1"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask0_63_U", "Parent" : "1"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_0_U", "Parent" : "1"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_1_U", "Parent" : "1"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_2_U", "Parent" : "1"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_3_U", "Parent" : "1"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_4_U", "Parent" : "1"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_5_U", "Parent" : "1"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_6_U", "Parent" : "1"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_7_U", "Parent" : "1"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_8_U", "Parent" : "1"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_9_U", "Parent" : "1"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_10_U", "Parent" : "1"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_11_U", "Parent" : "1"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_12_U", "Parent" : "1"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_13_U", "Parent" : "1"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_14_U", "Parent" : "1"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_15_U", "Parent" : "1"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_16_U", "Parent" : "1"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_17_U", "Parent" : "1"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_18_U", "Parent" : "1"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_19_U", "Parent" : "1"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_20_U", "Parent" : "1"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_21_U", "Parent" : "1"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_22_U", "Parent" : "1"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_23_U", "Parent" : "1"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_24_U", "Parent" : "1"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_25_U", "Parent" : "1"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_26_U", "Parent" : "1"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_27_U", "Parent" : "1"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_28_U", "Parent" : "1"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_29_U", "Parent" : "1"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_30_U", "Parent" : "1"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask1_31_U", "Parent" : "1"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_0_U", "Parent" : "1"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_1_U", "Parent" : "1"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_2_U", "Parent" : "1"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_3_U", "Parent" : "1"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_4_U", "Parent" : "1"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_5_U", "Parent" : "1"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_6_U", "Parent" : "1"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_7_U", "Parent" : "1"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_8_U", "Parent" : "1"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_9_U", "Parent" : "1"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_10_U", "Parent" : "1"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_11_U", "Parent" : "1"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_12_U", "Parent" : "1"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_13_U", "Parent" : "1"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_14_U", "Parent" : "1"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask2_15_U", "Parent" : "1"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_0_U", "Parent" : "1"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_1_U", "Parent" : "1"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_2_U", "Parent" : "1"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_3_U", "Parent" : "1"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_4_U", "Parent" : "1"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_5_U", "Parent" : "1"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_6_U", "Parent" : "1"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_7_U", "Parent" : "1"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_8_U", "Parent" : "1"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_9_U", "Parent" : "1"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_10_U", "Parent" : "1"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_11_U", "Parent" : "1"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_12_U", "Parent" : "1"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_13_U", "Parent" : "1"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_14_U", "Parent" : "1"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.mask3_15_U", "Parent" : "1"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530", "Parent" : "1", "Child" : ["132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197"],
		"CDFG" : "dense_lay_64_32_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "993", "EstimateLatencyMax" : "993",
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
			{"Name" : "input_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_63_V_read", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "output_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask158", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask159", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask160", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask161", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask162", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask163", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask164", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask165", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask166", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask167", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask168", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask169", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask170", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask171", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask172", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask173", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask174", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask175", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask176", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask177", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask178", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask179", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask180", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask181", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask182", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask183", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask184", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask185", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask186", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask187", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask188", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V_32", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.b2_V_U", "Parent" : "131"},
	{"ID" : "133", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_0_U", "Parent" : "131"},
	{"ID" : "134", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_1_U", "Parent" : "131"},
	{"ID" : "135", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_2_U", "Parent" : "131"},
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_3_U", "Parent" : "131"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_4_U", "Parent" : "131"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_5_U", "Parent" : "131"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_6_U", "Parent" : "131"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_7_U", "Parent" : "131"},
	{"ID" : "141", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_8_U", "Parent" : "131"},
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_9_U", "Parent" : "131"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_10_U", "Parent" : "131"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_11_U", "Parent" : "131"},
	{"ID" : "145", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_12_U", "Parent" : "131"},
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_13_U", "Parent" : "131"},
	{"ID" : "147", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_14_U", "Parent" : "131"},
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_15_U", "Parent" : "131"},
	{"ID" : "149", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_16_U", "Parent" : "131"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_17_U", "Parent" : "131"},
	{"ID" : "151", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_18_U", "Parent" : "131"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_19_U", "Parent" : "131"},
	{"ID" : "153", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_20_U", "Parent" : "131"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_21_U", "Parent" : "131"},
	{"ID" : "155", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_22_U", "Parent" : "131"},
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_23_U", "Parent" : "131"},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_24_U", "Parent" : "131"},
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_25_U", "Parent" : "131"},
	{"ID" : "159", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_26_U", "Parent" : "131"},
	{"ID" : "160", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_27_U", "Parent" : "131"},
	{"ID" : "161", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_28_U", "Parent" : "131"},
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_29_U", "Parent" : "131"},
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_30_U", "Parent" : "131"},
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_31_U", "Parent" : "131"},
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_63_U", "Parent" : "131"},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_62_U", "Parent" : "131"},
	{"ID" : "167", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_61_U", "Parent" : "131"},
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_60_U", "Parent" : "131"},
	{"ID" : "169", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_59_U", "Parent" : "131"},
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_58_U", "Parent" : "131"},
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_57_U", "Parent" : "131"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_56_U", "Parent" : "131"},
	{"ID" : "173", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_55_U", "Parent" : "131"},
	{"ID" : "174", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_54_U", "Parent" : "131"},
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_53_U", "Parent" : "131"},
	{"ID" : "176", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_52_U", "Parent" : "131"},
	{"ID" : "177", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_51_U", "Parent" : "131"},
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_50_U", "Parent" : "131"},
	{"ID" : "179", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_49_U", "Parent" : "131"},
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_48_U", "Parent" : "131"},
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_47_U", "Parent" : "131"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_46_U", "Parent" : "131"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_45_U", "Parent" : "131"},
	{"ID" : "184", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_44_U", "Parent" : "131"},
	{"ID" : "185", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_43_U", "Parent" : "131"},
	{"ID" : "186", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_42_U", "Parent" : "131"},
	{"ID" : "187", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_41_U", "Parent" : "131"},
	{"ID" : "188", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_40_U", "Parent" : "131"},
	{"ID" : "189", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_39_U", "Parent" : "131"},
	{"ID" : "190", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_38_U", "Parent" : "131"},
	{"ID" : "191", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_37_U", "Parent" : "131"},
	{"ID" : "192", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_36_U", "Parent" : "131"},
	{"ID" : "193", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_35_U", "Parent" : "131"},
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_34_U", "Parent" : "131"},
	{"ID" : "195", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_33_U", "Parent" : "131"},
	{"ID" : "196", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.w2_V_32_U", "Parent" : "131"},
	{"ID" : "197", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_64_32_s_fu_1530.dut_mux_325_1_1_1_U333", "Parent" : "131"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_generate_binary_matr_fu_1794", "Parent" : "1",
		"CDFG" : "generate_binary_matr",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3201", "EstimateLatencyMax" : "3201",
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
			{"Name" : "matrix_32", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_33", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_34", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_35", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_36", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_37", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_38", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_39", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_40", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_41", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_42", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_43", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_44", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_45", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_46", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_47", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_48", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_49", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_50", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_51", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_52", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_53", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_54", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_55", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_56", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_57", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_58", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_59", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_60", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_61", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_62", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "matrix_63", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "global_lfsr_seed_V", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928", "Parent" : "1", "Child" : ["200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233"],
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
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.b3_V_U", "Parent" : "199"},
	{"ID" : "201", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_0_U", "Parent" : "199"},
	{"ID" : "202", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_1_U", "Parent" : "199"},
	{"ID" : "203", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_2_U", "Parent" : "199"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_3_U", "Parent" : "199"},
	{"ID" : "205", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_4_U", "Parent" : "199"},
	{"ID" : "206", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_5_U", "Parent" : "199"},
	{"ID" : "207", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_6_U", "Parent" : "199"},
	{"ID" : "208", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_7_U", "Parent" : "199"},
	{"ID" : "209", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_8_U", "Parent" : "199"},
	{"ID" : "210", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_9_U", "Parent" : "199"},
	{"ID" : "211", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_10_U", "Parent" : "199"},
	{"ID" : "212", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_11_U", "Parent" : "199"},
	{"ID" : "213", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_12_U", "Parent" : "199"},
	{"ID" : "214", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_13_U", "Parent" : "199"},
	{"ID" : "215", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_14_U", "Parent" : "199"},
	{"ID" : "216", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_15_U", "Parent" : "199"},
	{"ID" : "217", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_16_U", "Parent" : "199"},
	{"ID" : "218", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_17_U", "Parent" : "199"},
	{"ID" : "219", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_18_U", "Parent" : "199"},
	{"ID" : "220", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_19_U", "Parent" : "199"},
	{"ID" : "221", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_20_U", "Parent" : "199"},
	{"ID" : "222", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_21_U", "Parent" : "199"},
	{"ID" : "223", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_22_U", "Parent" : "199"},
	{"ID" : "224", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_23_U", "Parent" : "199"},
	{"ID" : "225", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_24_U", "Parent" : "199"},
	{"ID" : "226", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_25_U", "Parent" : "199"},
	{"ID" : "227", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_26_U", "Parent" : "199"},
	{"ID" : "228", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_27_U", "Parent" : "199"},
	{"ID" : "229", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_28_U", "Parent" : "199"},
	{"ID" : "230", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_29_U", "Parent" : "199"},
	{"ID" : "231", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_30_U", "Parent" : "199"},
	{"ID" : "232", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.w3_V_31_U", "Parent" : "199"},
	{"ID" : "233", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_32_16_s_fu_1928.dut_mux_164_1_1_1_U529", "Parent" : "199"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064", "Parent" : "1", "Child" : ["235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245"],
		"CDFG" : "dense_lay_9_64_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "449", "EstimateLatencyMax" : "449",
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
			{"Name" : "output_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "mask93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask95", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask96", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask97", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask98", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask99", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask100", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask101", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask102", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask103", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask104", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask105", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask106", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask107", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask108", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask109", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask110", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask111", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask112", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask113", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask114", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask115", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask116", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask117", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask118", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask119", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask120", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask121", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask122", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask123", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask124", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask125", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask126", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask127", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask128", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask129", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask130", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask131", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask132", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask133", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask134", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask135", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask136", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask137", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask138", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask139", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask140", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask141", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask142", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mask_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_V_8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "235", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.b1_V_U", "Parent" : "234"},
	{"ID" : "236", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_0_U", "Parent" : "234"},
	{"ID" : "237", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_1_U", "Parent" : "234"},
	{"ID" : "238", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_2_U", "Parent" : "234"},
	{"ID" : "239", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_3_U", "Parent" : "234"},
	{"ID" : "240", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_4_U", "Parent" : "234"},
	{"ID" : "241", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_5_U", "Parent" : "234"},
	{"ID" : "242", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_6_U", "Parent" : "234"},
	{"ID" : "243", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_7_U", "Parent" : "234"},
	{"ID" : "244", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.w1_V_8_U", "Parent" : "234"},
	{"ID" : "245", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_9_64_s_fu_2064.dut_mux_646_1_1_1_U119", "Parent" : "234"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_generate_binary_matr_1_fu_2227", "Parent" : "1",
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
			{"Name" : "global_lfsr_seed_V", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265", "Parent" : "1", "Child" : ["248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265"],
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
	{"ID" : "248", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.b4_V_U", "Parent" : "247"},
	{"ID" : "249", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_0_U", "Parent" : "247"},
	{"ID" : "250", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_1_U", "Parent" : "247"},
	{"ID" : "251", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_2_U", "Parent" : "247"},
	{"ID" : "252", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_3_U", "Parent" : "247"},
	{"ID" : "253", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_4_U", "Parent" : "247"},
	{"ID" : "254", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_5_U", "Parent" : "247"},
	{"ID" : "255", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_6_U", "Parent" : "247"},
	{"ID" : "256", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_7_U", "Parent" : "247"},
	{"ID" : "257", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_8_U", "Parent" : "247"},
	{"ID" : "258", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_9_U", "Parent" : "247"},
	{"ID" : "259", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_10_U", "Parent" : "247"},
	{"ID" : "260", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_11_U", "Parent" : "247"},
	{"ID" : "261", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_12_U", "Parent" : "247"},
	{"ID" : "262", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_13_U", "Parent" : "247"},
	{"ID" : "263", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_14_U", "Parent" : "247"},
	{"ID" : "264", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.w4_V_15_U", "Parent" : "247"},
	{"ID" : "265", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_dense_lay_16_16_s_fu_2265.dut_mux_164_1_1_1_U629", "Parent" : "247"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_calculate_variance_fu_2353", "Parent" : "1", "Child" : ["267", "268", "269"],
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
	{"ID" : "267", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_calculate_variance_fu_2353.dut_fpext_32ns_64cdu_U696", "Parent" : "266"},
	{"ID" : "268", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_calculate_variance_fu_2353.dut_fsqrt_32ns_32ceu_U697", "Parent" : "266"},
	{"ID" : "269", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_calculate_variance_fu_2353.dut_mul_57ns_55s_cfu_U698", "Parent" : "266"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_generate_binary_matr_2_fu_2361", "Parent" : "1", "Child" : ["271"],
		"CDFG" : "generate_binary_matr_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "809", "EstimateLatencyMax" : "809",
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
			{"Name" : "zero_percentage", "Type" : "None", "Direction" : "I"},
			{"Name" : "global_lfsr_seed_V", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "271", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.grp_generate_binary_matr_2_fu_2361.dut_fmul_32ns_32nbkb_U99", "Parent" : "270"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mlp_xcel_fu_388.call_ret2_relu_64_s_fu_2386", "Parent" : "1",
		"CDFG" : "relu_64_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dut {
		strm_in_V_V {Type I LastRead 1 FirstWrite -1}
		strm_out_V_V {Type O LastRead -1 FirstWrite 3}
		global_lfsr_seed_V {Type IO LastRead -1 FirstWrite -1}
		b1_V {Type I LastRead -1 FirstWrite -1}
		w1_V_0 {Type I LastRead -1 FirstWrite -1}
		w1_V_1 {Type I LastRead -1 FirstWrite -1}
		w1_V_2 {Type I LastRead -1 FirstWrite -1}
		w1_V_3 {Type I LastRead -1 FirstWrite -1}
		w1_V_4 {Type I LastRead -1 FirstWrite -1}
		w1_V_5 {Type I LastRead -1 FirstWrite -1}
		w1_V_6 {Type I LastRead -1 FirstWrite -1}
		w1_V_7 {Type I LastRead -1 FirstWrite -1}
		w1_V_8 {Type I LastRead -1 FirstWrite -1}
		b2_V {Type I LastRead -1 FirstWrite -1}
		w2_V_0 {Type I LastRead -1 FirstWrite -1}
		w2_V_1 {Type I LastRead -1 FirstWrite -1}
		w2_V_2 {Type I LastRead -1 FirstWrite -1}
		w2_V_3 {Type I LastRead -1 FirstWrite -1}
		w2_V_4 {Type I LastRead -1 FirstWrite -1}
		w2_V_5 {Type I LastRead -1 FirstWrite -1}
		w2_V_6 {Type I LastRead -1 FirstWrite -1}
		w2_V_7 {Type I LastRead -1 FirstWrite -1}
		w2_V_8 {Type I LastRead -1 FirstWrite -1}
		w2_V_9 {Type I LastRead -1 FirstWrite -1}
		w2_V_10 {Type I LastRead -1 FirstWrite -1}
		w2_V_11 {Type I LastRead -1 FirstWrite -1}
		w2_V_12 {Type I LastRead -1 FirstWrite -1}
		w2_V_13 {Type I LastRead -1 FirstWrite -1}
		w2_V_14 {Type I LastRead -1 FirstWrite -1}
		w2_V_15 {Type I LastRead -1 FirstWrite -1}
		w2_V_16 {Type I LastRead -1 FirstWrite -1}
		w2_V_17 {Type I LastRead -1 FirstWrite -1}
		w2_V_18 {Type I LastRead -1 FirstWrite -1}
		w2_V_19 {Type I LastRead -1 FirstWrite -1}
		w2_V_20 {Type I LastRead -1 FirstWrite -1}
		w2_V_21 {Type I LastRead -1 FirstWrite -1}
		w2_V_22 {Type I LastRead -1 FirstWrite -1}
		w2_V_23 {Type I LastRead -1 FirstWrite -1}
		w2_V_24 {Type I LastRead -1 FirstWrite -1}
		w2_V_25 {Type I LastRead -1 FirstWrite -1}
		w2_V_26 {Type I LastRead -1 FirstWrite -1}
		w2_V_27 {Type I LastRead -1 FirstWrite -1}
		w2_V_28 {Type I LastRead -1 FirstWrite -1}
		w2_V_29 {Type I LastRead -1 FirstWrite -1}
		w2_V_30 {Type I LastRead -1 FirstWrite -1}
		w2_V_31 {Type I LastRead -1 FirstWrite -1}
		w2_V_63 {Type I LastRead -1 FirstWrite -1}
		w2_V_62 {Type I LastRead -1 FirstWrite -1}
		w2_V_61 {Type I LastRead -1 FirstWrite -1}
		w2_V_60 {Type I LastRead -1 FirstWrite -1}
		w2_V_59 {Type I LastRead -1 FirstWrite -1}
		w2_V_58 {Type I LastRead -1 FirstWrite -1}
		w2_V_57 {Type I LastRead -1 FirstWrite -1}
		w2_V_56 {Type I LastRead -1 FirstWrite -1}
		w2_V_55 {Type I LastRead -1 FirstWrite -1}
		w2_V_54 {Type I LastRead -1 FirstWrite -1}
		w2_V_53 {Type I LastRead -1 FirstWrite -1}
		w2_V_52 {Type I LastRead -1 FirstWrite -1}
		w2_V_51 {Type I LastRead -1 FirstWrite -1}
		w2_V_50 {Type I LastRead -1 FirstWrite -1}
		w2_V_49 {Type I LastRead -1 FirstWrite -1}
		w2_V_48 {Type I LastRead -1 FirstWrite -1}
		w2_V_47 {Type I LastRead -1 FirstWrite -1}
		w2_V_46 {Type I LastRead -1 FirstWrite -1}
		w2_V_45 {Type I LastRead -1 FirstWrite -1}
		w2_V_44 {Type I LastRead -1 FirstWrite -1}
		w2_V_43 {Type I LastRead -1 FirstWrite -1}
		w2_V_42 {Type I LastRead -1 FirstWrite -1}
		w2_V_41 {Type I LastRead -1 FirstWrite -1}
		w2_V_40 {Type I LastRead -1 FirstWrite -1}
		w2_V_39 {Type I LastRead -1 FirstWrite -1}
		w2_V_38 {Type I LastRead -1 FirstWrite -1}
		w2_V_37 {Type I LastRead -1 FirstWrite -1}
		w2_V_36 {Type I LastRead -1 FirstWrite -1}
		w2_V_35 {Type I LastRead -1 FirstWrite -1}
		w2_V_34 {Type I LastRead -1 FirstWrite -1}
		w2_V_33 {Type I LastRead -1 FirstWrite -1}
		w2_V_32 {Type I LastRead -1 FirstWrite -1}
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
		w3_V_31 {Type I LastRead -1 FirstWrite -1}
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
		w4_V_15 {Type I LastRead -1 FirstWrite -1}
		outputs_V {Type IO LastRead -1 FirstWrite -1}}
	mlp_xcel {
		input_0_V_read {Type I LastRead 7 FirstWrite -1}
		input_1_V_read {Type I LastRead 7 FirstWrite -1}
		input_2_V_read {Type I LastRead 7 FirstWrite -1}
		input_3_V_read {Type I LastRead 7 FirstWrite -1}
		input_4_V_read {Type I LastRead 7 FirstWrite -1}
		input_5_V_read {Type I LastRead 7 FirstWrite -1}
		input_6_V_read {Type I LastRead 7 FirstWrite -1}
		input_7_V_read {Type I LastRead 7 FirstWrite -1}
		input_8_V_read {Type I LastRead 7 FirstWrite -1}
		global_lfsr_seed_V {Type IO LastRead -1 FirstWrite -1}
		b1_V {Type I LastRead -1 FirstWrite -1}
		w1_V_0 {Type I LastRead -1 FirstWrite -1}
		w1_V_1 {Type I LastRead -1 FirstWrite -1}
		w1_V_2 {Type I LastRead -1 FirstWrite -1}
		w1_V_3 {Type I LastRead -1 FirstWrite -1}
		w1_V_4 {Type I LastRead -1 FirstWrite -1}
		w1_V_5 {Type I LastRead -1 FirstWrite -1}
		w1_V_6 {Type I LastRead -1 FirstWrite -1}
		w1_V_7 {Type I LastRead -1 FirstWrite -1}
		w1_V_8 {Type I LastRead -1 FirstWrite -1}
		b2_V {Type I LastRead -1 FirstWrite -1}
		w2_V_0 {Type I LastRead -1 FirstWrite -1}
		w2_V_1 {Type I LastRead -1 FirstWrite -1}
		w2_V_2 {Type I LastRead -1 FirstWrite -1}
		w2_V_3 {Type I LastRead -1 FirstWrite -1}
		w2_V_4 {Type I LastRead -1 FirstWrite -1}
		w2_V_5 {Type I LastRead -1 FirstWrite -1}
		w2_V_6 {Type I LastRead -1 FirstWrite -1}
		w2_V_7 {Type I LastRead -1 FirstWrite -1}
		w2_V_8 {Type I LastRead -1 FirstWrite -1}
		w2_V_9 {Type I LastRead -1 FirstWrite -1}
		w2_V_10 {Type I LastRead -1 FirstWrite -1}
		w2_V_11 {Type I LastRead -1 FirstWrite -1}
		w2_V_12 {Type I LastRead -1 FirstWrite -1}
		w2_V_13 {Type I LastRead -1 FirstWrite -1}
		w2_V_14 {Type I LastRead -1 FirstWrite -1}
		w2_V_15 {Type I LastRead -1 FirstWrite -1}
		w2_V_16 {Type I LastRead -1 FirstWrite -1}
		w2_V_17 {Type I LastRead -1 FirstWrite -1}
		w2_V_18 {Type I LastRead -1 FirstWrite -1}
		w2_V_19 {Type I LastRead -1 FirstWrite -1}
		w2_V_20 {Type I LastRead -1 FirstWrite -1}
		w2_V_21 {Type I LastRead -1 FirstWrite -1}
		w2_V_22 {Type I LastRead -1 FirstWrite -1}
		w2_V_23 {Type I LastRead -1 FirstWrite -1}
		w2_V_24 {Type I LastRead -1 FirstWrite -1}
		w2_V_25 {Type I LastRead -1 FirstWrite -1}
		w2_V_26 {Type I LastRead -1 FirstWrite -1}
		w2_V_27 {Type I LastRead -1 FirstWrite -1}
		w2_V_28 {Type I LastRead -1 FirstWrite -1}
		w2_V_29 {Type I LastRead -1 FirstWrite -1}
		w2_V_30 {Type I LastRead -1 FirstWrite -1}
		w2_V_31 {Type I LastRead -1 FirstWrite -1}
		w2_V_63 {Type I LastRead -1 FirstWrite -1}
		w2_V_62 {Type I LastRead -1 FirstWrite -1}
		w2_V_61 {Type I LastRead -1 FirstWrite -1}
		w2_V_60 {Type I LastRead -1 FirstWrite -1}
		w2_V_59 {Type I LastRead -1 FirstWrite -1}
		w2_V_58 {Type I LastRead -1 FirstWrite -1}
		w2_V_57 {Type I LastRead -1 FirstWrite -1}
		w2_V_56 {Type I LastRead -1 FirstWrite -1}
		w2_V_55 {Type I LastRead -1 FirstWrite -1}
		w2_V_54 {Type I LastRead -1 FirstWrite -1}
		w2_V_53 {Type I LastRead -1 FirstWrite -1}
		w2_V_52 {Type I LastRead -1 FirstWrite -1}
		w2_V_51 {Type I LastRead -1 FirstWrite -1}
		w2_V_50 {Type I LastRead -1 FirstWrite -1}
		w2_V_49 {Type I LastRead -1 FirstWrite -1}
		w2_V_48 {Type I LastRead -1 FirstWrite -1}
		w2_V_47 {Type I LastRead -1 FirstWrite -1}
		w2_V_46 {Type I LastRead -1 FirstWrite -1}
		w2_V_45 {Type I LastRead -1 FirstWrite -1}
		w2_V_44 {Type I LastRead -1 FirstWrite -1}
		w2_V_43 {Type I LastRead -1 FirstWrite -1}
		w2_V_42 {Type I LastRead -1 FirstWrite -1}
		w2_V_41 {Type I LastRead -1 FirstWrite -1}
		w2_V_40 {Type I LastRead -1 FirstWrite -1}
		w2_V_39 {Type I LastRead -1 FirstWrite -1}
		w2_V_38 {Type I LastRead -1 FirstWrite -1}
		w2_V_37 {Type I LastRead -1 FirstWrite -1}
		w2_V_36 {Type I LastRead -1 FirstWrite -1}
		w2_V_35 {Type I LastRead -1 FirstWrite -1}
		w2_V_34 {Type I LastRead -1 FirstWrite -1}
		w2_V_33 {Type I LastRead -1 FirstWrite -1}
		w2_V_32 {Type I LastRead -1 FirstWrite -1}
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
		w3_V_31 {Type I LastRead -1 FirstWrite -1}
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
		w4_V_15 {Type I LastRead -1 FirstWrite -1}
		outputs_V {Type IO LastRead -1 FirstWrite -1}}
	dense_lay_64_32_s {
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
		input_32_V_read {Type I LastRead 0 FirstWrite -1}
		input_33_V_read {Type I LastRead 0 FirstWrite -1}
		input_34_V_read {Type I LastRead 0 FirstWrite -1}
		input_35_V_read {Type I LastRead 0 FirstWrite -1}
		input_36_V_read {Type I LastRead 0 FirstWrite -1}
		input_37_V_read {Type I LastRead 0 FirstWrite -1}
		input_38_V_read {Type I LastRead 0 FirstWrite -1}
		input_39_V_read {Type I LastRead 0 FirstWrite -1}
		input_40_V_read {Type I LastRead 0 FirstWrite -1}
		input_41_V_read {Type I LastRead 0 FirstWrite -1}
		input_42_V_read {Type I LastRead 0 FirstWrite -1}
		input_43_V_read {Type I LastRead 0 FirstWrite -1}
		input_44_V_read {Type I LastRead 0 FirstWrite -1}
		input_45_V_read {Type I LastRead 0 FirstWrite -1}
		input_46_V_read {Type I LastRead 0 FirstWrite -1}
		input_47_V_read {Type I LastRead 0 FirstWrite -1}
		input_48_V_read {Type I LastRead 0 FirstWrite -1}
		input_49_V_read {Type I LastRead 0 FirstWrite -1}
		input_50_V_read {Type I LastRead 0 FirstWrite -1}
		input_51_V_read {Type I LastRead 0 FirstWrite -1}
		input_52_V_read {Type I LastRead 0 FirstWrite -1}
		input_53_V_read {Type I LastRead 0 FirstWrite -1}
		input_54_V_read {Type I LastRead 0 FirstWrite -1}
		input_55_V_read {Type I LastRead 0 FirstWrite -1}
		input_56_V_read {Type I LastRead 0 FirstWrite -1}
		input_57_V_read {Type I LastRead 0 FirstWrite -1}
		input_58_V_read {Type I LastRead 0 FirstWrite -1}
		input_59_V_read {Type I LastRead 0 FirstWrite -1}
		input_60_V_read {Type I LastRead 0 FirstWrite -1}
		input_61_V_read {Type I LastRead 0 FirstWrite -1}
		input_62_V_read {Type I LastRead 0 FirstWrite -1}
		input_63_V_read {Type I LastRead 0 FirstWrite -1}
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
		output_16_V_read {Type I LastRead 0 FirstWrite -1}
		output_17_V_read {Type I LastRead 0 FirstWrite -1}
		output_18_V_read {Type I LastRead 0 FirstWrite -1}
		output_19_V_read {Type I LastRead 0 FirstWrite -1}
		output_20_V_read {Type I LastRead 0 FirstWrite -1}
		output_21_V_read {Type I LastRead 0 FirstWrite -1}
		output_22_V_read {Type I LastRead 0 FirstWrite -1}
		output_23_V_read {Type I LastRead 0 FirstWrite -1}
		output_24_V_read {Type I LastRead 0 FirstWrite -1}
		output_25_V_read {Type I LastRead 0 FirstWrite -1}
		output_26_V_read {Type I LastRead 0 FirstWrite -1}
		output_27_V_read {Type I LastRead 0 FirstWrite -1}
		output_28_V_read {Type I LastRead 0 FirstWrite -1}
		output_29_V_read {Type I LastRead 0 FirstWrite -1}
		output_30_V_read {Type I LastRead 0 FirstWrite -1}
		output_31_V_read {Type I LastRead 0 FirstWrite -1}
		mask {Type I LastRead 3 FirstWrite -1}
		mask158 {Type I LastRead 3 FirstWrite -1}
		mask159 {Type I LastRead 3 FirstWrite -1}
		mask160 {Type I LastRead 3 FirstWrite -1}
		mask161 {Type I LastRead 3 FirstWrite -1}
		mask162 {Type I LastRead 3 FirstWrite -1}
		mask163 {Type I LastRead 3 FirstWrite -1}
		mask164 {Type I LastRead 3 FirstWrite -1}
		mask165 {Type I LastRead 3 FirstWrite -1}
		mask166 {Type I LastRead 3 FirstWrite -1}
		mask167 {Type I LastRead 3 FirstWrite -1}
		mask168 {Type I LastRead 3 FirstWrite -1}
		mask169 {Type I LastRead 3 FirstWrite -1}
		mask170 {Type I LastRead 3 FirstWrite -1}
		mask171 {Type I LastRead 3 FirstWrite -1}
		mask172 {Type I LastRead 3 FirstWrite -1}
		mask173 {Type I LastRead 3 FirstWrite -1}
		mask174 {Type I LastRead 3 FirstWrite -1}
		mask175 {Type I LastRead 3 FirstWrite -1}
		mask176 {Type I LastRead 3 FirstWrite -1}
		mask177 {Type I LastRead 3 FirstWrite -1}
		mask178 {Type I LastRead 3 FirstWrite -1}
		mask179 {Type I LastRead 3 FirstWrite -1}
		mask180 {Type I LastRead 3 FirstWrite -1}
		mask181 {Type I LastRead 3 FirstWrite -1}
		mask182 {Type I LastRead 3 FirstWrite -1}
		mask183 {Type I LastRead 3 FirstWrite -1}
		mask184 {Type I LastRead 3 FirstWrite -1}
		mask185 {Type I LastRead 3 FirstWrite -1}
		mask186 {Type I LastRead 3 FirstWrite -1}
		mask187 {Type I LastRead 3 FirstWrite -1}
		mask188 {Type I LastRead 3 FirstWrite -1}
		mask_offset {Type I LastRead 0 FirstWrite -1}
		b2_V {Type I LastRead -1 FirstWrite -1}
		w2_V_0 {Type I LastRead -1 FirstWrite -1}
		w2_V_1 {Type I LastRead -1 FirstWrite -1}
		w2_V_2 {Type I LastRead -1 FirstWrite -1}
		w2_V_3 {Type I LastRead -1 FirstWrite -1}
		w2_V_4 {Type I LastRead -1 FirstWrite -1}
		w2_V_5 {Type I LastRead -1 FirstWrite -1}
		w2_V_6 {Type I LastRead -1 FirstWrite -1}
		w2_V_7 {Type I LastRead -1 FirstWrite -1}
		w2_V_8 {Type I LastRead -1 FirstWrite -1}
		w2_V_9 {Type I LastRead -1 FirstWrite -1}
		w2_V_10 {Type I LastRead -1 FirstWrite -1}
		w2_V_11 {Type I LastRead -1 FirstWrite -1}
		w2_V_12 {Type I LastRead -1 FirstWrite -1}
		w2_V_13 {Type I LastRead -1 FirstWrite -1}
		w2_V_14 {Type I LastRead -1 FirstWrite -1}
		w2_V_15 {Type I LastRead -1 FirstWrite -1}
		w2_V_16 {Type I LastRead -1 FirstWrite -1}
		w2_V_17 {Type I LastRead -1 FirstWrite -1}
		w2_V_18 {Type I LastRead -1 FirstWrite -1}
		w2_V_19 {Type I LastRead -1 FirstWrite -1}
		w2_V_20 {Type I LastRead -1 FirstWrite -1}
		w2_V_21 {Type I LastRead -1 FirstWrite -1}
		w2_V_22 {Type I LastRead -1 FirstWrite -1}
		w2_V_23 {Type I LastRead -1 FirstWrite -1}
		w2_V_24 {Type I LastRead -1 FirstWrite -1}
		w2_V_25 {Type I LastRead -1 FirstWrite -1}
		w2_V_26 {Type I LastRead -1 FirstWrite -1}
		w2_V_27 {Type I LastRead -1 FirstWrite -1}
		w2_V_28 {Type I LastRead -1 FirstWrite -1}
		w2_V_29 {Type I LastRead -1 FirstWrite -1}
		w2_V_30 {Type I LastRead -1 FirstWrite -1}
		w2_V_31 {Type I LastRead -1 FirstWrite -1}
		w2_V_63 {Type I LastRead -1 FirstWrite -1}
		w2_V_62 {Type I LastRead -1 FirstWrite -1}
		w2_V_61 {Type I LastRead -1 FirstWrite -1}
		w2_V_60 {Type I LastRead -1 FirstWrite -1}
		w2_V_59 {Type I LastRead -1 FirstWrite -1}
		w2_V_58 {Type I LastRead -1 FirstWrite -1}
		w2_V_57 {Type I LastRead -1 FirstWrite -1}
		w2_V_56 {Type I LastRead -1 FirstWrite -1}
		w2_V_55 {Type I LastRead -1 FirstWrite -1}
		w2_V_54 {Type I LastRead -1 FirstWrite -1}
		w2_V_53 {Type I LastRead -1 FirstWrite -1}
		w2_V_52 {Type I LastRead -1 FirstWrite -1}
		w2_V_51 {Type I LastRead -1 FirstWrite -1}
		w2_V_50 {Type I LastRead -1 FirstWrite -1}
		w2_V_49 {Type I LastRead -1 FirstWrite -1}
		w2_V_48 {Type I LastRead -1 FirstWrite -1}
		w2_V_47 {Type I LastRead -1 FirstWrite -1}
		w2_V_46 {Type I LastRead -1 FirstWrite -1}
		w2_V_45 {Type I LastRead -1 FirstWrite -1}
		w2_V_44 {Type I LastRead -1 FirstWrite -1}
		w2_V_43 {Type I LastRead -1 FirstWrite -1}
		w2_V_42 {Type I LastRead -1 FirstWrite -1}
		w2_V_41 {Type I LastRead -1 FirstWrite -1}
		w2_V_40 {Type I LastRead -1 FirstWrite -1}
		w2_V_39 {Type I LastRead -1 FirstWrite -1}
		w2_V_38 {Type I LastRead -1 FirstWrite -1}
		w2_V_37 {Type I LastRead -1 FirstWrite -1}
		w2_V_36 {Type I LastRead -1 FirstWrite -1}
		w2_V_35 {Type I LastRead -1 FirstWrite -1}
		w2_V_34 {Type I LastRead -1 FirstWrite -1}
		w2_V_33 {Type I LastRead -1 FirstWrite -1}
		w2_V_32 {Type I LastRead -1 FirstWrite -1}}
	generate_binary_matr {
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
		matrix_32 {Type O LastRead -1 FirstWrite 17}
		matrix_33 {Type O LastRead -1 FirstWrite 17}
		matrix_34 {Type O LastRead -1 FirstWrite 18}
		matrix_35 {Type O LastRead -1 FirstWrite 18}
		matrix_36 {Type O LastRead -1 FirstWrite 19}
		matrix_37 {Type O LastRead -1 FirstWrite 19}
		matrix_38 {Type O LastRead -1 FirstWrite 20}
		matrix_39 {Type O LastRead -1 FirstWrite 20}
		matrix_40 {Type O LastRead -1 FirstWrite 21}
		matrix_41 {Type O LastRead -1 FirstWrite 21}
		matrix_42 {Type O LastRead -1 FirstWrite 22}
		matrix_43 {Type O LastRead -1 FirstWrite 22}
		matrix_44 {Type O LastRead -1 FirstWrite 23}
		matrix_45 {Type O LastRead -1 FirstWrite 23}
		matrix_46 {Type O LastRead -1 FirstWrite 24}
		matrix_47 {Type O LastRead -1 FirstWrite 24}
		matrix_48 {Type O LastRead -1 FirstWrite 25}
		matrix_49 {Type O LastRead -1 FirstWrite 25}
		matrix_50 {Type O LastRead -1 FirstWrite 26}
		matrix_51 {Type O LastRead -1 FirstWrite 26}
		matrix_52 {Type O LastRead -1 FirstWrite 27}
		matrix_53 {Type O LastRead -1 FirstWrite 27}
		matrix_54 {Type O LastRead -1 FirstWrite 28}
		matrix_55 {Type O LastRead -1 FirstWrite 28}
		matrix_56 {Type O LastRead -1 FirstWrite 29}
		matrix_57 {Type O LastRead -1 FirstWrite 29}
		matrix_58 {Type O LastRead -1 FirstWrite 30}
		matrix_59 {Type O LastRead -1 FirstWrite 30}
		matrix_60 {Type O LastRead -1 FirstWrite 31}
		matrix_61 {Type O LastRead -1 FirstWrite 31}
		matrix_62 {Type O LastRead -1 FirstWrite 32}
		matrix_63 {Type O LastRead -1 FirstWrite 32}
		global_lfsr_seed_V {Type IO LastRead 0 FirstWrite 1}}
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
		w3_V_31 {Type I LastRead -1 FirstWrite -1}}
	dense_lay_9_64_s {
		input_0_V_read {Type I LastRead 0 FirstWrite -1}
		input_1_V_read {Type I LastRead 0 FirstWrite -1}
		input_2_V_read {Type I LastRead 0 FirstWrite -1}
		input_3_V_read {Type I LastRead 0 FirstWrite -1}
		input_4_V_read {Type I LastRead 0 FirstWrite -1}
		input_5_V_read {Type I LastRead 0 FirstWrite -1}
		input_6_V_read {Type I LastRead 0 FirstWrite -1}
		input_7_V_read {Type I LastRead 0 FirstWrite -1}
		input_8_V_read {Type I LastRead 0 FirstWrite -1}
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
		output_16_V_read {Type I LastRead 0 FirstWrite -1}
		output_17_V_read {Type I LastRead 0 FirstWrite -1}
		output_18_V_read {Type I LastRead 0 FirstWrite -1}
		output_19_V_read {Type I LastRead 0 FirstWrite -1}
		output_20_V_read {Type I LastRead 0 FirstWrite -1}
		output_21_V_read {Type I LastRead 0 FirstWrite -1}
		output_22_V_read {Type I LastRead 0 FirstWrite -1}
		output_23_V_read {Type I LastRead 0 FirstWrite -1}
		output_24_V_read {Type I LastRead 0 FirstWrite -1}
		output_25_V_read {Type I LastRead 0 FirstWrite -1}
		output_26_V_read {Type I LastRead 0 FirstWrite -1}
		output_27_V_read {Type I LastRead 0 FirstWrite -1}
		output_28_V_read {Type I LastRead 0 FirstWrite -1}
		output_29_V_read {Type I LastRead 0 FirstWrite -1}
		output_30_V_read {Type I LastRead 0 FirstWrite -1}
		output_31_V_read {Type I LastRead 0 FirstWrite -1}
		output_32_V_read {Type I LastRead 0 FirstWrite -1}
		output_33_V_read {Type I LastRead 0 FirstWrite -1}
		output_34_V_read {Type I LastRead 0 FirstWrite -1}
		output_35_V_read {Type I LastRead 0 FirstWrite -1}
		output_36_V_read {Type I LastRead 0 FirstWrite -1}
		output_37_V_read {Type I LastRead 0 FirstWrite -1}
		output_38_V_read {Type I LastRead 0 FirstWrite -1}
		output_39_V_read {Type I LastRead 0 FirstWrite -1}
		output_40_V_read {Type I LastRead 0 FirstWrite -1}
		output_41_V_read {Type I LastRead 0 FirstWrite -1}
		output_42_V_read {Type I LastRead 0 FirstWrite -1}
		output_43_V_read {Type I LastRead 0 FirstWrite -1}
		output_44_V_read {Type I LastRead 0 FirstWrite -1}
		output_45_V_read {Type I LastRead 0 FirstWrite -1}
		output_46_V_read {Type I LastRead 0 FirstWrite -1}
		output_47_V_read {Type I LastRead 0 FirstWrite -1}
		output_48_V_read {Type I LastRead 0 FirstWrite -1}
		output_49_V_read {Type I LastRead 0 FirstWrite -1}
		output_50_V_read {Type I LastRead 0 FirstWrite -1}
		output_51_V_read {Type I LastRead 0 FirstWrite -1}
		output_52_V_read {Type I LastRead 0 FirstWrite -1}
		output_53_V_read {Type I LastRead 0 FirstWrite -1}
		output_54_V_read {Type I LastRead 0 FirstWrite -1}
		output_55_V_read {Type I LastRead 0 FirstWrite -1}
		output_56_V_read {Type I LastRead 0 FirstWrite -1}
		output_57_V_read {Type I LastRead 0 FirstWrite -1}
		output_58_V_read {Type I LastRead 0 FirstWrite -1}
		output_59_V_read {Type I LastRead 0 FirstWrite -1}
		output_60_V_read {Type I LastRead 0 FirstWrite -1}
		output_61_V_read {Type I LastRead 0 FirstWrite -1}
		output_62_V_read {Type I LastRead 0 FirstWrite -1}
		output_63_V_read {Type I LastRead 0 FirstWrite -1}
		mask {Type I LastRead 1 FirstWrite -1}
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
		mask93 {Type I LastRead 1 FirstWrite -1}
		mask94 {Type I LastRead 1 FirstWrite -1}
		mask95 {Type I LastRead 1 FirstWrite -1}
		mask96 {Type I LastRead 1 FirstWrite -1}
		mask97 {Type I LastRead 1 FirstWrite -1}
		mask98 {Type I LastRead 1 FirstWrite -1}
		mask99 {Type I LastRead 1 FirstWrite -1}
		mask100 {Type I LastRead 1 FirstWrite -1}
		mask101 {Type I LastRead 1 FirstWrite -1}
		mask102 {Type I LastRead 1 FirstWrite -1}
		mask103 {Type I LastRead 1 FirstWrite -1}
		mask104 {Type I LastRead 1 FirstWrite -1}
		mask105 {Type I LastRead 1 FirstWrite -1}
		mask106 {Type I LastRead 1 FirstWrite -1}
		mask107 {Type I LastRead 1 FirstWrite -1}
		mask108 {Type I LastRead 1 FirstWrite -1}
		mask109 {Type I LastRead 1 FirstWrite -1}
		mask110 {Type I LastRead 1 FirstWrite -1}
		mask111 {Type I LastRead 1 FirstWrite -1}
		mask112 {Type I LastRead 1 FirstWrite -1}
		mask113 {Type I LastRead 1 FirstWrite -1}
		mask114 {Type I LastRead 1 FirstWrite -1}
		mask115 {Type I LastRead 1 FirstWrite -1}
		mask116 {Type I LastRead 1 FirstWrite -1}
		mask117 {Type I LastRead 1 FirstWrite -1}
		mask118 {Type I LastRead 1 FirstWrite -1}
		mask119 {Type I LastRead 1 FirstWrite -1}
		mask120 {Type I LastRead 1 FirstWrite -1}
		mask121 {Type I LastRead 1 FirstWrite -1}
		mask122 {Type I LastRead 1 FirstWrite -1}
		mask123 {Type I LastRead 1 FirstWrite -1}
		mask124 {Type I LastRead 1 FirstWrite -1}
		mask125 {Type I LastRead 1 FirstWrite -1}
		mask126 {Type I LastRead 1 FirstWrite -1}
		mask127 {Type I LastRead 1 FirstWrite -1}
		mask128 {Type I LastRead 1 FirstWrite -1}
		mask129 {Type I LastRead 1 FirstWrite -1}
		mask130 {Type I LastRead 1 FirstWrite -1}
		mask131 {Type I LastRead 1 FirstWrite -1}
		mask132 {Type I LastRead 1 FirstWrite -1}
		mask133 {Type I LastRead 1 FirstWrite -1}
		mask134 {Type I LastRead 1 FirstWrite -1}
		mask135 {Type I LastRead 1 FirstWrite -1}
		mask136 {Type I LastRead 1 FirstWrite -1}
		mask137 {Type I LastRead 1 FirstWrite -1}
		mask138 {Type I LastRead 1 FirstWrite -1}
		mask139 {Type I LastRead 1 FirstWrite -1}
		mask140 {Type I LastRead 1 FirstWrite -1}
		mask141 {Type I LastRead 1 FirstWrite -1}
		mask142 {Type I LastRead 1 FirstWrite -1}
		mask_offset {Type I LastRead 0 FirstWrite -1}
		b1_V {Type I LastRead -1 FirstWrite -1}
		w1_V_0 {Type I LastRead -1 FirstWrite -1}
		w1_V_1 {Type I LastRead -1 FirstWrite -1}
		w1_V_2 {Type I LastRead -1 FirstWrite -1}
		w1_V_3 {Type I LastRead -1 FirstWrite -1}
		w1_V_4 {Type I LastRead -1 FirstWrite -1}
		w1_V_5 {Type I LastRead -1 FirstWrite -1}
		w1_V_6 {Type I LastRead -1 FirstWrite -1}
		w1_V_7 {Type I LastRead -1 FirstWrite -1}
		w1_V_8 {Type I LastRead -1 FirstWrite -1}}
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
		global_lfsr_seed_V {Type IO LastRead 0 FirstWrite 1}}
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
		w4_V_15 {Type I LastRead -1 FirstWrite -1}}
	calculate_variance {
		outputs_V_2 {Type I LastRead 1 FirstWrite -1}
		mean_V {Type I LastRead 0 FirstWrite -1}}
	generate_binary_matr_2 {
		matrix_0 {Type O LastRead -1 FirstWrite 9}
		matrix_1 {Type O LastRead -1 FirstWrite 9}
		matrix_2 {Type O LastRead -1 FirstWrite 10}
		matrix_3 {Type O LastRead -1 FirstWrite 10}
		matrix_4 {Type O LastRead -1 FirstWrite 11}
		matrix_5 {Type O LastRead -1 FirstWrite 11}
		matrix_6 {Type O LastRead -1 FirstWrite 12}
		matrix_7 {Type O LastRead -1 FirstWrite 12}
		matrix_8 {Type O LastRead -1 FirstWrite 13}
		matrix_9 {Type O LastRead -1 FirstWrite 13}
		matrix_10 {Type O LastRead -1 FirstWrite 14}
		matrix_11 {Type O LastRead -1 FirstWrite 14}
		matrix_12 {Type O LastRead -1 FirstWrite 15}
		matrix_13 {Type O LastRead -1 FirstWrite 15}
		matrix_14 {Type O LastRead -1 FirstWrite 16}
		matrix_15 {Type O LastRead -1 FirstWrite 16}
		zero_percentage {Type I LastRead 0 FirstWrite -1}
		global_lfsr_seed_V {Type IO LastRead 8 FirstWrite 9}}
	relu_64_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "189971", "Max" : "189971"}
	, {"Name" : "Interval", "Min" : "189972", "Max" : "189972"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	strm_in_V_V { ap_fifo {  { strm_in_V_V_dout fifo_data 0 27 }  { strm_in_V_V_empty_n fifo_status 0 1 }  { strm_in_V_V_read fifo_update 1 1 } } }
	strm_out_V_V { ap_fifo {  { strm_out_V_V_din fifo_data 1 27 }  { strm_out_V_V_full_n fifo_status 0 1 }  { strm_out_V_V_write fifo_update 1 1 } } }
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
