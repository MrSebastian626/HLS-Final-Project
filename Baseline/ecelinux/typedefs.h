//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap_uint data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include "ap_int.h"
#include "ap_fixed.h"

typedef bool bit;
typedef ap_int<8> bit8_t;
typedef ap_int<16> bit16_t;
typedef ap_uint<2> bit2_t;
typedef ap_uint<4> bit4_t;
typedef ap_uint<32> bit32_t;
typedef ap_fixed<64, 32> data_t;

#endif
