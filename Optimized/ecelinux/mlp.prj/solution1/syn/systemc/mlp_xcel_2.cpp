#include "mlp_xcel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mlp_xcel::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_0_preg = ap_const_lv27_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
             esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1))) {
            ap_return_0_preg = p_Val2_s_reg_1507.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv27_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
             esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1))) {
            ap_return_1_preg = grp_calculate_variance_fu_2353_ap_return.read();
        }
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_2_fu_2361_global_lfsr_seed_V_o_ap_vld.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_2_fu_2361_global_lfsr_seed_V_o_ap_vld.read())))) {
        global_lfsr_seed_V = grp_generate_binary_matr_2_fu_2361_global_lfsr_seed_V_o.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_1_fu_2227_global_lfsr_seed_V_o_ap_vld.read()))) {
        global_lfsr_seed_V = grp_generate_binary_matr_1_fu_2227_global_lfsr_seed_V_o.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_fu_1794_global_lfsr_seed_V_o_ap_vld.read()))) {
        global_lfsr_seed_V = grp_generate_binary_matr_fu_1794_global_lfsr_seed_V_o.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_calculate_variance_fu_2353_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
             esl_seteq<1,1,1>(icmp_ln59_fu_6436_p2.read(), ap_const_lv1_1))) {
            grp_calculate_variance_fu_2353_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_calculate_variance_fu_2353_ap_ready.read())) {
            grp_calculate_variance_fu_2353_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_lay_16_16_s_fu_2265_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
             esl_seteq<1,1,1>(grp_dense_lay_32_16_s_fu_1928_ap_done.read(), ap_const_logic_1))) {
            grp_dense_lay_16_16_s_fu_2265_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_lay_16_16_s_fu_2265_ap_ready.read())) {
            grp_dense_lay_16_16_s_fu_2265_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_lay_32_16_s_fu_1928_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
             esl_seteq<1,1,1>(grp_dense_lay_64_32_s_fu_1530_ap_done.read(), ap_const_logic_1))) {
            grp_dense_lay_32_16_s_fu_1928_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_lay_32_16_s_fu_1928_ap_ready.read())) {
            grp_dense_lay_32_16_s_fu_1928_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_lay_64_32_s_fu_1530_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
             esl_seteq<1,1,1>(grp_dense_lay_9_64_s_fu_2064_ap_done.read(), ap_const_logic_1))) {
            grp_dense_lay_64_32_s_fu_1530_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_lay_64_32_s_fu_1530_ap_ready.read())) {
            grp_dense_lay_64_32_s_fu_1530_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_lay_9_64_s_fu_2064_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
             esl_seteq<1,1,1>(icmp_ln51_fu_2454_p2.read(), ap_const_lv1_0))) {
            grp_dense_lay_9_64_s_fu_2064_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_lay_9_64_s_fu_2064_ap_ready.read())) {
            grp_dense_lay_9_64_s_fu_2064_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_generate_binary_matr_1_fu_2227_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            grp_generate_binary_matr_1_fu_2227_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_1_fu_2227_ap_ready.read())) {
            grp_generate_binary_matr_1_fu_2227_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_generate_binary_matr_2_fu_2361_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
            grp_generate_binary_matr_2_fu_2361_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_2_fu_2361_ap_ready.read())) {
            grp_generate_binary_matr_2_fu_2361_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_generate_binary_matr_fu_1794_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_generate_binary_matr_fu_1794_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_generate_binary_matr_fu_1794_ap_ready.read())) {
            grp_generate_binary_matr_fu_1794_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(icmp_ln51_fu_2454_p2.read(), ap_const_lv1_1))) {
        i_0_i_reg_1519 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        i_0_i_reg_1519 = i_1_reg_8732.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        i_0_reg_1495 = i_reg_7356.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(grp_generate_binary_matr_2_fu_2361_ap_done.read(), ap_const_logic_1))) {
        i_0_reg_1495 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(icmp_ln51_fu_2454_p2.read(), ap_const_lv1_1))) {
        p_Val2_s_reg_1507 = ap_const_lv27_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        p_Val2_s_reg_1507 = sum_V_fu_6522_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(grp_dense_lay_9_64_s_fu_2064_ap_done.read(), ap_const_logic_1))) {
        dense0_0_V_1_reg_7841 = call_ret2_relu_64_s_fu_2386_ap_return_0.read();
        dense0_0_V_2_fu_396 = call_ret2_relu_64_s_fu_2386_ap_return_0.read();
        dense0_10_V_1_reg_7891 = call_ret2_relu_64_s_fu_2386_ap_return_10.read();
        dense0_10_V_2_fu_436 = call_ret2_relu_64_s_fu_2386_ap_return_10.read();
        dense0_11_V_1_reg_7896 = call_ret2_relu_64_s_fu_2386_ap_return_11.read();
        dense0_11_V_2_fu_440 = call_ret2_relu_64_s_fu_2386_ap_return_11.read();
        dense0_12_V_1_reg_7901 = call_ret2_relu_64_s_fu_2386_ap_return_12.read();
        dense0_12_V_2_fu_444 = call_ret2_relu_64_s_fu_2386_ap_return_12.read();
        dense0_13_V_1_reg_7906 = call_ret2_relu_64_s_fu_2386_ap_return_13.read();
        dense0_13_V_2_fu_448 = call_ret2_relu_64_s_fu_2386_ap_return_13.read();
        dense0_14_V_1_reg_7911 = call_ret2_relu_64_s_fu_2386_ap_return_14.read();
        dense0_14_V_2_fu_452 = call_ret2_relu_64_s_fu_2386_ap_return_14.read();
        dense0_15_V_1_reg_7916 = call_ret2_relu_64_s_fu_2386_ap_return_15.read();
        dense0_15_V_2_fu_456 = call_ret2_relu_64_s_fu_2386_ap_return_15.read();
        dense0_16_V_1_reg_7921 = call_ret2_relu_64_s_fu_2386_ap_return_16.read();
        dense0_16_V_2_fu_460 = call_ret2_relu_64_s_fu_2386_ap_return_16.read();
        dense0_17_V_1_reg_7926 = call_ret2_relu_64_s_fu_2386_ap_return_17.read();
        dense0_17_V_2_fu_464 = call_ret2_relu_64_s_fu_2386_ap_return_17.read();
        dense0_18_V_1_reg_7931 = call_ret2_relu_64_s_fu_2386_ap_return_18.read();
        dense0_18_V_2_fu_468 = call_ret2_relu_64_s_fu_2386_ap_return_18.read();
        dense0_19_V_1_reg_7936 = call_ret2_relu_64_s_fu_2386_ap_return_19.read();
        dense0_19_V_2_fu_472 = call_ret2_relu_64_s_fu_2386_ap_return_19.read();
        dense0_1_V_1_reg_7846 = call_ret2_relu_64_s_fu_2386_ap_return_1.read();
        dense0_1_V_2_fu_400 = call_ret2_relu_64_s_fu_2386_ap_return_1.read();
        dense0_20_V_1_reg_7941 = call_ret2_relu_64_s_fu_2386_ap_return_20.read();
        dense0_20_V_2_fu_476 = call_ret2_relu_64_s_fu_2386_ap_return_20.read();
        dense0_21_V_1_reg_7946 = call_ret2_relu_64_s_fu_2386_ap_return_21.read();
        dense0_21_V_2_fu_480 = call_ret2_relu_64_s_fu_2386_ap_return_21.read();
        dense0_22_V_1_reg_7951 = call_ret2_relu_64_s_fu_2386_ap_return_22.read();
        dense0_22_V_2_fu_484 = call_ret2_relu_64_s_fu_2386_ap_return_22.read();
        dense0_23_V_1_reg_7956 = call_ret2_relu_64_s_fu_2386_ap_return_23.read();
        dense0_23_V_2_fu_488 = call_ret2_relu_64_s_fu_2386_ap_return_23.read();
        dense0_24_V_1_reg_7961 = call_ret2_relu_64_s_fu_2386_ap_return_24.read();
        dense0_24_V_2_fu_492 = call_ret2_relu_64_s_fu_2386_ap_return_24.read();
        dense0_25_V_1_reg_7966 = call_ret2_relu_64_s_fu_2386_ap_return_25.read();
        dense0_25_V_2_fu_496 = call_ret2_relu_64_s_fu_2386_ap_return_25.read();
        dense0_26_V_1_reg_7971 = call_ret2_relu_64_s_fu_2386_ap_return_26.read();
        dense0_26_V_2_fu_500 = call_ret2_relu_64_s_fu_2386_ap_return_26.read();
        dense0_27_V_1_reg_7976 = call_ret2_relu_64_s_fu_2386_ap_return_27.read();
        dense0_27_V_2_fu_504 = call_ret2_relu_64_s_fu_2386_ap_return_27.read();
        dense0_28_V_1_reg_7981 = call_ret2_relu_64_s_fu_2386_ap_return_28.read();
        dense0_28_V_2_fu_508 = call_ret2_relu_64_s_fu_2386_ap_return_28.read();
        dense0_29_V_1_reg_7986 = call_ret2_relu_64_s_fu_2386_ap_return_29.read();
        dense0_29_V_2_fu_512 = call_ret2_relu_64_s_fu_2386_ap_return_29.read();
        dense0_2_V_1_reg_7851 = call_ret2_relu_64_s_fu_2386_ap_return_2.read();
        dense0_2_V_2_fu_404 = call_ret2_relu_64_s_fu_2386_ap_return_2.read();
        dense0_30_V_1_reg_7991 = call_ret2_relu_64_s_fu_2386_ap_return_30.read();
        dense0_30_V_2_fu_516 = call_ret2_relu_64_s_fu_2386_ap_return_30.read();
        dense0_31_V_1_reg_7996 = call_ret2_relu_64_s_fu_2386_ap_return_31.read();
        dense0_31_V_2_fu_520 = call_ret2_relu_64_s_fu_2386_ap_return_31.read();
        dense0_32_V_1_reg_8001 = call_ret2_relu_64_s_fu_2386_ap_return_32.read();
        dense0_32_V_2_fu_524 = call_ret2_relu_64_s_fu_2386_ap_return_32.read();
        dense0_33_V_1_reg_8006 = call_ret2_relu_64_s_fu_2386_ap_return_33.read();
        dense0_33_V_2_fu_528 = call_ret2_relu_64_s_fu_2386_ap_return_33.read();
        dense0_34_V_1_reg_8011 = call_ret2_relu_64_s_fu_2386_ap_return_34.read();
        dense0_34_V_2_fu_532 = call_ret2_relu_64_s_fu_2386_ap_return_34.read();
        dense0_35_V_1_reg_8016 = call_ret2_relu_64_s_fu_2386_ap_return_35.read();
        dense0_35_V_2_fu_536 = call_ret2_relu_64_s_fu_2386_ap_return_35.read();
        dense0_36_V_1_reg_8021 = call_ret2_relu_64_s_fu_2386_ap_return_36.read();
        dense0_36_V_2_fu_540 = call_ret2_relu_64_s_fu_2386_ap_return_36.read();
        dense0_37_V_1_reg_8026 = call_ret2_relu_64_s_fu_2386_ap_return_37.read();
        dense0_37_V_2_fu_544 = call_ret2_relu_64_s_fu_2386_ap_return_37.read();
        dense0_38_V_1_reg_8031 = call_ret2_relu_64_s_fu_2386_ap_return_38.read();
        dense0_38_V_2_fu_548 = call_ret2_relu_64_s_fu_2386_ap_return_38.read();
        dense0_39_V_1_reg_8036 = call_ret2_relu_64_s_fu_2386_ap_return_39.read();
        dense0_39_V_2_fu_552 = call_ret2_relu_64_s_fu_2386_ap_return_39.read();
        dense0_3_V_1_reg_7856 = call_ret2_relu_64_s_fu_2386_ap_return_3.read();
        dense0_3_V_2_fu_408 = call_ret2_relu_64_s_fu_2386_ap_return_3.read();
        dense0_40_V_1_reg_8041 = call_ret2_relu_64_s_fu_2386_ap_return_40.read();
        dense0_40_V_2_fu_556 = call_ret2_relu_64_s_fu_2386_ap_return_40.read();
        dense0_41_V_1_reg_8046 = call_ret2_relu_64_s_fu_2386_ap_return_41.read();
        dense0_41_V_2_fu_560 = call_ret2_relu_64_s_fu_2386_ap_return_41.read();
        dense0_42_V_1_reg_8051 = call_ret2_relu_64_s_fu_2386_ap_return_42.read();
        dense0_42_V_2_fu_564 = call_ret2_relu_64_s_fu_2386_ap_return_42.read();
        dense0_43_V_1_reg_8056 = call_ret2_relu_64_s_fu_2386_ap_return_43.read();
        dense0_43_V_2_fu_568 = call_ret2_relu_64_s_fu_2386_ap_return_43.read();
        dense0_44_V_1_reg_8061 = call_ret2_relu_64_s_fu_2386_ap_return_44.read();
        dense0_44_V_2_fu_572 = call_ret2_relu_64_s_fu_2386_ap_return_44.read();
        dense0_45_V_1_reg_8066 = call_ret2_relu_64_s_fu_2386_ap_return_45.read();
        dense0_45_V_2_fu_576 = call_ret2_relu_64_s_fu_2386_ap_return_45.read();
        dense0_46_V_1_reg_8071 = call_ret2_relu_64_s_fu_2386_ap_return_46.read();
        dense0_46_V_2_fu_580 = call_ret2_relu_64_s_fu_2386_ap_return_46.read();
        dense0_47_V_1_reg_8076 = call_ret2_relu_64_s_fu_2386_ap_return_47.read();
        dense0_47_V_2_fu_584 = call_ret2_relu_64_s_fu_2386_ap_return_47.read();
        dense0_48_V_1_reg_8081 = call_ret2_relu_64_s_fu_2386_ap_return_48.read();
        dense0_48_V_2_fu_588 = call_ret2_relu_64_s_fu_2386_ap_return_48.read();
        dense0_49_V_1_reg_8086 = call_ret2_relu_64_s_fu_2386_ap_return_49.read();
        dense0_49_V_2_fu_592 = call_ret2_relu_64_s_fu_2386_ap_return_49.read();
        dense0_4_V_1_reg_7861 = call_ret2_relu_64_s_fu_2386_ap_return_4.read();
        dense0_4_V_2_fu_412 = call_ret2_relu_64_s_fu_2386_ap_return_4.read();
        dense0_50_V_1_reg_8091 = call_ret2_relu_64_s_fu_2386_ap_return_50.read();
        dense0_50_V_2_fu_596 = call_ret2_relu_64_s_fu_2386_ap_return_50.read();
        dense0_51_V_1_reg_8096 = call_ret2_relu_64_s_fu_2386_ap_return_51.read();
        dense0_51_V_2_fu_600 = call_ret2_relu_64_s_fu_2386_ap_return_51.read();
        dense0_52_V_1_reg_8101 = call_ret2_relu_64_s_fu_2386_ap_return_52.read();
        dense0_52_V_2_fu_604 = call_ret2_relu_64_s_fu_2386_ap_return_52.read();
        dense0_53_V_1_reg_8106 = call_ret2_relu_64_s_fu_2386_ap_return_53.read();
        dense0_53_V_2_fu_608 = call_ret2_relu_64_s_fu_2386_ap_return_53.read();
        dense0_54_V_1_reg_8111 = call_ret2_relu_64_s_fu_2386_ap_return_54.read();
        dense0_54_V_2_fu_612 = call_ret2_relu_64_s_fu_2386_ap_return_54.read();
        dense0_55_V_1_reg_8116 = call_ret2_relu_64_s_fu_2386_ap_return_55.read();
        dense0_55_V_2_fu_616 = call_ret2_relu_64_s_fu_2386_ap_return_55.read();
        dense0_56_V_1_reg_8121 = call_ret2_relu_64_s_fu_2386_ap_return_56.read();
        dense0_56_V_2_fu_620 = call_ret2_relu_64_s_fu_2386_ap_return_56.read();
        dense0_57_V_1_reg_8126 = call_ret2_relu_64_s_fu_2386_ap_return_57.read();
        dense0_57_V_2_fu_624 = call_ret2_relu_64_s_fu_2386_ap_return_57.read();
        dense0_58_V_1_reg_8131 = call_ret2_relu_64_s_fu_2386_ap_return_58.read();
        dense0_58_V_2_fu_628 = call_ret2_relu_64_s_fu_2386_ap_return_58.read();
        dense0_59_V_1_reg_8136 = call_ret2_relu_64_s_fu_2386_ap_return_59.read();
        dense0_59_V_2_fu_632 = call_ret2_relu_64_s_fu_2386_ap_return_59.read();
        dense0_5_V_1_reg_7866 = call_ret2_relu_64_s_fu_2386_ap_return_5.read();
        dense0_5_V_2_fu_416 = call_ret2_relu_64_s_fu_2386_ap_return_5.read();
        dense0_60_V_1_reg_8141 = call_ret2_relu_64_s_fu_2386_ap_return_60.read();
        dense0_60_V_2_fu_636 = call_ret2_relu_64_s_fu_2386_ap_return_60.read();
        dense0_61_V_1_reg_8146 = call_ret2_relu_64_s_fu_2386_ap_return_61.read();
        dense0_61_V_2_fu_640 = call_ret2_relu_64_s_fu_2386_ap_return_61.read();
        dense0_62_V_1_reg_8151 = call_ret2_relu_64_s_fu_2386_ap_return_62.read();
        dense0_62_V_2_fu_644 = call_ret2_relu_64_s_fu_2386_ap_return_62.read();
        dense0_63_V_1_reg_8156 = call_ret2_relu_64_s_fu_2386_ap_return_63.read();
        dense0_63_V_2_fu_648 = call_ret2_relu_64_s_fu_2386_ap_return_63.read();
        dense0_6_V_1_reg_7871 = call_ret2_relu_64_s_fu_2386_ap_return_6.read();
        dense0_6_V_2_fu_420 = call_ret2_relu_64_s_fu_2386_ap_return_6.read();
        dense0_7_V_1_reg_7876 = call_ret2_relu_64_s_fu_2386_ap_return_7.read();
        dense0_7_V_2_fu_424 = call_ret2_relu_64_s_fu_2386_ap_return_7.read();
        dense0_8_V_1_reg_7881 = call_ret2_relu_64_s_fu_2386_ap_return_8.read();
        dense0_8_V_2_fu_428 = call_ret2_relu_64_s_fu_2386_ap_return_8.read();
        dense0_9_V_1_reg_7886 = call_ret2_relu_64_s_fu_2386_ap_return_9.read();
        dense0_9_V_2_fu_432 = call_ret2_relu_64_s_fu_2386_ap_return_9.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(grp_dense_lay_64_32_s_fu_1530_ap_done.read(), ap_const_logic_1))) {
        dense1_0_V_2_fu_652 = dense1_0_V_3_fu_4386_p3.read();
        dense1_0_V_3_reg_8241 = dense1_0_V_3_fu_4386_p3.read();
        dense1_10_V_2_fu_692 = dense1_10_V_3_fu_4476_p3.read();
        dense1_10_V_3_reg_8291 = dense1_10_V_3_fu_4476_p3.read();
        dense1_11_V_2_fu_696 = dense1_11_V_3_fu_4485_p3.read();
        dense1_11_V_3_reg_8296 = dense1_11_V_3_fu_4485_p3.read();
        dense1_12_V_2_fu_700 = dense1_12_V_3_fu_4494_p3.read();
        dense1_12_V_3_reg_8301 = dense1_12_V_3_fu_4494_p3.read();
        dense1_13_V_2_fu_704 = dense1_13_V_3_fu_4503_p3.read();
        dense1_13_V_3_reg_8306 = dense1_13_V_3_fu_4503_p3.read();
        dense1_14_V_2_fu_708 = dense1_14_V_3_fu_4512_p3.read();
        dense1_14_V_3_reg_8311 = dense1_14_V_3_fu_4512_p3.read();
        dense1_15_V_2_fu_712 = dense1_15_V_3_fu_4521_p3.read();
        dense1_15_V_3_reg_8316 = dense1_15_V_3_fu_4521_p3.read();
        dense1_16_V_2_fu_716 = dense1_16_V_3_fu_4530_p3.read();
        dense1_16_V_3_reg_8321 = dense1_16_V_3_fu_4530_p3.read();
        dense1_17_V_2_fu_720 = dense1_17_V_3_fu_4539_p3.read();
        dense1_17_V_3_reg_8326 = dense1_17_V_3_fu_4539_p3.read();
        dense1_18_V_2_fu_724 = dense1_18_V_3_fu_4548_p3.read();
        dense1_18_V_3_reg_8331 = dense1_18_V_3_fu_4548_p3.read();
        dense1_19_V_2_fu_728 = dense1_19_V_3_fu_4557_p3.read();
        dense1_19_V_3_reg_8336 = dense1_19_V_3_fu_4557_p3.read();
        dense1_1_V_2_fu_656 = dense1_1_V_3_fu_4395_p3.read();
        dense1_1_V_3_reg_8246 = dense1_1_V_3_fu_4395_p3.read();
        dense1_20_V_2_fu_732 = dense1_20_V_3_fu_4566_p3.read();
        dense1_20_V_3_reg_8341 = dense1_20_V_3_fu_4566_p3.read();
        dense1_21_V_2_fu_736 = dense1_21_V_3_fu_4575_p3.read();
        dense1_21_V_3_reg_8346 = dense1_21_V_3_fu_4575_p3.read();
        dense1_22_V_2_fu_740 = dense1_22_V_3_fu_4584_p3.read();
        dense1_22_V_3_reg_8351 = dense1_22_V_3_fu_4584_p3.read();
        dense1_23_V_2_fu_744 = dense1_23_V_3_fu_4593_p3.read();
        dense1_23_V_3_reg_8356 = dense1_23_V_3_fu_4593_p3.read();
        dense1_24_V_2_fu_748 = dense1_24_V_3_fu_4602_p3.read();
        dense1_24_V_3_reg_8361 = dense1_24_V_3_fu_4602_p3.read();
        dense1_25_V_2_fu_752 = dense1_25_V_3_fu_4611_p3.read();
        dense1_25_V_3_reg_8366 = dense1_25_V_3_fu_4611_p3.read();
        dense1_26_V_2_fu_756 = dense1_26_V_3_fu_4620_p3.read();
        dense1_26_V_3_reg_8371 = dense1_26_V_3_fu_4620_p3.read();
        dense1_27_V_2_fu_760 = dense1_27_V_3_fu_4629_p3.read();
        dense1_27_V_3_reg_8376 = dense1_27_V_3_fu_4629_p3.read();
        dense1_28_V_2_fu_764 = dense1_28_V_3_fu_4638_p3.read();
        dense1_28_V_3_reg_8381 = dense1_28_V_3_fu_4638_p3.read();
        dense1_29_V_2_fu_768 = dense1_29_V_3_fu_4647_p3.read();
        dense1_29_V_3_reg_8386 = dense1_29_V_3_fu_4647_p3.read();
        dense1_2_V_2_fu_660 = dense1_2_V_3_fu_4404_p3.read();
        dense1_2_V_3_reg_8251 = dense1_2_V_3_fu_4404_p3.read();
        dense1_30_V_2_fu_772 = dense1_30_V_3_fu_4656_p3.read();
        dense1_30_V_3_reg_8391 = dense1_30_V_3_fu_4656_p3.read();
        dense1_31_V_2_fu_776 = dense1_31_V_3_fu_4665_p3.read();
        dense1_31_V_3_reg_8396 = dense1_31_V_3_fu_4665_p3.read();
        dense1_3_V_2_fu_664 = dense1_3_V_3_fu_4413_p3.read();
        dense1_3_V_3_reg_8256 = dense1_3_V_3_fu_4413_p3.read();
        dense1_4_V_2_fu_668 = dense1_4_V_3_fu_4422_p3.read();
        dense1_4_V_3_reg_8261 = dense1_4_V_3_fu_4422_p3.read();
        dense1_5_V_2_fu_672 = dense1_5_V_3_fu_4431_p3.read();
        dense1_5_V_3_reg_8266 = dense1_5_V_3_fu_4431_p3.read();
        dense1_6_V_2_fu_676 = dense1_6_V_3_fu_4440_p3.read();
        dense1_6_V_3_reg_8271 = dense1_6_V_3_fu_4440_p3.read();
        dense1_7_V_2_fu_680 = dense1_7_V_3_fu_4449_p3.read();
        dense1_7_V_3_reg_8276 = dense1_7_V_3_fu_4449_p3.read();
        dense1_8_V_2_fu_684 = dense1_8_V_3_fu_4458_p3.read();
        dense1_8_V_3_reg_8281 = dense1_8_V_3_fu_4458_p3.read();
        dense1_9_V_2_fu_688 = dense1_9_V_3_fu_4467_p3.read();
        dense1_9_V_3_reg_8286 = dense1_9_V_3_fu_4467_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(grp_dense_lay_32_16_s_fu_1928_ap_done.read(), ap_const_logic_1))) {
        dense2_0_V_2_fu_780 = dense2_0_V_3_fu_5154_p3.read();
        dense2_0_V_3_reg_8481 = dense2_0_V_3_fu_5154_p3.read();
        dense2_10_V_2_fu_820 = dense2_10_V_3_fu_5244_p3.read();
        dense2_10_V_3_reg_8531 = dense2_10_V_3_fu_5244_p3.read();
        dense2_11_V_2_fu_824 = dense2_11_V_3_fu_5253_p3.read();
        dense2_11_V_3_reg_8536 = dense2_11_V_3_fu_5253_p3.read();
        dense2_12_V_2_fu_828 = dense2_12_V_3_fu_5262_p3.read();
        dense2_12_V_3_reg_8541 = dense2_12_V_3_fu_5262_p3.read();
        dense2_13_V_2_fu_832 = dense2_13_V_3_fu_5271_p3.read();
        dense2_13_V_3_reg_8546 = dense2_13_V_3_fu_5271_p3.read();
        dense2_14_V_2_fu_836 = dense2_14_V_3_fu_5280_p3.read();
        dense2_14_V_3_reg_8551 = dense2_14_V_3_fu_5280_p3.read();
        dense2_15_V_2_fu_840 = dense2_15_V_3_fu_5289_p3.read();
        dense2_15_V_3_reg_8556 = dense2_15_V_3_fu_5289_p3.read();
        dense2_1_V_2_fu_784 = dense2_1_V_3_fu_5163_p3.read();
        dense2_1_V_3_reg_8486 = dense2_1_V_3_fu_5163_p3.read();
        dense2_2_V_2_fu_788 = dense2_2_V_3_fu_5172_p3.read();
        dense2_2_V_3_reg_8491 = dense2_2_V_3_fu_5172_p3.read();
        dense2_3_V_2_fu_792 = dense2_3_V_3_fu_5181_p3.read();
        dense2_3_V_3_reg_8496 = dense2_3_V_3_fu_5181_p3.read();
        dense2_4_V_2_fu_796 = dense2_4_V_3_fu_5190_p3.read();
        dense2_4_V_3_reg_8501 = dense2_4_V_3_fu_5190_p3.read();
        dense2_5_V_2_fu_800 = dense2_5_V_3_fu_5199_p3.read();
        dense2_5_V_3_reg_8506 = dense2_5_V_3_fu_5199_p3.read();
        dense2_6_V_2_fu_804 = dense2_6_V_3_fu_5208_p3.read();
        dense2_6_V_3_reg_8511 = dense2_6_V_3_fu_5208_p3.read();
        dense2_7_V_2_fu_808 = dense2_7_V_3_fu_5217_p3.read();
        dense2_7_V_3_reg_8516 = dense2_7_V_3_fu_5217_p3.read();
        dense2_8_V_2_fu_812 = dense2_8_V_3_fu_5226_p3.read();
        dense2_8_V_3_reg_8521 = dense2_8_V_3_fu_5226_p3.read();
        dense2_9_V_2_fu_816 = dense2_9_V_3_fu_5235_p3.read();
        dense2_9_V_3_reg_8526 = dense2_9_V_3_fu_5235_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && esl_seteq<1,1,1>(grp_dense_lay_16_16_s_fu_2265_ap_done.read(), ap_const_logic_1))) {
        dense3_10_V_1_reg_8597 = dense3_10_V_1_fu_5714_p3.read();
        dense3_11_V_1_reg_8603 = dense3_11_V_1_fu_5722_p3.read();
        dense3_12_V_1_reg_8608 = dense3_12_V_1_fu_5730_p3.read();
        dense3_13_V_1_reg_8614 = dense3_13_V_1_fu_5738_p3.read();
        dense3_14_V_1_reg_8619 = dense3_14_V_1_fu_5746_p3.read();
        dense3_15_V_1_reg_8624 = dense3_15_V_1_fu_5754_p3.read();
        dense3_3_V_1_reg_8561 = dense3_3_V_1_fu_5658_p3.read();
        dense3_4_V_1_reg_8566 = dense3_4_V_1_fu_5666_p3.read();
        dense3_5_V_1_reg_8571 = dense3_5_V_1_fu_5674_p3.read();
        dense3_6_V_1_reg_8576 = dense3_6_V_1_fu_5682_p3.read();
        dense3_7_V_1_reg_8582 = dense3_7_V_1_fu_5690_p3.read();
        dense3_8_V_1_reg_8587 = dense3_8_V_1_fu_5698_p3.read();
        dense3_9_V_1_reg_8592 = dense3_9_V_1_fu_5706_p3.read();
        dense3_V_0_0_fu_844 = dense3_0_V_1_fu_5634_p3.read();
        dense3_V_10_0_fu_884 = dense3_10_V_1_fu_5714_p3.read();
        dense3_V_11_0_fu_888 = dense3_11_V_1_fu_5722_p3.read();
        dense3_V_12_0_fu_892 = dense3_12_V_1_fu_5730_p3.read();
        dense3_V_13_0_fu_896 = dense3_13_V_1_fu_5738_p3.read();
        dense3_V_14_0_fu_900 = dense3_14_V_1_fu_5746_p3.read();
        dense3_V_15_0_fu_904 = dense3_15_V_1_fu_5754_p3.read();
        dense3_V_1_0_fu_848 = dense3_1_V_1_fu_5642_p3.read();
        dense3_V_2_0_fu_852 = dense3_2_V_1_fu_5650_p3.read();
        dense3_V_3_0_fu_856 = dense3_3_V_1_fu_5658_p3.read();
        dense3_V_4_0_fu_860 = dense3_4_V_1_fu_5666_p3.read();
        dense3_V_5_0_fu_864 = dense3_5_V_1_fu_5674_p3.read();
        dense3_V_6_0_fu_868 = dense3_6_V_1_fu_5682_p3.read();
        dense3_V_7_0_fu_872 = dense3_7_V_1_fu_5690_p3.read();
        dense3_V_8_0_fu_876 = dense3_8_V_1_fu_5698_p3.read();
        dense3_V_9_0_fu_880 = dense3_9_V_1_fu_5706_p3.read();
        mul_ln1118_reg_8639 = mul_ln1118_fu_5786_p2.read();
        mul_ln1192_1_reg_8634 = mul_ln1192_1_fu_5776_p2.read();
        mul_ln1192_reg_8629 = mul_ln1192_fu_5766_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        dense4_0_V_reg_8724 = add_ln1192_15_fu_6416_p2.read().range(36, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        i_1_reg_8732 = i_1_fu_6442_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        i_reg_7356 = i_fu_2460_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        mul_ln1118_1_reg_8654 = mul_ln1118_1_fu_5953_p2.read();
        mul_ln1118_2_reg_8659 = mul_ln1118_2_fu_5962_p2.read();
        mul_ln1192_2_reg_8644 = mul_ln1192_2_fu_5934_p2.read();
        tmp_2_reg_8649 = add_ln1192_2_fu_5925_p2.read().range(36, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        mul_ln1118_3_reg_8679 = mul_ln1118_3_fu_6076_p2.read();
        mul_ln1192_3_reg_8674 = mul_ln1192_3_fu_6067_p2.read();
        sub_ln1118_reg_8664 = sub_ln1118_fu_6048_p2.read();
        tmp_5_reg_8669 = add_ln1192_5_fu_6028_p2.read().range(36, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        mul_ln1118_4_reg_8684 = mul_ln1118_4_fu_6151_p2.read();
        tmp_8_reg_8689 = add_ln1192_8_fu_6142_p2.read().range(36, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        mul_ln1118_5_reg_8709 = mul_ln1118_5_fu_6357_p2.read();
        mul_ln1192_6_reg_8719 = mul_ln1192_6_fu_6376_p2.read();
        tmp_12_reg_8714 = add_ln1192_13_fu_6349_p2.read().range(36, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        mul_ln1148_reg_8753 = mul_ln1148_fu_6464_p2.read();
        tmp_130_reg_8758 = mul_ln1148_fu_6464_p2.read().range(54, 34);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        mul_ln1192_4_reg_8694 = mul_ln1192_4_fu_6238_p2.read();
        mul_ln1192_5_reg_8704 = mul_ln1192_5_fu_6257_p2.read();
        tmp_s_reg_8699 = add_ln1192_10_fu_6229_p2.read().range(36, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        t_V_reg_8742 = outputs_V_q0.read();
        tmp_128_reg_8747 = tmp_128_fu_6453_p1.read().range(26, 26);
    }
}

void mlp_xcel::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(grp_generate_binary_matr_fu_1794_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(grp_generate_binary_matr_1_fu_2227_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(grp_generate_binary_matr_2_fu_2361_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(grp_generate_binary_matr_2_fu_2361_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(icmp_ln51_fu_2454_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(grp_dense_lay_9_64_s_fu_2064_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(grp_dense_lay_64_32_s_fu_1530_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state12;
            } else {
                ap_NS_fsm = ap_ST_fsm_state11;
            }
            break;
        case 2048 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(grp_dense_lay_32_16_s_fu_1928_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 4096 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && esl_seteq<1,1,1>(grp_dense_lay_16_16_s_fu_2265_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_state13;
            }
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 1048576 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(icmp_ln59_fu_6436_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_state22;
            }
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 16777216 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state25;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<25>) ("XXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

