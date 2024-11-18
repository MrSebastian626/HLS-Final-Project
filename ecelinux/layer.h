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
  data_t sum = 0;
  for (int i = 0; i<NUM_MONTE_CARLO_RUNS; i++) {
    sum += outputs[i];
  }
  return (sum / NUM_MONTE_CARLO_RUNS);
}

data_t calculate_variance(data_t outputs[NUM_MONTE_CARLO_RUNS], data_t mean) {
  data_t var = 0;
  for (int i = 0; i<NUM_MONTE_CARLO_RUNS; i++) {
    var += ((outputs[i] - mean) * (outputs[i] - mean));
  }
  return (var / (NUM_MONTE_CARLO_RUNS));
}

#endif
