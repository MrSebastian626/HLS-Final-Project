#=============================================================================
# run.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the digit recongnition design.

# Project name
set hls_prj mlp.prj

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files mlp.cpp -cflags "-std=c++11"
add_files -tb mlp_test.cpp -cflags "-std=c++11"

open_solution "solution1"
# Use Zynq device
set_part {xc7z020clg484-1}

# Target clock period is 10ns
create_clock -period 10 -name default

# Optimizations

# Dense
set_directive_unroll dense_lay/dense_inner
set_directive_pipeline dense_lay/dense_outer
set_directive_array_reshape -type complete -dim 1 mlp_xcel input
set_directive_array_partition -type complete -dim 0 mlp_xcel w1
set_directive_array_partition -type complete -dim 0 mlp_xcel w2
set_directive_array_partition -type complete -dim 0 mlp_xcel w3
set_directive_array_partition -type complete -dim 0 mlp_xcel w4
set_directive_array_partition -type complete -dim 0 mlp_xcel w5


# Final
# set_directive_unroll final/final_inner
# set_directive_pipeline final/final_outer

# Relu 0
# set_directive_unroll relu0/relu_0

# Calc Mean
# set_directive_unroll calculate_mean/iterate_runs_mean

# Calc Var
# set_directive_unroll calculate_variance/iterate_runs_var

# Gen Matrix 0
# set_directive_unroll generate_binary_matrix0/gen0_neur
# set_directive_pipeline generate_binary_matrix0/gen0_iter

# Monte Carlo
# set_directive_pipeline mlp_monte_carlo/iterate_num_monte_runs

############################################

# Simulate the C++ design
csim_design -O
# Synthesize the design
csynth_design
export_design -format ip_catalog 

exit
