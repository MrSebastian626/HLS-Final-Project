#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and runs the cordic program
#
# @desc: 1. "make" or "make fpga" invokes the HW accelerator
#        2. "make fpga_batch" invokes the HW accelerator using batch mode
#        3. "make clean" cleans up the directory


INC_PATH=/usr/include/vivado_hls
CFLAGS = -I${INC_PATH} -DHLS_NO_XIL_FPO_LIB -O3

all: sw

sw: mlp.cpp mlp_test.cpp
	@echo "Compiling & executing MLP software program on ARM ..."
	g++ ${CFLAGS} mlp.cpp mlp_test.cpp -o mlp
	./mlp

fpga: host.cpp
	@echo "Compiling host program & running MLP accelerator ..."
	g++ -I${INC_PATH} $< -o mlp-fpga
	./mlp-fpga

fpga_batch: host_batch.cpp
	@echo "Compiling host program (batch) & running MLP accelerator ..."
	g++ -I${INC_PATH} $< -o mlp-fpga-batch
	./mlp-fpga-batch

clean:
	@echo "Clean up output files"
	rm -f mlp-fpga mlp-fpga-batch  *.dat
