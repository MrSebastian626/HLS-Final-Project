//===========================================================================
// model.h
//===========================================================================
// @brief: This header file includes the parameters for the MLP

#ifndef MODEL_H
#define MODEL_H

#include "typedefs.h"

// Model parameters
const int N_INPUTS = 9;                  // Number of inputs
const int N_HIDDEN0 = 64;                 // Number of hidden units
const int N_HIDDEN1 = 32;                 // Number of hidden units
const int N_HIDDEN2 = 16;                 // Number of hidden units
const int N_HIDDEN3 = 16;                 // Number of hidden units
const int N_OUTPUTS = 1;                 // Number of outputs
const int NUM_MONTE_CARLO_RUNS = 100;    // Number of Monte Carlo simulations

const int x_num_rows = 150; //Testing number of rows
const int x_num_cols = 9; //Testing number of cols

// Weights and biases
const data_t w1[N_INPUTS][N_HIDDEN0] = {
#include "data/w1.h"
};

const data_t b1[N_HIDDEN0] = {
#include "data/b1.h"
};

const data_t w2[N_HIDDEN0][N_HIDDEN1] = {
#include "data/w2.h"
};

const data_t b2[N_HIDDEN1] = {
#include "data/b2.h"
};

const data_t w3[N_HIDDEN1][N_HIDDEN2] = {
#include "data/w3.h"
};

const data_t b3[N_HIDDEN2] = {
#include "data/b3.h"
};

const data_t w4[N_HIDDEN2][N_HIDDEN3] = {
#include "data/w4.h"
};

const data_t b4[N_HIDDEN3] = {
#include "data/b4.h"
};

const data_t w5[N_HIDDEN3][N_OUTPUTS] = {
#include "data/w5.h"
};

const data_t b5[N_OUTPUTS] = {
#include "data/b5.h"
};

// // Dropout masks (precomputed for each Monte Carlo run)
// const bool dropout_masks[NUM_MONTE_CARLO_RUNS][N_HIDDEN] = {
// #include "data/dropout_masks.h"
// };

// Experimental data
data_t outputs[NUM_MONTE_CARLO_RUNS];

#endif
