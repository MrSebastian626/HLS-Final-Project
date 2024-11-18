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

############################################

# Simulate the C++ design
# csim_design
# Synthesize the design
csynth_design
export_design -format ip_catalog 

exit
