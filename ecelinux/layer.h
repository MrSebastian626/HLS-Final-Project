//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include "model.h"
#include "typedefs.h"

template <int IN_SIZE, int OUT_SIZE>
void dense(data_t input[IN_SIZE], data_t output[OUT_SIZE], const data_t weight[IN_SIZE][OUT_SIZE], const data_t bias[OUT_SIZE]) {
  for (int i = 0; i < OUT_SIZE; i++) {
    data_t sum = bias[i];
    for (int j = 0; j < IN_SIZE; j++) {
      sum += input[j] * weight[j][i];
    }
    output[i] = sum;
  }
}

template <int SIZE>
void relu(data_t data[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    if (data[i] < 0) {
      data[i] = 0;
    }
  }
}

template <int SIZE>
void apply_dropout(data_t input[SIZE], data_t output[SIZE], const bool mask[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    output[i] = mask[i] ? (data_t)0 : input[i];
  }
}

data_t calculate_mean(data_t outputs[NUM_MONTE_CARLO_RUNS]) {
  data_t sum = 0
  for (int i = 0; i<NUM_MONTE_CARLO_RUNS; i++) {
    sum += outputs[i]
  }
  return (sum / NUM_MONTE_CARLO_RUNS);
}

data_t calculate_variance(data_t outputs[NUM_MONTE_CARLO_RUNS], data_t mean) {
  data_t var = 0
  for (int i = 0; i<NUM_MONTE_CARLO_RUNS; i++) {
    var += ((outputs[i] - mean) * (outputs[i] - mean))
  }
  return (var / (NUM_MONTE_CARLO_RUNS - 1));
}

//Might not need
void initialize_weights_and_biases() {
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
}

#endif
