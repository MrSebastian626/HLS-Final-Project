//=========================================================================
// mlp.h
//=========================================================================
 
#ifndef MLP_H
#define MLP_H

#include <hls_stream.h>

#include "typedefs.h"

//Configuration parameters (NUMBERS ARE CURRENTLY RANDOM)
#define MAX_LAYERS = 1; // Maximum number of layers in MLP
#define MAX_NERUONS = 40; // Maximum number of neurons in  a layer
#define MAX_INPUTS = 40; // Inputs to the first layer 


//Initialize weights, biases and layer_sizes
extern const double weights[MAX_LAYERS][MAX_NERUONS][MAX_INPUTS];
extern const double biases[MAX_LAYERS][MAX_NERUONS];
extern const int layer_sizes[MAX_LAYERS + 1];



// Top function for synthesis
void dut (
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
);

//Load weights


// Top function for CORDIC
void mlp (
    input_type input,
    output_type output
);

#endif
