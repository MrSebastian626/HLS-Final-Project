//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include <stdio.h>
#include <cmath>
#include "model.h"
#include "typedefs.h"

bit16_t global_lfsr_seed = 123;

template <int IN_SIZE, int OUT_SIZE>
void dense_lay(data_t input[IN_SIZE], data_t output[OUT_SIZE], const weight_t weight[IN_SIZE][OUT_SIZE], const weight_t bias[OUT_SIZE], bit mask[OUT_SIZE])
{
 dense_outer: for (int i = 0; i < OUT_SIZE; i++)
  {
    data_t sum = bias[i];
   dense_inner: for (int j = 0; j < IN_SIZE; j++)
    {
      sum += input[j] * weight[j][i];
    }
    output[i] = mask[i] ? sum : (data_t) 0;
  }
}

template <int IN_SIZE, int OUT_SIZE>
void final(data_t input[IN_SIZE], data_t output[OUT_SIZE], const weight_t weight[IN_SIZE][OUT_SIZE], const weight_t bias[OUT_SIZE])
{
 final_outer: for (int i = 0; i < OUT_SIZE; i++)
  {
    data_t sum = bias[i];
  final_inner:  for (int j = 0; j < IN_SIZE; j++)
    {
      sum += input[j] * weight[j][i];
    }
    output[i] = sum;
  }
}

template <int SIZE>
void relu(data_t data[SIZE])
{
 relu_outer: for (int i = 0; i < SIZE; i++)
  {
    if (data[i] < 0)
    {
      data[i] = 0;
    }
  }
}

data_t calculate_mean(data_t outputs[NUM_MONTE_CARLO_RUNS])
{
  data_t sum = 0;
 iterate_runs_mean: for (int i = 0; i < NUM_MONTE_CARLO_RUNS; i++)
  {
    sum += outputs[i]/NUM_MONTE_CARLO_RUNS;
  }
  return sum;
}

data_t calculate_variance(data_t outputs[NUM_MONTE_CARLO_RUNS], data_t mean)
{
  variance_t var = 0;
  iterate_runs_var: for (int i = 0; i < NUM_MONTE_CARLO_RUNS; i++)
  {
    var += (((outputs[i] - mean) * (outputs[i] - mean))/NUM_MONTE_CARLO_RUNS);
  }
  return std::sqrt(static_cast<float>(var));
}

template <int ITERATIONS, int NEURONS>
void generate_binary_matrix(bit matrix[ITERATIONS][NEURONS], float zero_percentage)
{
  int total_zeros = (int)(zero_percentage * ITERATIONS * NEURONS);
  int zeros_added = 0;

  // LFSR-based pseudo-random number generation
  bit16_t lfsr = global_lfsr_seed;

 gen_iter: for (int i = 0; i < ITERATIONS; i++)
  {
   gen_neur: for (int j = 0; j < NEURONS; j++)
    {
      // Update LFSR
      bool bit = lfsr[0] ^ lfsr[2] ^ lfsr[3] ^ lfsr[5];
      lfsr = (lfsr >> 1) | (bit << 15);
      if (zeros_added < total_zeros && (lfsr & 0x1))
      {
        matrix[i][j] = 0;
        zeros_added++;
      }
      else
      {
        matrix[i][j] = 1;
      }
    }
  }
  global_lfsr_seed = lfsr;
}

#endif
