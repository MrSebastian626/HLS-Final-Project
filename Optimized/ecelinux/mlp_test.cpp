//=========================================================================
// mlp_test.cpp
//=========================================================================
// @brief: testbench for mlp power usage estimation program

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <hls_math.h>

#include "mlp.h"
#include "timer.h"
#include "typedefs.h"
#include "data/test_data.cpp"

//------------------------------------------------------------------------
// MLP testbench
//------------------------------------------------------------------------
int main()
{
  // Output file that saves the test bench results
  std::ofstream outfile;
  outfile.open("out.dat");

  // HLS streams for communicating with the MLP block
  hls::stream<data_t> mlp_in;
  hls::stream<data_t> mlp_out;

  // Number of test instances
  const int N = x_num_rows; // Can change

  // Timer
  Timer timer("MLP FPGA");

  int nbytes;
  int error = 0;
  int num_test_insts = 0;
  int avg_distance = 0;

  //--------------------------------------------------------------------
  // Send data
  //--------------------------------------------------------------------
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < x_num_cols; j++)
      mlp_in.write(x_test[i][j]);
  }

  //--------------------------------------------------------------------
  // Execute the MLP sim and receive data
  //--------------------------------------------------------------------
  for (int i = 0; i < N; ++i)
  {
    // Call design under test (DUT)
    dut(mlp_in, mlp_out);

    // Read result
    data_t mean = mlp_out.read();
    data_t dev = mlp_out.read();

    num_test_insts++;
    avg_distance += int(abs(static_cast<float>(mean)-y_test[i]));
    outfile << "Mean = " << mean << std::endl;
    outfile << "Standard Deviation = " << (dev) << std::endl;
    outfile << "Actual = " << y_test[i] << std::endl;
    // Check whether our prediction is in our wanted range
    if (y_test[i] < (static_cast<float>(mean) - static_cast<float>(dev)) ||
        y_test[i] > (static_cast<float>(mean) + static_cast<float>(dev)))
    {
      error++;
      outfile << "Error! " << std::endl;
    }
    else
    {
      outfile << "Success! " << std::endl;
    }
  }

  timer.stop();

  // Report overall error out of all testing instances
  std::cout << "Number of test instances = " << num_test_insts << std::endl;
  std::cout << "Overall Error Rate = " << std::setprecision(3)
              << ((double)error / num_test_insts) * 100 << "%" << std::endl;
  std::cout << "Average Distance From Expected = " << std::setprecision(6)
            << ((double)avg_distance / num_test_insts) << std::endl;
  outfile << "Number of test instances = " << num_test_insts << std::endl;
  outfile << "Overall Error Rate = " << std::setprecision(3)
          << ((double)error / num_test_insts) * 100 << "%" << std::endl;
  outfile << "Average Distance From Expected = " << std::setprecision(6)
            << ((double)avg_distance / num_test_insts) << std::endl;

  // Close output file
  outfile.close();

  return 0;
}
