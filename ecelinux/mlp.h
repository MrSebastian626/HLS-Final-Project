//=========================================================================
// mlp.h
//=========================================================================
 
#ifndef MLP_XCEL_H
#define MLP_XCEL_H

#include <hls_stream.h>
#include "typedefs.h"
#include "model.h"


struct MeanVariance{
  data_t mean;
  data_t variance;
}

// Top function for synthesis
void dut (
    hls::stream<data_t[x_num_cols]> &strm_in,
    hls::stream<data_t[2]> &strm_out
);


// Top function for CORDIC
void mlp_xcel (
    data_t input[N_INPUTS], data_t &mean_output, data_t &variance
);

void mlp_monte_carlo(data_t input[N_INPUTS], data_t &mean, data_t &variance);

#endif
