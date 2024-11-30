//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include "model.h"
#include "typedefs.h"

bit16_t global_lfsr_seed = 123;

template <int IN_SIZE, int OUT_SIZE>
void dense_lay0(data_t input[IN_SIZE], data_t output[OUT_SIZE], const data_t weight[IN_SIZE][OUT_SIZE], const data_t bias[OUT_SIZE], bit mask[OUT_SIZE])
{
 dense0_outer: for (int i = 0; i < OUT_SIZE; i++)
  {
    data_t sum = bias[i];
   dense0_inner: for (int j = 0; j < IN_SIZE; j++)
    {
      sum += input[j] * weight[j][i];
    }
    output[i] = mask[i] ? sum : (data_t) 0;
  }
}

template <int IN_SIZE, int OUT_SIZE>
void dense_lay1(data_t input[IN_SIZE], data_t output[OUT_SIZE], const data_t weight[IN_SIZE][OUT_SIZE], const data_t bias[OUT_SIZE], bit mask[OUT_SIZE])
{
 dense1_outer: for (int i = 0; i < OUT_SIZE; i++)
  {
    data_t sum = bias[i];
   dense1_inner: for (int j = 0; j < IN_SIZE; j++)
    {
      sum += input[j] * weight[j][i];
    }
    output[i] = mask[i] ? sum : (data_t) 0;
  }
}


template <int IN_SIZE, int OUT_SIZE>
void dense_lay2(data_t input[IN_SIZE], data_t output[OUT_SIZE], const data_t weight[IN_SIZE][OUT_SIZE], const data_t bias[OUT_SIZE], bit mask[OUT_SIZE])
{
 dense2_outer: for (int i = 0; i < OUT_SIZE; i++)
  {
    data_t sum = bias[i];
   dense2_inner: for (int j = 0; j < IN_SIZE; j++)
    {
      sum += input[j] * weight[j][i];
    }
    output[i] = mask[i] ? sum : (data_t) 0;
  }
}

template <int IN_SIZE, int OUT_SIZE>
void dense_lay3(data_t input[IN_SIZE], data_t output[OUT_SIZE], const data_t weight[IN_SIZE][OUT_SIZE], const data_t bias[OUT_SIZE], bit mask[OUT_SIZE])
{
 dense3_outer: for (int i = 0; i < OUT_SIZE; i++)
  {
    data_t sum = bias[i];
  dense3_inner:  for (int j = 0; j < IN_SIZE; j++)
    {
      sum += input[j] * weight[j][i];
    }
    output[i] = mask[i] ? sum : (data_t) 0;
  }
}

template <int IN_SIZE, int OUT_SIZE>
void final(data_t input[IN_SIZE], data_t output[OUT_SIZE], const data_t weight[IN_SIZE][OUT_SIZE], const data_t bias[OUT_SIZE])
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
void relu0(data_t data[SIZE])
{
 relu_0: for (int i = 0; i < SIZE; i++)
  {
    if (data[i] < 0)
    {
      data[i] = 0;
    }
  }
}

template <int SIZE>
void relu1(data_t data[SIZE])
{
 relu_1: for (int i = 0; i < SIZE; i++)
  {
    if (data[i] < 0)
    {
      data[i] = 0;
    }
  }
}

template <int SIZE>
void relu2(data_t data[SIZE])
{
 relu_2: for (int i = 0; i < SIZE; i++)
  {
    if (data[i] < 0)
    {
      data[i] = 0;
    }
  }
}

template <int SIZE>
void relu3(data_t data[SIZE])
{
 relu_3: for (int i = 0; i < SIZE; i++)
  {
    if (data[i] < 0)
    {
      data[i] = 0;
    }
  }
}

template <int SIZE>
void relu4(data_t data[SIZE])
{
 relu_4: for (int i = 0; i < SIZE; i++)
  {
    if (data[i] < 0)
    {
      data[i] = 0;
    }
  }
}

template <int SIZE>
void apply_dropout(data_t input[SIZE], data_t output[SIZE], const bool mask[SIZE])
{
  for (int i = 0; i < SIZE; i++)
  {
    output[i] = mask[i] ? input[i] : (data_t)0;
  }
}

data_t calculate_mean(data_t outputs[NUM_MONTE_CARLO_RUNS])
{
  data_t sum = 0;
 iterate_runs_mean: for (int i = 0; i < NUM_MONTE_CARLO_RUNS; i++)
  {
    sum += outputs[i];
  }
  return (sum / NUM_MONTE_CARLO_RUNS);
}

data_t calculate_variance(data_t outputs[NUM_MONTE_CARLO_RUNS], data_t mean)
{
  data_t var = 0;
  iterate_runs_var: for (int i = 0; i < NUM_MONTE_CARLO_RUNS; i++)
  {
    var += (((outputs[i] - mean) * (outputs[i] - mean))/NUM_MONTE_CARLO_RUNS);
  }
  return var;
}

template <int ITERATIONS, int NEURONS>
void generate_binary_matrix0(bit matrix[ITERATIONS][NEURONS], float zero_percentage)
{
  int total_zeros = (int)(zero_percentage * ITERATIONS * NEURONS);
  int random_seed = 123; // Seed for LFSR
  int zeros_added = 0;

  // LFSR-based pseudo-random number generation
  bit16_t lfsr = global_lfsr_seed;

 gen0_iter: for (int i = 0; i < ITERATIONS; i++)
  {
   gen0_neur: for (int j = 0; j < NEURONS; j++)
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

template <int ITERATIONS, int NEURONS>
void generate_binary_matrix1(bit matrix[ITERATIONS][NEURONS], float zero_percentage)
{
  int total_zeros = (int)(zero_percentage * ITERATIONS * NEURONS);
  int random_seed = 123; // Seed for LFSR
  int zeros_added = 0;

  // LFSR-based pseudo-random number generation
  bit16_t lfsr = global_lfsr_seed;

  gen1_iter: for (int i = 0; i < ITERATIONS; i++)
  {
   gen1_neur: for (int j = 0; j < NEURONS; j++)
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

template <int ITERATIONS, int NEURONS>
void generate_binary_matrix2(bit matrix[ITERATIONS][NEURONS], float zero_percentage)
{
  int total_zeros = (int)(zero_percentage * ITERATIONS * NEURONS);
  int random_seed = 123; // Seed for LFSR
  int zeros_added = 0;

  // LFSR-based pseudo-random number generation
  bit16_t lfsr = global_lfsr_seed;

 gen2_iter: for (int i = 0; i < ITERATIONS; i++)
  {
  gen2_neur:  for (int j = 0; j < NEURONS; j++)
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

template <int ITERATIONS, int NEURONS>
void generate_binary_matrix3(bit matrix[ITERATIONS][NEURONS], float zero_percentage)
{
  int total_zeros = (int)(zero_percentage * ITERATIONS * NEURONS);
  int random_seed = 123; // Seed for LFSR
  int zeros_added = 0;

  // LFSR-based pseudo-random number generation
  bit16_t lfsr = global_lfsr_seed;

gen3_iter: for (int i = 0; i < ITERATIONS; i++)
  {
  gen3_neur: for (int j = 0; j < NEURONS; j++)
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
