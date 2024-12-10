This project is public on github at the following url: https://github.com/MrSebastian626/HLS-Final-Project

Welcome to our electric power consumption prediction HLS project!

In this directory, you should be able to see 2 directories: a Baseline directory
and an Optimized directory. The baseline directory contains the original synthesizeable
code while the optimized directory was a duplicate of the baseline that we then
modified for speedup. As the file structures for each of these directories are the 
same, all the commands listed in this read me apply to either directory once running
`cd *Optimized or Baseline*`.

To run the C++ code with a generated output, enter the ecelinux directory and
type "make" into the terminal. The terminal should print out the accuracy of the 
MLP model on the test feature vectors in our defined test set. If you would like
a more detailed breakdown of the predictions for each test vector, the log for all
the tests can be found in the out.dat file.

To clean the project of any generated information of RTL code, type "make clean" 
into the terminal.

To synthesize the RTL code and see the simulation results of the project, enter
the ecelinux directory and type "vivado_hls -f run.tcl". This follows the directives
in the run.tcl file and generates the necessary RTL code for the FPGA later. It also
produces a project directory where you can find the synthesis report to see simulated
speedup and resource usage metrics.

To run the code on the FPGA, you must generate the RTL code from the previous command
and subsequently follow the commands of the cordic tutorial to generate the bitstream
and mount it onto the FPGA. After that you must send the zip file of the project to the
FPGA and run the design there.

This project also contains some jupyter notebook files for training the model that
is used for this project. We did not remove any previous iterations of the model 
or different model ideas from the repository as we found them to be a useful denotation
of progress.