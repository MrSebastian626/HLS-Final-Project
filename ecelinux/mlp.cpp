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
void dut (
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
)
{
  input_type input;
  output_type output;

  // ------------------------------------------------------
  // Input processing
  // ------------------------------------------------------
  // Read the two input 32-bit words (low word first)
  bit32_t input_lo = strm_in.read();
  bit32_t input_hi = strm_in.read();

  // Convert input raw bits to fixed-point representation via bit slicing
  theta(31, 0) = input_lo;
  theta(theta.length()-1, 32) = input_hi;

  // ------------------------------------------------------
  // Call CORDIC 
  // ------------------------------------------------------
  mlp( input, output );

  // ------------------------------------------------------
  // Output processing
  // ------------------------------------------------------
  // Write out the cos value (low word first)
  strm_out.write( c(31, 0) );
  strm_out.write( c(c.length()-1, 32) );
}

//-----------------------------------
// mlp function
//-----------------------------------
// @param[in]  : input - input stuff
// @param[out] : output - sine output

void mlp(input_type input, output_type output) {
  
  //Initialize layer_inputs
  double layer_input[MAX_INPUTS];
  double layer_output[MAX_NERUONS];
  for (int i = 0; i<layer_sizes[0]; i++) {
    layer_input[i] = input[i];
  }

  //Initialize weights
  for (int layer = 0; layer < MAX_LAYERS; layer++) {
      for (int i = 0; i < MAX_NEURONS; i++) {
          for (int j = 0; j < MAX_INPUTS; j++) {
              // Load weights for each layer
              if (layer == 0) {
                  weights[layer][i][j] = W0[i][j];  
              }
              else if (layer == 1) {
                  weights[layer][i][j] = W2[i][j];  
              }
              else if (layer == 2) {
                  weights[layer][i][j] = W4[i][j]; 
              }
              else if (layer == 3) {
                  weights[layer][i][j] = W6[i][j]; 
              }
              else if (layer == 4) {
                  weights[layer][i][j] = W8[i][j]; 
              }
          }

          // Load biases for each layer
          if (layer == 0) {
              biases[layer][i] = B1[i];  
          }
          else if (layer == 1) {
              biases[layer][i] = B3[i];  
          }
          else if (layer == 2) {
              biases[layer][i] = B5[i]; 
          }
          else if (layer == 3) {
              biases[layer][i] = B7[i]; 
          }
          else if (layer == 4) {
              biases[layer][i] = B9[i]; 
          }
      }
  }

  //Forward passes
  for (int layer = 0; layer <  MAX_LAYERS; layer++) {
    int input_size = layer_sizes[layer];
    int output_size = layer_sizes[layer+1];

    for (int o = 0; o<output_size; o++) {
      double sum = biases[layer][o];
      for (int i = 0; i<input_size; i++) {
        sum += layer_input[i] * weights[layer][o][i];
      }
      layer_output[i] = sum
    }
    //Prepare for next layer
    for (int i = 0; i<output_size; i++) {
      layer_input[i] = layer_output[i];
    }
  }

  //Softmax
  max_logit = layer_output[0];
  for (int i = 1; i<layer_sizes[MAX_LAYERS]; i++) {
    if (layer_output[i] > max_logit) {
      max_logit = layer_output[i];
    }
  }

  double exp_s = 0.0;
  for (int i = 0; i < layer_sizes[MAX_LAYERS]; i++) {
    output[i] = std::exp(logits[i] - max_logit);
    exp_s += output[i];
  }
  for (int i = 0; i< layer_sizes[MAX_LAYERS]; i++) {
    output[i] / exp_s;
  }  
}
