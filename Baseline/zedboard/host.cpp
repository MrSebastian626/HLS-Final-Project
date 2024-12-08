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
      data_t test_feature;
      test_feature = x_test[i][j];

      long long raw_bits = *(long long *)&test_feature; // Cast to raw 64-bit representation
      std::cout << "Sending to write channel: " << test_feature << " (raw bits: " << std::hex << raw_bits << ")" << std::dec << std::endl;

      bit32_t lower = test_feature.range(31, 0);
      bit32_t upper = test_feature.range(63, 32);
      nbytes = write(fdw, (void *)&lower, sizeof(lower));
      assert(nbytes == sizeof(lower));
      nbytes = write(fdw, (void *)&upper, sizeof(upper));
      assert(nbytes == sizeof(upper));      
    }
  }

  for (int i = 0; i < TEST_SIZE; ++i) {
    bit32_t low, high;
    nbytes = read(fdr, (void *)&low, sizeof(low));
    assert(nbytes == sizeof(low));
    nbytes = read(fdr, (void *)&high, sizeof(high));
    assert(nbytes == sizeof(high));
    data_t output_mean;
    output_mean.range(31, 0) = low.range(31, 0);
    output_mean.range(63, 32) = high.range(31, 0);

    nbytes = read(fdr, (void *)&low, sizeof(low));
    assert(nbytes == sizeof(low));
    nbytes = read(fdr, (void *)&high, sizeof(high));
    assert(nbytes == sizeof(high));
    data_t output_variance;
    output_variance.range(31, 0) = low.range(31, 0);
    output_variance.range(63, 32) = high.range(31, 0);

    long long raw_mean = *(long long *)&output_mean;
    std::cout << "Raw mean bytes (hex): 0x" << std::hex << raw_mean << std::dec << std::endl;
    std::cout << "mean: " << output_mean << std::endl;

    // Validate mean output against ground truth
    if (!(y_test[i] < (static_cast<float>(output_mean) - sqrt(static_cast<float>(output_variance))) ||
        y_test[i] > (static_cast<float>(output_mean) + sqrt(static_cast<float>(output_variance))))) {
      correct += 1.0;
    }

    std::cout << "Sample " << i << " -> Predicted mean: " << output_mean << ", Predicted variance: " << output_variance << std::endl;
  }

  // Calculate accuracy
  std::cout << "Accuracy: " << (correct / TEST_SIZE) * 100.0 << "%" << std::endl;

  //--------------------------------------------------------------------
  // Run it 20 times to test performance
  //--------------------------------------------------------------------
  const int REPS = 20; // Number of repetitions
  std::cout << "Testing over " << REPS * TEST_SIZE << " test samples." << std::endl;
  timer.start();

  // Send data to accelerator (REPS times)
  for (int r = 0; r < REPS; r++) {
    for (int i = 0; i < TEST_SIZE; ++i) {
      for (int j = 0; j < FEATURE_COUNT; j++) {
        data_t test_feature;
        test_feature = x_test[i][j];
        bit32_t lower = test_feature.range(31, 0);
        bit32_t upper = test_feature.range(63, 32);
        nbytes = write(fdw, (void *)&lower, sizeof(lower));
        assert(nbytes == sizeof(lower));
        nbytes = write(fdw, (void *)&upper, sizeof(upper));
        assert(nbytes == sizeof(upper));
      }
    }
  }

  // Receive data from the accelerator (REPS times)
  for (int r = 0; r < REPS; r++) {
    for (int i = 0; i < TEST_SIZE; ++i) {
      bit32_t low, high;
      nbytes = read(fdr, (void *)&low, sizeof(low));
      assert(nbytes == sizeof(low));
      nbytes = read(fdr, (void *)&high, sizeof(high));
      assert(nbytes == sizeof(high));
      data_t output_mean;
      output_mean.range(31, 0) = low.range(31, 0);
      output_mean.range(63, 32) = high.range(31, 0);

      nbytes = read(fdr, (void *)&low, sizeof(low));
      assert(nbytes == sizeof(low));
      nbytes = read(fdr, (void *)&high, sizeof(high));
      assert(nbytes == sizeof(high));
      data_t output_variance;
      output_variance.range(31, 0) = low.range(31, 0);
      output_variance.range(63, 32) = high.range(31, 0);
    }
  }

  timer.stop(); // total time wil be automatically printed upon exit.

  return 0;
}
