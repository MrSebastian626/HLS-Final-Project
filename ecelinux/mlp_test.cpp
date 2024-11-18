//=========================================================================
// mlp_test.cpp
//=========================================================================
// @brief: testbench for mlp power usage estimation program

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

#include "mlp.h"
#include "timer.h"
#include "typedefs.h"
#include "data/test_data.cpp"

// Define a structured input for the MLP
// struct mlp_input {
//   float feature1;
//   float feature2;
//   float feature3;
//   float feature4;
//   float feature5;
//   float feature6;
//   float feature7;
//   float feature8;
//   float feature9;
// };

//------------------------------------------------------------------------
// MLP testbench
//------------------------------------------------------------------------
int main() {
  // Output file that saves the test bench results
  std::ofstream outfile;
  outfile.open("out.dat");

  // HLS streams for communicating with the MLP block
  hls::stream<data_t[x_num_cols]> mlp_in;
  hls::stream<data_t[2]> mlp_out;

  // Number of test instances
  const int N = x_num_rows; // Can change

  // Timer
  Timer timer("MLP FPGA");

  int nbytes;
  int error = 0;
  int num_test_insts = 0;

  //--------------------------------------------------------------------
  // Send data 
  //--------------------------------------------------------------------
  for (int i = 0; i < N; ++i) {
    mlp_in.write(x_test[i]);
  }

  //--------------------------------------------------------------------
  // Execute the MLP sim and receive data
  //--------------------------------------------------------------------
  for (int i = 0; i < N; ++i) {
    // Call design under test (DUT)
    dut(mlp_in, mlp_out);

    // Read result
    MeanVariance output_mv = mlp_out.read();

    // data_t MLP_response[2] = mlp_out.read();

    // data_t mean = MLP_response[0];
    // data_t variance = MLP_response[1];

    data_t mean = output_mv.mean;
    data_t variance = output_mv.variance;

    num_test_insts++;

    // Check whether our prediction is in our wanted range
    if (y_test[i] < (mean - sqrt(variance)) || y_test[i] > (mean + sqrt(variance))) {
      error++;
    }
  }

  timer.stop();

  // Report overall error out of all testing instances
  std::cout << "Number of test instances = " << num_test_insts << std::endl;
  std::cout << "Overall Error Rate = " << std::setprecision(3)
            << ((double)error / num_test_insts) * 100 << "%" << std::endl;
  outfile << "Number of test instances = " << num_test_insts << std::endl;
  outfile << "Overall Error Rate = " << std::setprecision(3)
          << ((double)error / num_test_insts) * 100 << "%" << std::endl;

  // Close input file for the testing set
  myfile.close();
  

  // Close output file
  outfile.close();

  return 0;
}
