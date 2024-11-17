//=========================================================================
// mlp.h
//=========================================================================
 
#ifndef MLP_H
#define MLP_H

#include <hls_stream.h>
#include "typedefs.h"





// Top function for synthesis
void dut (
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
);

//Load weights

// Top function for CORDIC
void mlp (
    data_t input[N_INPUTS], data_t &mean_output, data_t &variance
);

void mlp_monte_carlo(data_t input[N_INPUTS], data_t &mean, data_t &variance);

#endif
