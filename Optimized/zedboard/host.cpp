#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>
#include <assert.h>

#include <iostream>
#include <fstream>

#include "typedefs.h"
#include "timer.h"
#include "model.h"
#include "mlp.h"
#include "data/test_data.cpp" // Include the test data directly

const int TEST_SIZE = 25;  // Number of rows in x_test
const int FEATURE_COUNT = 9; // Number of features (columns) per row

//--------------------------------------
// main function
//--------------------------------------
int main(int argc, char **argv) {
  printf("MAIN has started\n");
  // Open channels to the FPGA board.
  // These channels appear as files to the Linux OS
  int fdr = open("/dev/xillybus_read_32", O_RDONLY);
  int fdw = open("/dev/xillybus_write_32", O_WRONLY);

  // Check that the channels are correctly opened
  if ((fdr < 0) || (fdw < 0)) {
    fprintf(stderr, "Failed to open Xillybus device channels\n");
    exit(-1);
  }

  // Timer
  Timer timer("MLP FPGA");
  int nbytes;
  int error = 0;
  float correct = 0.0;

  //--------------------------------------------------------------------
  // Run it once without timer to test accuracy
  //--------------------------------------------------------------------
  std::cout << "Testing accuracy over " << TEST_SIZE << " test samples." << std::endl;
  // Send data to accelerator
  for (int i = 0; i < TEST_SIZE; ++i) {
    // Send 32-bit values (one feature at a time) through the write channel
    for (int j = 0; j < FEATURE_COUNT; j++) {
      bit32_t test_feature;
      test_feature = static_cast<bit32_t>(x_test[i][j]); // Convert to bit32_t
      // if (j == 0) {
      //   std::cout << "input is " << test_feature << "." << std::endl;
      // }
      //bit32_t sample = 4;
      // nbytes = write(fdw, (void *)&sample, sizeof(sample));
      // assert(nbytes == sizeof(sample));
      nbytes = write(fdw, (void *)&test_feature, sizeof(test_feature));
      assert(nbytes == sizeof(test_feature));
    }
  }

 for (int i = 0; i < TEST_SIZE; ++i) {
    // for (int j = 0; j< FEATURE_COUNT; j++) {
    //   bit32_t output;
    //   nbytes = read(fdr, (void *)&output, sizeof(output));
    //   assert(nbytes == sizeof(output));
    //   if (j == 0) {
    //     std::cout << "output is " << output << "." << std::endl;
    //   }
    // }

    bit32_t output_mean, output_variance;
    nbytes = read(fdr, (void *)&output_mean, sizeof(output_mean));
    assert(nbytes == sizeof(output_mean));
    nbytes = read(fdr, (void *)&output_variance, sizeof(output_variance));
    assert(nbytes == sizeof(output_variance));

    // Convert outputs to float
    // float predicted_mean = static_cast<float>(output_mean);
    // float predicted_variance = static_cast<float>(output_variance);

    // Validate mean output against ground truth
    // if (abs(predicted_mean - y_test[i]) < 1e-2) {
    //   correct += 1.0;
    // }

    std::cout << "Sample " << i << " -> Predicted mean: " << output_mean << ", Predicted variance: " << output_variance << std::endl;
  }

  // Calculate accuracy
  // std::cout << "Accuracy: " << (correct / TEST_SIZE) * 100.0 << "%" << std::endl;

  //--------------------------------------------------------------------
  // Run it 20 times to test performance
  //--------------------------------------------------------------------
  const int REPS = 20; // Number of repetitions
  std::cout << "Testing performance over " << REPS * TEST_SIZE << " test samples." << std::endl;
  timer.start();

  // // Send data to accelerator (REPS times)
  // for (int r = 0; r < REPS; r++) {
  //   for (int i = 0; i < TEST_SIZE; ++i) {
  //     for (int j = 0; j < FEATURE_COUNT; j++) {
  //       bit32_t test_feature;
  //       test_feature = static_cast<bit32_t>(x_test[i][j]);
  //       nbytes = write(fdw, (void *)&test_feature, sizeof(test_feature));
  //       assert(nbytes == sizeof(test_feature));
  //     }
  //   }
  // }

  // // Receive data from the accelerator (REPS times)
  // for (int r = 0; r < REPS; r++) {
  //   for (int i = 0; i < TEST_SIZE; ++i) {
  //     bit32_t output_mean, output_variance;
  //     nbytes = read(fdr, (void *)&output_mean, sizeof(output_mean));
  //     assert(nbytes == sizeof(output_mean));
  //     nbytes = read(fdr, (void *)&output_variance, sizeof(output_variance));
  //     assert(nbytes == sizeof(output_variance));
  //   }
  // }

  printf("haha\n");

  timer.stop(); // total time wil be automatically printed upon exit.

  return 0;
}
