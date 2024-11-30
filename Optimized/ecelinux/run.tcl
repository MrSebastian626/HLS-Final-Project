#=============================================================================
# run.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the digit recongnition design.

# Open/reset the project
open_project -reset mlp.prj

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files mlp.cpp
add_files -tb mlp_test.cpp

open_solution "solution1"
# Use Zynq device
set_part xc7z020clg484-1

# Target clock period is 10ns
create_clock -period 10 -name default

# Optimizations

# Dense 0
set_directive_unroll dense_lay0/dense0_inner
set_directive_pipeline dense_lay0/dense0_outer

# Dense 1
set_directive_unroll dense_lay1/dense1_inner
set_directive_pipeline dense_lay1/dense1_outer

# Dense 2
set_directive_unroll dense_lay2/dense2_inner
set_directive_pipeline dense_lay2/dense2_outer

# Dense 3
set_directive_unroll dense_lay3/dense3_inner
set_directive_pipeline dense_lay3/dense3_outer

# Final
set_directive_unroll final/final_inner
set_directive_pipeline final/final_outer

# Relu 0
set_directive_unroll relu0/relu_0

# Relu 1
set_directive_unroll relu1/relu_1

# Relu 2
set_directive_unroll relu2/relu_2

# Relu 3
set_directive_unroll relu3/relu_3

# Relu 4
set_directive_unroll relu4/relu_4

# Calc Mean
set_directive_unroll calculate_mean/iterate_runs_mean

# Calc Var
set_directive_unroll calculate_variance/iterate_runs_var

# Gen Matrix 0
set_directive_unroll generate_binary_matrix0/gen0_neur
set_directive_pipeline generate_binary_matrix0/gen0_iter

# Gen Matrix 1
set_directive_unroll generate_binary_matrix1/gen1_neur
set_directive_pipeline generate_binary_matrix1/gen1_iter

# Gen Matrix 2
set_directive_unroll generate_binary_matrix2/gen2_neur
set_directive_pipeline generate_binary_matrix2/gen2_iter

# Gen Matrix 3
set_directive_unroll generate_binary_matrix3/gen3_neur
set_directive_pipeline generate_binary_matrix3/gen3_iter

# Monte Carlo
set_directive_pipeline mlp_monte_carlo/iterate_num_monte_runs

############################################

# Simulate the C++ design
csim_design
# Synthesize the design
csynth_design
export_design -format ip_catalog 

exit
