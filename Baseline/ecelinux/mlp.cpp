//=========================================================================
// mlp.cpp
//=========================================================================
// @brief : An MLP implementation.

#include <hls_stream.h>
#include <iostream>
#include "mlp.h"
#include "layer.h"

//-----------------------------------
// dut function (top module)
//-----------------------------------
// @param[in]  : strm_in - input stream
// @param[out] : strm_out - output stream
//void dut(hls::stream<data_t> &strm_in, hls::stream<data_t> &strm_out)
void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out)
{
  data_t input[N_INPUTS];
  data_t mean_output;
  data_t variance_output;

  // Read input data from stream
  for (int i = 0; i < N_INPUTS; i++)
  {
    //input[i] = strm_in.read();
    bit32_t lower = strm_in.read();
    bit32_t upper = strm_in.read();
    input[i].range(31, 0) = lower.range(31, 0);
    input[i].range(63, 32) = upper.range(31, 0);
 //   std::cout << "input: " << static_cast<float>(input[i]) << std::endl;
 //   long long raw_input_bytes = *(long long *)&input[i];
 //   printf("Received input[%d] raw bytes (hex): 0x%016llx\n", i, raw_input_bytes);
  }

  // Call the MLP accelerator function
  mlp_xcel(input, mean_output, variance_output);

  // Write outputs to stream
  MeanVariance mv;
  mv.mean = mean_output;
  mv.variance = variance_output;
  //strm_out.write(mv.mean);
  //strm_out.write(mv.variance);
  strm_out.write(mv.mean.range(31, 0));
  strm_out.write(mv.mean.range(63, 32));
  strm_out.write(mv.variance.range(31, 0));
  strm_out.write(mv.variance.range(63, 32));

 // std::cout << "output: " << static_cast<float>(mean_output) << std::endl;

 // long long raw_mean_bytes = *(long long *)&mean_output;
//  printf("Produced mean raw bytes (hex): 0x%016llx\n", raw_mean_bytes);

  //std::cout << "alt output: " << static_cast<float>(mv.mean) << std::endl;

//  long long raw_mean_bytes2 = *(long long *)&mv.mean;
//  printf("alt mean raw bytes (hex): 0x%016llx\n", raw_mean_bytes2);
}

void mlp_xcel(data_t input[N_INPUTS], data_t &mean, data_t &variance)
{
  // Initialize Masks
  bit mask0[NUM_MONTE_CARLO_RUNS][N_HIDDEN0];
  bit mask1[NUM_MONTE_CARLO_RUNS][N_HIDDEN1];
  bit mask2[NUM_MONTE_CARLO_RUNS][N_HIDDEN2];
  bit mask3[NUM_MONTE_CARLO_RUNS][N_HIDDEN3];
  generate_binary_matrix<NUM_MONTE_CARLO_RUNS, N_HIDDEN0>(mask0, 0.004);
  generate_binary_matrix<NUM_MONTE_CARLO_RUNS, N_HIDDEN1>(mask1, 0.006);
  generate_binary_matrix<NUM_MONTE_CARLO_RUNS, N_HIDDEN2>(mask2, 0.008);
  generate_binary_matrix<NUM_MONTE_CARLO_RUNS, N_HIDDEN3>(mask3, 0.01);
  for (int i = 0; i < NUM_MONTE_CARLO_RUNS; i++)
  {
    // Initialize intermediate data
    data_t dense0[N_HIDDEN0];
    data_t dense1[N_HIDDEN1];
    data_t dense2[N_HIDDEN2];
    data_t dense3[N_HIDDEN3];
    data_t dense4[N_OUTPUTS];

    data_t dropout0[N_HIDDEN0];
    data_t dropout1[N_HIDDEN1];
    data_t dropout2[N_HIDDEN2];
    data_t dropout3[N_HIDDEN3];

    dense<N_INPUTS, N_HIDDEN0>(input, dense0, w1, b1);
    relu<N_HIDDEN0>(dense0);
    apply_dropout<N_HIDDEN0>(dense0, dropout0, mask0[i]);

    dense<N_HIDDEN0, N_HIDDEN1>(dropout0, dense1, w2, b2);
    relu<N_HIDDEN1>(dense1);
    apply_dropout<N_HIDDEN1>(dense1, dropout1, mask1[i]);

    dense<N_HIDDEN1, N_HIDDEN2>(dropout1, dense2, w3, b3);
    relu<N_HIDDEN2>(dense2);
    apply_dropout<N_HIDDEN2>(dense2, dropout2, mask2[i]);

    dense<N_HIDDEN2, N_HIDDEN3>(dropout2, dense3, w4, b4);
    relu<N_HIDDEN3>(dense3);
    apply_dropout<N_HIDDEN3>(dense3, dropout3, mask3[i]);

    dense<N_HIDDEN3, N_OUTPUTS>(dropout3, dense4, w5, b5);
    relu<N_HIDDEN3>(dense4);
    outputs[i] = dense4[0];
  }
  mean = calculate_mean(outputs);
  variance = calculate_variance(outputs, mean);
}
