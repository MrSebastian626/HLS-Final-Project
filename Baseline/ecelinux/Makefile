#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and synthesizes the cordic program
#
# @desc: 1. "make" runs csim by default
#        2. "make csim" compiles & executes the fixed-point implementation
#        3. "make clean" cleans up the directory


# Extract Vivado HLS include path
VHLS_PATH := $(dir $(shell which vivado_hls))/..
VHLS_INC ?= ${VHLS_PATH}/include

CFLAGS = -g -I${VHLS_INC} 

all: csim

csim: mlp.cpp mlp_test.cpp
	@echo "Compiling & simulating MLP on amdpool ..."
	g++ ${CFLAGS} $^ -o mlp
	./mlp

bitstream: 
	@echo "Synthesizing MLP and creating bitstream on amdpool ..."
	vivado_hls  -f run.tcl
	./run_bitstream.sh

clean:
	rm -rf mlp *.dat *.prj *.log
	rm -rf zedboard_project* xillydemo.bit
