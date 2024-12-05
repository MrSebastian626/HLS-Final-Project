//=========================================================================
// mlp.h
//=========================================================================
 
#ifndef MLP_XCEL_H
#define MLP_XCEL_H

#include <hls_stream.h>
#include "typedefs.h"
#include "model.h"


struct MeanVariance{
  bit32_t mean;
  bit32_t variance;
};

// Top function for synthesis
void dut (
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
);


// Top function for CORDIC
void mlp_xcel (
    data_t input[N_INPUTS], data_t &mean, data_t &variance
);

#endif
