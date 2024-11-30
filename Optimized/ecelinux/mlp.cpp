//=========================================================================
// cordic.cpp
//=========================================================================
// @brief : A CORDIC implementation of sine and cosine functions.

#include <hls_stream.h>
#include <iostream>
#include "mlp.h"
#include "layer.h"

//-----------------------------------
// dut function (top module)
//-----------------------------------
// @param[in]  : strm_in - input stream
// @param[out] : strm_out - output stream
void dut(hls::stream<data_t> &strm_in, hls::stream<data_t> &strm_out)
{
  data_t input[N_INPUTS];
  data_t mean_output;
  data_t variance_output;

  // Read input data from stream
  for (int i = 0; i < N_INPUTS; i++)
  {
    input[i] = strm_in.read();
  }

  // Call the MLP accelerator function
  mlp_xcel(input, mean_output, variance_output);

  // Write outputs to stream
  MeanVariance mv;
  mv.mean = mean_output;
  mv.variance = variance_output;
  strm_out.write(mv.mean);
  strm_out.write(mv.variance);
}

//-----------------------------------
// mlp function
//-----------------------------------
// @param[in]  : input - input stuff
// @param[out] : output - sine output

void mlp_xcel(data_t input[N_INPUTS], data_t &mean_output, data_t &variance_output)
{

  mlp_monte_carlo(input, mean_output, variance_output);
}

void mlp_monte_carlo(data_t input[N_INPUTS], data_t &mean, data_t &variance)
{
  // Initialize Masks
  bit mask0[NUM_MONTE_CARLO_RUNS][N_HIDDEN0];
  bit mask1[NUM_MONTE_CARLO_RUNS][N_HIDDEN1];
  bit mask2[NUM_MONTE_CARLO_RUNS][N_HIDDEN2];
  bit mask3[NUM_MONTE_CARLO_RUNS][N_HIDDEN3];
  generate_binary_matrix0<NUM_MONTE_CARLO_RUNS, N_HIDDEN0>(mask0, 0.004);
  generate_binary_matrix1<NUM_MONTE_CARLO_RUNS, N_HIDDEN1>(mask1, 0.006);
  generate_binary_matrix2<NUM_MONTE_CARLO_RUNS, N_HIDDEN2>(mask2, 0.008);
  generate_binary_matrix3<NUM_MONTE_CARLO_RUNS, N_HIDDEN3>(mask3, 0.01);
  iterate_num_monte_runs: for (int i = 0; i < NUM_MONTE_CARLO_RUNS; i++)
  {
    // Initialize intermediate data
    data_t dense0[N_HIDDEN0];
    data_t dense1[N_HIDDEN1];
    data_t dense2[N_HIDDEN2];
    data_t dense3[N_HIDDEN3];
    data_t dense4[N_OUTPUTS];

    dense_lay0<N_INPUTS, N_HIDDEN0>(input, dense0, w1, b1, mask0[i]);
    relu0<N_HIDDEN0>(dense0);

    dense_lay1<N_HIDDEN0, N_HIDDEN1>(dense0, dense1, w2, b2, mask1[i]);
    relu1<N_HIDDEN1>(dense1);

    dense_lay2<N_HIDDEN1, N_HIDDEN2>(dense1, dense2, w3, b3, mask2[i]);
    relu2<N_HIDDEN2>(dense2);

    dense_lay3<N_HIDDEN2, N_HIDDEN3>(dense2, dense3, w4, b4, mask3[i]);
    relu3<N_HIDDEN3>(dense3);

    final<N_HIDDEN3, N_OUTPUTS>(dense3, dense4, w5, b5);
    relu4<N_HIDDEN3>(dense4);
    outputs[i] = dense4[0];
  }
  mean = calculate_mean(outputs);
  variance = calculate_variance(outputs, mean);
}
