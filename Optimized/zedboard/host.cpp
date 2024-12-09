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

const int TEST_SIZE = 150;  // Number of rows in x_test
const int FEATURE_COUNT = 9; // Number of features (columns) per row

//--------------------------------------
// main function
//--------------------------------------
int main(int argc, char **argv) {
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
      test_feature = static_cast<bit32_t>(x_test[i][j] & 0x1FFFFFF); // Convert to bit32_t
      nbytes = write(fdw, (void *)&test_feature, sizeof(test_feature));
      assert(nbytes == sizeof(test_feature));
    }
  }

  for (int i = 0; i < TEST_SIZE; ++i) {
    data_t output_mean, output_variance;
    nbytes = read(fdr, (void *)&output_mean, sizeof(output_mean));
    assert(nbytes == sizeof(output_mean));
    nbytes = read(fdr, (void *)&output_variance, sizeof(output_variance));
    assert(nbytes == sizeof(output_variance));

    // Convert outputs to float
    float predicted_mean = static_cast<float>(output_mean);
    float predicted_variance = static_cast<float>(output_variance);

    // Validate mean output against ground truth
    if (!(y_test[i] < predicted_mean - predicted_variance) ||
        y_test[i] > (predicted_mean + predicted_variance)) {
      correct += 1.0;
    }

    std::cout << "Sample " << i << " -> Predicted mean: " << predicted_mean << ", Predicted variance: " << predicted_variance << std::endl;
  }

  // Calculate accuracy
  std::cout << "Accuracy: " << (correct / TEST_SIZE) * 100.0 << "%" << std::endl;

  //--------------------------------------------------------------------
  // Run it 20 times to test performance
  //--------------------------------------------------------------------
  const int REPS = 20; // Number of repetitions
  std::cout << "Testing performance over " << REPS * TEST_SIZE << " test samples." << std::endl;
  timer.start();

  // Send data to accelerator (REPS times)
  for (int r = 0; r < REPS; r++) {
    for (int i = 0; i < TEST_SIZE; ++i) {
      for (int j = 0; j < FEATURE_COUNT; j++) {
        bit32_t test_feature;
        test_feature = static_cast<bit32_t>(x_test[i][j]);
        nbytes = write(fdw, (void *)&test_feature, sizeof(test_feature));
        assert(nbytes == sizeof(test_feature));
      }
    }
  }

  // Receive data from the accelerator (REPS times)
  for (int r = 0; r < REPS; r++) {
    for (int i = 0; i < TEST_SIZE; ++i) {
      data_t output_mean, output_variance;
      nbytes = read(fdr, (void *)&output_mean, sizeof(output_mean));
      assert(nbytes == sizeof(output_mean));
      nbytes = read(fdr, (void *)&output_variance, sizeof(output_variance));
      assert(nbytes == sizeof(output_variance));
    }
  }

  timer.stop(); // total time wil be automatically printed upon exit.

  return 0;
}
