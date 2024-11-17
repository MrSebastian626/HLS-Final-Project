//=========================================================================
// cordic.cpp
//=========================================================================
// @brief : A CORDIC implementation of sine and cosine functions.

#include <hls_stream.h>
#include <iostream>
#include "mlp.h"
#include "mlp_weights.cpp"

//-----------------------------------
// dut function (top module)
//-----------------------------------
// @param[in]  : strm_in - input stream
// @param[out] : strm_out - output stream 
void dut(hls::stream<data_t> &strm_in, hls::stream<data_t> &strm_out) {
  data_t input[N_INPUTS];
  data_t mean_output;
  data_t variance_output;

  // Read input data from stream
  for (int i = 0; i < N_INPUTS; i++) {
    input[i] = strm_in.read();
  }

  // Call the MLP accelerator function
  mlp_xcel(input, mean_output, variance_output);

  // Write outputs to stream
  strm_out.write(mean_output);
  strm_out.write(variance_output);
}

//-----------------------------------
// mlp function
//-----------------------------------
// @param[in]  : input - input stuff
// @param[out] : output - sine output

void mlp_xcel(data_t input[N_INPUTS], data_t &mean_output, data_t &variance_output) {
  
  mlp_monte_carlo(input, mean_output, variance_output);
}

void mlp_monte_carlo(data_t input[N_INPUTS], data_t &mean, data_t &variance) {
  for (int i = 0; i< NUM_MONTE_CARLO_RUNS; i++) {
      //Initialize intermediate data
      data_t dense0[N_HIDDEN0];
      data_t dense1[N_HIDDEN1];
      data_t dense2[N_HIDDEN2];
      data_t dense3[N_HIDDEN3];
      data_t dense4[N_OUTPUT];

      data_t dropout0[N_HIDDEN0];
      data_t dropout1[N_HIDDEN1];
      data_t dropout2[N_HIDDEN2];
      data_t dropout3[N_HIDDEN3];

      
      dense<N_INPUTS, N_HIDDEN0>(input, dense0, W0, B0);
      relu<N_HIDDEN0>(dense0);
      apply_dropout<N_HIDDEN0>(dense0,dropout0);

      dense<N_HIDDEN0, N_HIDDEN1>(dropout0, dense1, W1, B1);
      relu<N_HIDDEN1>(dense1);
      apply_dropout<N_HIDDEN1>(dense1,dropout1);

      dense<N_HIDDEN1, N_HIDDEN2>(dropout1, dense2, W2, B2);
      relu<N_HIDDEN2>(dense2);
      apply_dropout<N_HIDDEN2>(dense2,dropout2);

      dense<N_HIDDEN2, N_HIDDEN3>(dropout2, dense3, W3, B3);
      relu<N_HIDDEN3>(dense3);
      apply_dropout<N_HIDDEN3>(dense3,dropout3);

      dense<N_HIDDEN3, N_OUTPUT>(dropout3, dense4, W4, B4);
      outputs[i] = dense4[0];
  }
  mean = calculate_mean(outputs);
  variance = calculate_variance(outputs, mean);
}
