#include "mlp_xcel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mlp_xcel::thread_add_ln1118_fu_6297_p2() {
    add_ln1118_fu_6297_p2 = (!zext_ln1118_9_fu_6282_p1.read().is_01() || !zext_ln1118_10_fu_6293_p1.read().is_01())? sc_lv<34>(): (sc_biguint<34>(zext_ln1118_9_fu_6282_p1.read()) + sc_biguint<34>(zext_ln1118_10_fu_6293_p1.read()));
}

void mlp_xcel::thread_add_ln1192_10_fu_6229_p2() {
    add_ln1192_10_fu_6229_p2 = (!shl_ln728_9_fu_6221_p3.read().is_01() || !sub_ln1118_1_fu_6205_p2.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_9_fu_6221_p3.read()) + sc_biguint<37>(sub_ln1118_1_fu_6205_p2.read()));
}

void mlp_xcel::thread_add_ln1192_11_fu_6270_p2() {
    add_ln1192_11_fu_6270_p2 = (!shl_ln728_s_fu_6263_p3.read().is_01() || !mul_ln1192_4_reg_8694.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_s_fu_6263_p3.read()) + sc_biguint<37>(mul_ln1192_4_reg_8694.read()));
}

void mlp_xcel::thread_add_ln1192_12_fu_6325_p2() {
    add_ln1192_12_fu_6325_p2 = (!shl_ln728_10_fu_6313_p3.read().is_01() || !zext_ln1192_5_fu_6321_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_10_fu_6313_p3.read()) + sc_biguint<37>(zext_ln1192_5_fu_6321_p1.read()));
}

void mlp_xcel::thread_add_ln1192_13_fu_6349_p2() {
    add_ln1192_13_fu_6349_p2 = (!shl_ln728_11_fu_6341_p3.read().is_01() || !mul_ln1192_5_reg_8704.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_11_fu_6341_p3.read()) + sc_biguint<37>(mul_ln1192_5_reg_8704.read()));
}

void mlp_xcel::thread_add_ln1192_14_fu_6392_p2() {
    add_ln1192_14_fu_6392_p2 = (!shl_ln728_12_fu_6385_p3.read().is_01() || !sext_ln1118_2_fu_6382_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_12_fu_6385_p3.read()) + sc_bigint<37>(sext_ln1118_2_fu_6382_p1.read()));
}

void mlp_xcel::thread_add_ln1192_15_fu_6416_p2() {
    add_ln1192_15_fu_6416_p2 = (!shl_ln728_13_fu_6408_p3.read().is_01() || !mul_ln1192_6_reg_8719.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_13_fu_6408_p3.read()) + sc_biguint<37>(mul_ln1192_6_reg_8719.read()));
}

void mlp_xcel::thread_add_ln1192_1_fu_5899_p2() {
    add_ln1192_1_fu_5899_p2 = (!zext_ln728_fu_5895_p1.read().is_01() || !mul_ln1192_1_reg_8634.read().is_01())? sc_lv<37>(): (sc_biguint<37>(zext_ln728_fu_5895_p1.read()) + sc_biguint<37>(mul_ln1192_1_reg_8634.read()));
}

void mlp_xcel::thread_add_ln1192_2_fu_5925_p2() {
    add_ln1192_2_fu_5925_p2 = (!shl_ln728_1_fu_5917_p3.read().is_01() || !sext_ln1118_fu_5904_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_1_fu_5917_p3.read()) + sc_bigint<37>(sext_ln1118_fu_5904_p1.read()));
}

void mlp_xcel::thread_add_ln1192_3_fu_5975_p2() {
    add_ln1192_3_fu_5975_p2 = (!shl_ln728_2_fu_5968_p3.read().is_01() || !mul_ln1192_2_reg_8644.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_2_fu_5968_p3.read()) + sc_biguint<37>(mul_ln1192_2_reg_8644.read()));
}

void mlp_xcel::thread_add_ln1192_4_fu_6001_p2() {
    add_ln1192_4_fu_6001_p2 = (!shl_ln728_3_fu_5990_p3.read().is_01() || !sext_ln1192_fu_5998_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_3_fu_5990_p3.read()) + sc_bigint<37>(sext_ln1192_fu_5998_p1.read()));
}

void mlp_xcel::thread_add_ln1192_5_fu_6028_p2() {
    add_ln1192_5_fu_6028_p2 = (!shl_ln728_4_fu_6020_p3.read().is_01() || !sext_ln1118_1_fu_6007_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_4_fu_6020_p3.read()) + sc_bigint<37>(sext_ln1118_1_fu_6007_p1.read()));
}

void mlp_xcel::thread_add_ln1192_6_fu_6092_p2() {
    add_ln1192_6_fu_6092_p2 = (!shl_ln728_5_fu_6082_p3.read().is_01() || !sext_ln1192_1_fu_6089_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_5_fu_6082_p3.read()) + sc_bigint<37>(sext_ln1192_1_fu_6089_p1.read()));
}

void mlp_xcel::thread_add_ln1192_7_fu_6116_p2() {
    add_ln1192_7_fu_6116_p2 = (!shl_ln728_6_fu_6108_p3.read().is_01() || !mul_ln1192_3_reg_8674.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_6_fu_6108_p3.read()) + sc_biguint<37>(mul_ln1192_3_reg_8674.read()));
}

void mlp_xcel::thread_add_ln1192_8_fu_6142_p2() {
    add_ln1192_8_fu_6142_p2 = (!shl_ln728_7_fu_6131_p3.read().is_01() || !sext_ln1192_2_fu_6139_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_7_fu_6131_p3.read()) + sc_bigint<37>(sext_ln1192_2_fu_6139_p1.read()));
}

void mlp_xcel::thread_add_ln1192_9_fu_6177_p2() {
    add_ln1192_9_fu_6177_p2 = (!shl_ln728_8_fu_6170_p3.read().is_01() || !zext_ln1118_11_fu_6167_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(shl_ln728_8_fu_6170_p3.read()) + sc_biguint<37>(zext_ln1118_11_fu_6167_p1.read()));
}

void mlp_xcel::thread_add_ln1192_fu_5872_p2() {
    add_ln1192_fu_5872_p2 = (!ap_const_lv36_973800.is_01() || !mul_ln1192_reg_8629.read().is_01())? sc_lv<36>(): (sc_biguint<36>(ap_const_lv36_973800) + sc_biguint<36>(mul_ln1192_reg_8629.read()));
}

void mlp_xcel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void mlp_xcel::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void mlp_xcel::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void mlp_xcel::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void mlp_xcel::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void mlp_xcel::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void mlp_xcel::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void mlp_xcel::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void mlp_xcel::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void mlp_xcel::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void mlp_xcel::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void mlp_xcel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void mlp_xcel::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void mlp_xcel::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void mlp_xcel::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void mlp_xcel::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void mlp_xcel::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void mlp_xcel::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void mlp_xcel::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void mlp_xcel::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void mlp_xcel::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void mlp_xcel::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void mlp_xcel::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void mlp_xcel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void mlp_xcel::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void mlp_xcel::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
          esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void mlp_xcel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void mlp_xcel::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void mlp_xcel::thread_ap_return_0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1))) {
        ap_return_0 = p_Val2_s_reg_1507.read();
    } else {
        ap_return_0 = ap_return_0_preg.read();
    }
}

void mlp_xcel::thread_ap_return_1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(grp_calculate_variance_fu_2353_ap_done.read(), ap_const_logic_1))) {
        ap_return_1 = grp_calculate_variance_fu_2353_ap_return.read();
    } else {
        ap_return_1 = ap_return_1_preg.read();
    }
}

void mlp_xcel::thread_dense1_0_V_3_fu_4386_p3() {
    dense1_0_V_3_fu_4386_p3 = (!tmp_64_fu_4130_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_64_fu_4130_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_fu_3878_p1.read());
}

void mlp_xcel::thread_dense1_10_V_3_fu_4476_p3() {
    dense1_10_V_3_fu_4476_p3 = (!tmp_74_fu_4210_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_74_fu_4210_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_10_fu_3958_p1.read());
}

void mlp_xcel::thread_dense1_11_V_3_fu_4485_p3() {
    dense1_11_V_3_fu_4485_p3 = (!tmp_75_fu_4218_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_75_fu_4218_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_11_fu_3966_p1.read());
}

void mlp_xcel::thread_dense1_12_V_3_fu_4494_p3() {
    dense1_12_V_3_fu_4494_p3 = (!tmp_76_fu_4226_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_76_fu_4226_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_12_fu_3974_p1.read());
}

void mlp_xcel::thread_dense1_13_V_3_fu_4503_p3() {
    dense1_13_V_3_fu_4503_p3 = (!tmp_77_fu_4234_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_77_fu_4234_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_13_fu_3982_p1.read());
}

void mlp_xcel::thread_dense1_14_V_3_fu_4512_p3() {
    dense1_14_V_3_fu_4512_p3 = (!tmp_78_fu_4242_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_78_fu_4242_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_14_fu_3990_p1.read());
}

void mlp_xcel::thread_dense1_15_V_3_fu_4521_p3() {
    dense1_15_V_3_fu_4521_p3 = (!tmp_79_fu_4250_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_79_fu_4250_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_15_fu_3998_p1.read());
}

void mlp_xcel::thread_dense1_16_V_3_fu_4530_p3() {
    dense1_16_V_3_fu_4530_p3 = (!tmp_80_fu_4258_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_80_fu_4258_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_16_fu_4006_p1.read());
}

void mlp_xcel::thread_dense1_17_V_3_fu_4539_p3() {
    dense1_17_V_3_fu_4539_p3 = (!tmp_81_fu_4266_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_81_fu_4266_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_17_fu_4014_p1.read());
}

void mlp_xcel::thread_dense1_18_V_3_fu_4548_p3() {
    dense1_18_V_3_fu_4548_p3 = (!tmp_82_fu_4274_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_82_fu_4274_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_18_fu_4022_p1.read());
}

void mlp_xcel::thread_dense1_19_V_3_fu_4557_p3() {
    dense1_19_V_3_fu_4557_p3 = (!tmp_83_fu_4282_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_83_fu_4282_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_19_fu_4030_p1.read());
}

void mlp_xcel::thread_dense1_1_V_3_fu_4395_p3() {
    dense1_1_V_3_fu_4395_p3 = (!tmp_65_fu_4138_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_65_fu_4138_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_1_fu_3886_p1.read());
}

void mlp_xcel::thread_dense1_20_V_3_fu_4566_p3() {
    dense1_20_V_3_fu_4566_p3 = (!tmp_84_fu_4290_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_84_fu_4290_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_20_fu_4038_p1.read());
}

void mlp_xcel::thread_dense1_21_V_3_fu_4575_p3() {
    dense1_21_V_3_fu_4575_p3 = (!tmp_85_fu_4298_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_85_fu_4298_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_21_fu_4046_p1.read());
}

void mlp_xcel::thread_dense1_22_V_3_fu_4584_p3() {
    dense1_22_V_3_fu_4584_p3 = (!tmp_86_fu_4306_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_86_fu_4306_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_22_fu_4054_p1.read());
}

void mlp_xcel::thread_dense1_23_V_3_fu_4593_p3() {
    dense1_23_V_3_fu_4593_p3 = (!tmp_87_fu_4314_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_87_fu_4314_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_23_fu_4062_p1.read());
}

void mlp_xcel::thread_dense1_24_V_3_fu_4602_p3() {
    dense1_24_V_3_fu_4602_p3 = (!tmp_88_fu_4322_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_88_fu_4322_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_24_fu_4070_p1.read());
}

void mlp_xcel::thread_dense1_25_V_3_fu_4611_p3() {
    dense1_25_V_3_fu_4611_p3 = (!tmp_89_fu_4330_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_89_fu_4330_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_25_fu_4078_p1.read());
}

void mlp_xcel::thread_dense1_26_V_3_fu_4620_p3() {
    dense1_26_V_3_fu_4620_p3 = (!tmp_90_fu_4338_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_90_fu_4338_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_26_fu_4086_p1.read());
}

void mlp_xcel::thread_dense1_27_V_3_fu_4629_p3() {
    dense1_27_V_3_fu_4629_p3 = (!tmp_91_fu_4346_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_91_fu_4346_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_27_fu_4094_p1.read());
}

void mlp_xcel::thread_dense1_28_V_3_fu_4638_p3() {
    dense1_28_V_3_fu_4638_p3 = (!tmp_92_fu_4354_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_92_fu_4354_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_28_fu_4102_p1.read());
}

void mlp_xcel::thread_dense1_29_V_3_fu_4647_p3() {
    dense1_29_V_3_fu_4647_p3 = (!tmp_93_fu_4362_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_93_fu_4362_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_29_fu_4110_p1.read());
}

void mlp_xcel::thread_dense1_2_V_3_fu_4404_p3() {
    dense1_2_V_3_fu_4404_p3 = (!tmp_66_fu_4146_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_66_fu_4146_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_2_fu_3894_p1.read());
}

void mlp_xcel::thread_dense1_30_V_3_fu_4656_p3() {
    dense1_30_V_3_fu_4656_p3 = (!tmp_94_fu_4370_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_94_fu_4370_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_30_fu_4118_p1.read());
}

void mlp_xcel::thread_dense1_31_V_3_fu_4665_p3() {
    dense1_31_V_3_fu_4665_p3 = (!tmp_95_fu_4378_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_95_fu_4378_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_31_fu_4126_p1.read());
}

void mlp_xcel::thread_dense1_3_V_3_fu_4413_p3() {
    dense1_3_V_3_fu_4413_p3 = (!tmp_67_fu_4154_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_67_fu_4154_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_3_fu_3902_p1.read());
}

void mlp_xcel::thread_dense1_4_V_3_fu_4422_p3() {
    dense1_4_V_3_fu_4422_p3 = (!tmp_68_fu_4162_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_68_fu_4162_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_4_fu_3910_p1.read());
}

void mlp_xcel::thread_dense1_5_V_3_fu_4431_p3() {
    dense1_5_V_3_fu_4431_p3 = (!tmp_69_fu_4170_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_69_fu_4170_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_5_fu_3918_p1.read());
}

void mlp_xcel::thread_dense1_6_V_3_fu_4440_p3() {
    dense1_6_V_3_fu_4440_p3 = (!tmp_70_fu_4178_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_70_fu_4178_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_6_fu_3926_p1.read());
}

void mlp_xcel::thread_dense1_7_V_3_fu_4449_p3() {
    dense1_7_V_3_fu_4449_p3 = (!tmp_71_fu_4186_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_71_fu_4186_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_7_fu_3934_p1.read());
}

void mlp_xcel::thread_dense1_8_V_3_fu_4458_p3() {
    dense1_8_V_3_fu_4458_p3 = (!tmp_72_fu_4194_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_72_fu_4194_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_8_fu_3942_p1.read());
}

void mlp_xcel::thread_dense1_9_V_3_fu_4467_p3() {
    dense1_9_V_3_fu_4467_p3 = (!tmp_73_fu_4202_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_73_fu_4202_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln63_9_fu_3950_p1.read());
}

void mlp_xcel::thread_dense2_0_V_3_fu_5154_p3() {
    dense2_0_V_3_fu_5154_p3 = (!tmp_96_fu_5026_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_96_fu_5026_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_fu_4902_p1.read());
}

void mlp_xcel::thread_dense2_10_V_3_fu_5244_p3() {
    dense2_10_V_3_fu_5244_p3 = (!tmp_106_fu_5106_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_106_fu_5106_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_10_fu_4982_p1.read());
}

void mlp_xcel::thread_dense2_11_V_3_fu_5253_p3() {
    dense2_11_V_3_fu_5253_p3 = (!tmp_107_fu_5114_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_107_fu_5114_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_11_fu_4990_p1.read());
}

void mlp_xcel::thread_dense2_12_V_3_fu_5262_p3() {
    dense2_12_V_3_fu_5262_p3 = (!tmp_108_fu_5122_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_108_fu_5122_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_12_fu_4998_p1.read());
}

void mlp_xcel::thread_dense2_13_V_3_fu_5271_p3() {
    dense2_13_V_3_fu_5271_p3 = (!tmp_109_fu_5130_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_109_fu_5130_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_13_fu_5006_p1.read());
}

void mlp_xcel::thread_dense2_14_V_3_fu_5280_p3() {
    dense2_14_V_3_fu_5280_p3 = (!tmp_110_fu_5138_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_110_fu_5138_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_14_fu_5014_p1.read());
}

void mlp_xcel::thread_dense2_15_V_3_fu_5289_p3() {
    dense2_15_V_3_fu_5289_p3 = (!tmp_111_fu_5146_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_111_fu_5146_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_15_fu_5022_p1.read());
}

void mlp_xcel::thread_dense2_1_V_3_fu_5163_p3() {
    dense2_1_V_3_fu_5163_p3 = (!tmp_97_fu_5034_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_97_fu_5034_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_1_fu_4910_p1.read());
}

void mlp_xcel::thread_dense2_2_V_3_fu_5172_p3() {
    dense2_2_V_3_fu_5172_p3 = (!tmp_98_fu_5042_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_98_fu_5042_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_2_fu_4918_p1.read());
}

void mlp_xcel::thread_dense2_3_V_3_fu_5181_p3() {
    dense2_3_V_3_fu_5181_p3 = (!tmp_99_fu_5050_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_99_fu_5050_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_3_fu_4926_p1.read());
}

void mlp_xcel::thread_dense2_4_V_3_fu_5190_p3() {
    dense2_4_V_3_fu_5190_p3 = (!tmp_100_fu_5058_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_100_fu_5058_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_4_fu_4934_p1.read());
}

void mlp_xcel::thread_dense2_5_V_3_fu_5199_p3() {
    dense2_5_V_3_fu_5199_p3 = (!tmp_101_fu_5066_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_101_fu_5066_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_5_fu_4942_p1.read());
}

void mlp_xcel::thread_dense2_6_V_3_fu_5208_p3() {
    dense2_6_V_3_fu_5208_p3 = (!tmp_102_fu_5074_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_102_fu_5074_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_6_fu_4950_p1.read());
}

void mlp_xcel::thread_dense2_7_V_3_fu_5217_p3() {
    dense2_7_V_3_fu_5217_p3 = (!tmp_103_fu_5082_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_103_fu_5082_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_7_fu_4958_p1.read());
}

void mlp_xcel::thread_dense2_8_V_3_fu_5226_p3() {
    dense2_8_V_3_fu_5226_p3 = (!tmp_104_fu_5090_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_104_fu_5090_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_8_fu_4966_p1.read());
}

void mlp_xcel::thread_dense2_9_V_3_fu_5235_p3() {
    dense2_9_V_3_fu_5235_p3 = (!tmp_105_fu_5098_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_105_fu_5098_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln66_9_fu_4974_p1.read());
}

void mlp_xcel::thread_dense3_0_V_1_fu_5634_p3() {
    dense3_0_V_1_fu_5634_p3 = (!tmp_112_fu_5506_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_112_fu_5506_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_fu_5382_p1.read());
}

void mlp_xcel::thread_dense3_10_V_1_fu_5714_p3() {
    dense3_10_V_1_fu_5714_p3 = (!tmp_122_fu_5586_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_122_fu_5586_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_10_fu_5462_p1.read());
}

void mlp_xcel::thread_dense3_11_V_1_fu_5722_p3() {
    dense3_11_V_1_fu_5722_p3 = (!tmp_123_fu_5594_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_123_fu_5594_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_11_fu_5470_p1.read());
}

void mlp_xcel::thread_dense3_12_V_1_fu_5730_p3() {
    dense3_12_V_1_fu_5730_p3 = (!tmp_124_fu_5602_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_124_fu_5602_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_12_fu_5478_p1.read());
}

void mlp_xcel::thread_dense3_13_V_1_fu_5738_p3() {
    dense3_13_V_1_fu_5738_p3 = (!tmp_125_fu_5610_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_125_fu_5610_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_13_fu_5486_p1.read());
}

void mlp_xcel::thread_dense3_14_V_1_fu_5746_p3() {
    dense3_14_V_1_fu_5746_p3 = (!tmp_126_fu_5618_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_126_fu_5618_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_14_fu_5494_p1.read());
}

void mlp_xcel::thread_dense3_15_V_1_fu_5754_p3() {
    dense3_15_V_1_fu_5754_p3 = (!tmp_127_fu_5626_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_127_fu_5626_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_15_fu_5502_p1.read());
}

void mlp_xcel::thread_dense3_1_V_1_fu_5642_p3() {
    dense3_1_V_1_fu_5642_p3 = (!tmp_113_fu_5514_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_113_fu_5514_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_1_fu_5390_p1.read());
}

void mlp_xcel::thread_dense3_2_V_1_fu_5650_p3() {
    dense3_2_V_1_fu_5650_p3 = (!tmp_114_fu_5522_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_114_fu_5522_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_2_fu_5398_p1.read());
}

void mlp_xcel::thread_dense3_3_V_1_fu_5658_p3() {
    dense3_3_V_1_fu_5658_p3 = (!tmp_115_fu_5530_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_115_fu_5530_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_3_fu_5406_p1.read());
}

void mlp_xcel::thread_dense3_4_V_1_fu_5666_p3() {
    dense3_4_V_1_fu_5666_p3 = (!tmp_116_fu_5538_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_116_fu_5538_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_4_fu_5414_p1.read());
}

void mlp_xcel::thread_dense3_5_V_1_fu_5674_p3() {
    dense3_5_V_1_fu_5674_p3 = (!tmp_117_fu_5546_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_117_fu_5546_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_5_fu_5422_p1.read());
}

void mlp_xcel::thread_dense3_6_V_1_fu_5682_p3() {
    dense3_6_V_1_fu_5682_p3 = (!tmp_118_fu_5554_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_118_fu_5554_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_6_fu_5430_p1.read());
}

void mlp_xcel::thread_dense3_7_V_1_fu_5690_p3() {
    dense3_7_V_1_fu_5690_p3 = (!tmp_119_fu_5562_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_119_fu_5562_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_7_fu_5438_p1.read());
}

void mlp_xcel::thread_dense3_8_V_1_fu_5698_p3() {
    dense3_8_V_1_fu_5698_p3 = (!tmp_120_fu_5570_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_120_fu_5570_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_8_fu_5446_p1.read());
}

void mlp_xcel::thread_dense3_9_V_1_fu_5706_p3() {
    dense3_9_V_1_fu_5706_p3 = (!tmp_121_fu_5578_p3.read()[0].is_01())? sc_lv<26>(): ((tmp_121_fu_5578_p3.read()[0].to_bool())? ap_const_lv26_0: trunc_ln69_9_fu_5454_p1.read());
}

void mlp_xcel::thread_grp_calculate_variance_fu_2353_ap_start() {
    grp_calculate_variance_fu_2353_ap_start = grp_calculate_variance_fu_2353_ap_start_reg.read();
}

void mlp_xcel::thread_grp_dense_lay_16_16_s_fu_2265_ap_start() {
    grp_dense_lay_16_16_s_fu_2265_ap_start = grp_dense_lay_16_16_s_fu_2265_ap_start_reg.read();
}

void mlp_xcel::thread_grp_dense_lay_32_16_s_fu_1928_ap_start() {
    grp_dense_lay_32_16_s_fu_1928_ap_start = grp_dense_lay_32_16_s_fu_1928_ap_start_reg.read();
}

void mlp_xcel::thread_grp_dense_lay_64_32_s_fu_1530_ap_start() {
    grp_dense_lay_64_32_s_fu_1530_ap_start = grp_dense_lay_64_32_s_fu_1530_ap_start_reg.read();
}

void mlp_xcel::thread_grp_dense_lay_9_64_s_fu_2064_ap_start() {
    grp_dense_lay_9_64_s_fu_2064_ap_start = grp_dense_lay_9_64_s_fu_2064_ap_start_reg.read();
}

void mlp_xcel::thread_grp_generate_binary_matr_1_fu_2227_ap_start() {
    grp_generate_binary_matr_1_fu_2227_ap_start = grp_generate_binary_matr_1_fu_2227_ap_start_reg.read();
}

void mlp_xcel::thread_grp_generate_binary_matr_2_fu_2361_ap_start() {
    grp_generate_binary_matr_2_fu_2361_ap_start = grp_generate_binary_matr_2_fu_2361_ap_start_reg.read();
}

void mlp_xcel::thread_grp_generate_binary_matr_2_fu_2361_zero_percentage() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_generate_binary_matr_2_fu_2361_zero_percentage = ap_const_lv32_3C23D70A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_generate_binary_matr_2_fu_2361_zero_percentage = ap_const_lv32_3C03126F;
    } else {
        grp_generate_binary_matr_2_fu_2361_zero_percentage = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void mlp_xcel::thread_grp_generate_binary_matr_fu_1794_ap_start() {
    grp_generate_binary_matr_fu_1794_ap_start = grp_generate_binary_matr_fu_1794_ap_start_reg.read();
}

void mlp_xcel::thread_i_1_fu_6442_p2() {
    i_1_fu_6442_p2 = (!i_0_i_reg_1519.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_i_reg_1519.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void mlp_xcel::thread_i_fu_2460_p2() {
    i_fu_2460_p2 = (!i_0_reg_1495.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_reg_1495.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void mlp_xcel::thread_icmp_ln51_fu_2454_p2() {
    icmp_ln51_fu_2454_p2 = (!i_0_reg_1495.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_1495.read() == ap_const_lv7_64);
}

void mlp_xcel::thread_icmp_ln59_fu_6436_p2() {
    icmp_ln59_fu_6436_p2 = (!i_0_i_reg_1519.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_reg_1519.read() == ap_const_lv7_64);
}

void mlp_xcel::thread_mask0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_0_address0 = grp_dense_lay_9_64_s_fu_2064_mask_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_0_address0 = grp_generate_binary_matr_fu_1794_matrix_0_address0.read();
    } else {
        mask0_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_0_ce0 = grp_dense_lay_9_64_s_fu_2064_mask_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_0_ce0 = grp_generate_binary_matr_fu_1794_matrix_0_ce0.read();
    } else {
        mask0_0_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_0_we0 = grp_generate_binary_matr_fu_1794_matrix_0_we0.read();
    } else {
        mask0_0_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_10_address0 = grp_dense_lay_9_64_s_fu_2064_mask89_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_10_address0 = grp_generate_binary_matr_fu_1794_matrix_10_address0.read();
    } else {
        mask0_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_10_ce0 = grp_dense_lay_9_64_s_fu_2064_mask89_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_10_ce0 = grp_generate_binary_matr_fu_1794_matrix_10_ce0.read();
    } else {
        mask0_10_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_10_we0 = grp_generate_binary_matr_fu_1794_matrix_10_we0.read();
    } else {
        mask0_10_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_11_address0 = grp_dense_lay_9_64_s_fu_2064_mask90_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_11_address0 = grp_generate_binary_matr_fu_1794_matrix_11_address0.read();
    } else {
        mask0_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_11_ce0 = grp_dense_lay_9_64_s_fu_2064_mask90_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_11_ce0 = grp_generate_binary_matr_fu_1794_matrix_11_ce0.read();
    } else {
        mask0_11_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_11_we0 = grp_generate_binary_matr_fu_1794_matrix_11_we0.read();
    } else {
        mask0_11_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_12_address0 = grp_dense_lay_9_64_s_fu_2064_mask91_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_12_address0 = grp_generate_binary_matr_fu_1794_matrix_12_address0.read();
    } else {
        mask0_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_12_ce0 = grp_dense_lay_9_64_s_fu_2064_mask91_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_12_ce0 = grp_generate_binary_matr_fu_1794_matrix_12_ce0.read();
    } else {
        mask0_12_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_12_we0 = grp_generate_binary_matr_fu_1794_matrix_12_we0.read();
    } else {
        mask0_12_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_13_address0 = grp_dense_lay_9_64_s_fu_2064_mask92_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_13_address0 = grp_generate_binary_matr_fu_1794_matrix_13_address0.read();
    } else {
        mask0_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_13_ce0 = grp_dense_lay_9_64_s_fu_2064_mask92_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_13_ce0 = grp_generate_binary_matr_fu_1794_matrix_13_ce0.read();
    } else {
        mask0_13_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_13_we0 = grp_generate_binary_matr_fu_1794_matrix_13_we0.read();
    } else {
        mask0_13_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_14_address0 = grp_dense_lay_9_64_s_fu_2064_mask93_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_14_address0 = grp_generate_binary_matr_fu_1794_matrix_14_address0.read();
    } else {
        mask0_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_14_ce0 = grp_dense_lay_9_64_s_fu_2064_mask93_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_14_ce0 = grp_generate_binary_matr_fu_1794_matrix_14_ce0.read();
    } else {
        mask0_14_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_14_we0 = grp_generate_binary_matr_fu_1794_matrix_14_we0.read();
    } else {
        mask0_14_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_15_address0 = grp_dense_lay_9_64_s_fu_2064_mask94_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_15_address0 = grp_generate_binary_matr_fu_1794_matrix_15_address0.read();
    } else {
        mask0_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_15_ce0 = grp_dense_lay_9_64_s_fu_2064_mask94_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_15_ce0 = grp_generate_binary_matr_fu_1794_matrix_15_ce0.read();
    } else {
        mask0_15_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_15_we0 = grp_generate_binary_matr_fu_1794_matrix_15_we0.read();
    } else {
        mask0_15_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_16_address0 = grp_dense_lay_9_64_s_fu_2064_mask95_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_16_address0 = grp_generate_binary_matr_fu_1794_matrix_16_address0.read();
    } else {
        mask0_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_16_ce0 = grp_dense_lay_9_64_s_fu_2064_mask95_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_16_ce0 = grp_generate_binary_matr_fu_1794_matrix_16_ce0.read();
    } else {
        mask0_16_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_16_we0 = grp_generate_binary_matr_fu_1794_matrix_16_we0.read();
    } else {
        mask0_16_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_17_address0 = grp_dense_lay_9_64_s_fu_2064_mask96_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_17_address0 = grp_generate_binary_matr_fu_1794_matrix_17_address0.read();
    } else {
        mask0_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_17_ce0 = grp_dense_lay_9_64_s_fu_2064_mask96_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_17_ce0 = grp_generate_binary_matr_fu_1794_matrix_17_ce0.read();
    } else {
        mask0_17_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_17_we0 = grp_generate_binary_matr_fu_1794_matrix_17_we0.read();
    } else {
        mask0_17_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_18_address0 = grp_dense_lay_9_64_s_fu_2064_mask97_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_18_address0 = grp_generate_binary_matr_fu_1794_matrix_18_address0.read();
    } else {
        mask0_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_18_ce0 = grp_dense_lay_9_64_s_fu_2064_mask97_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_18_ce0 = grp_generate_binary_matr_fu_1794_matrix_18_ce0.read();
    } else {
        mask0_18_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_18_we0 = grp_generate_binary_matr_fu_1794_matrix_18_we0.read();
    } else {
        mask0_18_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_19_address0 = grp_dense_lay_9_64_s_fu_2064_mask98_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_19_address0 = grp_generate_binary_matr_fu_1794_matrix_19_address0.read();
    } else {
        mask0_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_19_ce0 = grp_dense_lay_9_64_s_fu_2064_mask98_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_19_ce0 = grp_generate_binary_matr_fu_1794_matrix_19_ce0.read();
    } else {
        mask0_19_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_19_we0 = grp_generate_binary_matr_fu_1794_matrix_19_we0.read();
    } else {
        mask0_19_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_1_address0 = grp_dense_lay_9_64_s_fu_2064_mask80_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_1_address0 = grp_generate_binary_matr_fu_1794_matrix_1_address0.read();
    } else {
        mask0_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_1_ce0 = grp_dense_lay_9_64_s_fu_2064_mask80_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_1_ce0 = grp_generate_binary_matr_fu_1794_matrix_1_ce0.read();
    } else {
        mask0_1_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_1_we0 = grp_generate_binary_matr_fu_1794_matrix_1_we0.read();
    } else {
        mask0_1_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_20_address0 = grp_dense_lay_9_64_s_fu_2064_mask99_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_20_address0 = grp_generate_binary_matr_fu_1794_matrix_20_address0.read();
    } else {
        mask0_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_20_ce0 = grp_dense_lay_9_64_s_fu_2064_mask99_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_20_ce0 = grp_generate_binary_matr_fu_1794_matrix_20_ce0.read();
    } else {
        mask0_20_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_20_we0 = grp_generate_binary_matr_fu_1794_matrix_20_we0.read();
    } else {
        mask0_20_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_21_address0 = grp_dense_lay_9_64_s_fu_2064_mask100_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_21_address0 = grp_generate_binary_matr_fu_1794_matrix_21_address0.read();
    } else {
        mask0_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_21_ce0 = grp_dense_lay_9_64_s_fu_2064_mask100_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_21_ce0 = grp_generate_binary_matr_fu_1794_matrix_21_ce0.read();
    } else {
        mask0_21_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_21_we0 = grp_generate_binary_matr_fu_1794_matrix_21_we0.read();
    } else {
        mask0_21_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_22_address0 = grp_dense_lay_9_64_s_fu_2064_mask101_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_22_address0 = grp_generate_binary_matr_fu_1794_matrix_22_address0.read();
    } else {
        mask0_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_22_ce0 = grp_dense_lay_9_64_s_fu_2064_mask101_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_22_ce0 = grp_generate_binary_matr_fu_1794_matrix_22_ce0.read();
    } else {
        mask0_22_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_22_we0 = grp_generate_binary_matr_fu_1794_matrix_22_we0.read();
    } else {
        mask0_22_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_23_address0 = grp_dense_lay_9_64_s_fu_2064_mask102_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_23_address0 = grp_generate_binary_matr_fu_1794_matrix_23_address0.read();
    } else {
        mask0_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_23_ce0 = grp_dense_lay_9_64_s_fu_2064_mask102_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_23_ce0 = grp_generate_binary_matr_fu_1794_matrix_23_ce0.read();
    } else {
        mask0_23_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_23_we0 = grp_generate_binary_matr_fu_1794_matrix_23_we0.read();
    } else {
        mask0_23_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_24_address0 = grp_dense_lay_9_64_s_fu_2064_mask103_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_24_address0 = grp_generate_binary_matr_fu_1794_matrix_24_address0.read();
    } else {
        mask0_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_24_ce0 = grp_dense_lay_9_64_s_fu_2064_mask103_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_24_ce0 = grp_generate_binary_matr_fu_1794_matrix_24_ce0.read();
    } else {
        mask0_24_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_24_we0 = grp_generate_binary_matr_fu_1794_matrix_24_we0.read();
    } else {
        mask0_24_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_25_address0 = grp_dense_lay_9_64_s_fu_2064_mask104_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_25_address0 = grp_generate_binary_matr_fu_1794_matrix_25_address0.read();
    } else {
        mask0_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_25_ce0 = grp_dense_lay_9_64_s_fu_2064_mask104_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_25_ce0 = grp_generate_binary_matr_fu_1794_matrix_25_ce0.read();
    } else {
        mask0_25_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_25_we0 = grp_generate_binary_matr_fu_1794_matrix_25_we0.read();
    } else {
        mask0_25_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_26_address0 = grp_dense_lay_9_64_s_fu_2064_mask105_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_26_address0 = grp_generate_binary_matr_fu_1794_matrix_26_address0.read();
    } else {
        mask0_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_26_ce0 = grp_dense_lay_9_64_s_fu_2064_mask105_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_26_ce0 = grp_generate_binary_matr_fu_1794_matrix_26_ce0.read();
    } else {
        mask0_26_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_26_we0 = grp_generate_binary_matr_fu_1794_matrix_26_we0.read();
    } else {
        mask0_26_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_27_address0 = grp_dense_lay_9_64_s_fu_2064_mask106_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_27_address0 = grp_generate_binary_matr_fu_1794_matrix_27_address0.read();
    } else {
        mask0_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_27_ce0 = grp_dense_lay_9_64_s_fu_2064_mask106_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_27_ce0 = grp_generate_binary_matr_fu_1794_matrix_27_ce0.read();
    } else {
        mask0_27_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_27_we0 = grp_generate_binary_matr_fu_1794_matrix_27_we0.read();
    } else {
        mask0_27_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_28_address0 = grp_dense_lay_9_64_s_fu_2064_mask107_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_28_address0 = grp_generate_binary_matr_fu_1794_matrix_28_address0.read();
    } else {
        mask0_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_28_ce0 = grp_dense_lay_9_64_s_fu_2064_mask107_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_28_ce0 = grp_generate_binary_matr_fu_1794_matrix_28_ce0.read();
    } else {
        mask0_28_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_28_we0 = grp_generate_binary_matr_fu_1794_matrix_28_we0.read();
    } else {
        mask0_28_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_29_address0 = grp_dense_lay_9_64_s_fu_2064_mask108_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_29_address0 = grp_generate_binary_matr_fu_1794_matrix_29_address0.read();
    } else {
        mask0_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_29_ce0 = grp_dense_lay_9_64_s_fu_2064_mask108_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_29_ce0 = grp_generate_binary_matr_fu_1794_matrix_29_ce0.read();
    } else {
        mask0_29_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_29_we0 = grp_generate_binary_matr_fu_1794_matrix_29_we0.read();
    } else {
        mask0_29_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_2_address0 = grp_dense_lay_9_64_s_fu_2064_mask81_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_2_address0 = grp_generate_binary_matr_fu_1794_matrix_2_address0.read();
    } else {
        mask0_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_2_ce0 = grp_dense_lay_9_64_s_fu_2064_mask81_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_2_ce0 = grp_generate_binary_matr_fu_1794_matrix_2_ce0.read();
    } else {
        mask0_2_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_2_we0 = grp_generate_binary_matr_fu_1794_matrix_2_we0.read();
    } else {
        mask0_2_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_30_address0 = grp_dense_lay_9_64_s_fu_2064_mask109_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_30_address0 = grp_generate_binary_matr_fu_1794_matrix_30_address0.read();
    } else {
        mask0_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_30_ce0 = grp_dense_lay_9_64_s_fu_2064_mask109_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_30_ce0 = grp_generate_binary_matr_fu_1794_matrix_30_ce0.read();
    } else {
        mask0_30_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_30_we0 = grp_generate_binary_matr_fu_1794_matrix_30_we0.read();
    } else {
        mask0_30_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_31_address0 = grp_dense_lay_9_64_s_fu_2064_mask110_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_31_address0 = grp_generate_binary_matr_fu_1794_matrix_31_address0.read();
    } else {
        mask0_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_31_ce0 = grp_dense_lay_9_64_s_fu_2064_mask110_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_31_ce0 = grp_generate_binary_matr_fu_1794_matrix_31_ce0.read();
    } else {
        mask0_31_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_31_we0 = grp_generate_binary_matr_fu_1794_matrix_31_we0.read();
    } else {
        mask0_31_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_32_address0 = grp_dense_lay_9_64_s_fu_2064_mask111_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_32_address0 = grp_generate_binary_matr_fu_1794_matrix_32_address0.read();
    } else {
        mask0_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_32_ce0 = grp_dense_lay_9_64_s_fu_2064_mask111_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_32_ce0 = grp_generate_binary_matr_fu_1794_matrix_32_ce0.read();
    } else {
        mask0_32_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_32_we0 = grp_generate_binary_matr_fu_1794_matrix_32_we0.read();
    } else {
        mask0_32_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_33_address0 = grp_dense_lay_9_64_s_fu_2064_mask112_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_33_address0 = grp_generate_binary_matr_fu_1794_matrix_33_address0.read();
    } else {
        mask0_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_33_ce0 = grp_dense_lay_9_64_s_fu_2064_mask112_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_33_ce0 = grp_generate_binary_matr_fu_1794_matrix_33_ce0.read();
    } else {
        mask0_33_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_33_we0 = grp_generate_binary_matr_fu_1794_matrix_33_we0.read();
    } else {
        mask0_33_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_34_address0 = grp_dense_lay_9_64_s_fu_2064_mask113_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_34_address0 = grp_generate_binary_matr_fu_1794_matrix_34_address0.read();
    } else {
        mask0_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_34_ce0 = grp_dense_lay_9_64_s_fu_2064_mask113_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_34_ce0 = grp_generate_binary_matr_fu_1794_matrix_34_ce0.read();
    } else {
        mask0_34_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_34_we0 = grp_generate_binary_matr_fu_1794_matrix_34_we0.read();
    } else {
        mask0_34_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_35_address0 = grp_dense_lay_9_64_s_fu_2064_mask114_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_35_address0 = grp_generate_binary_matr_fu_1794_matrix_35_address0.read();
    } else {
        mask0_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_35_ce0 = grp_dense_lay_9_64_s_fu_2064_mask114_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_35_ce0 = grp_generate_binary_matr_fu_1794_matrix_35_ce0.read();
    } else {
        mask0_35_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_35_we0 = grp_generate_binary_matr_fu_1794_matrix_35_we0.read();
    } else {
        mask0_35_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_36_address0 = grp_dense_lay_9_64_s_fu_2064_mask115_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_36_address0 = grp_generate_binary_matr_fu_1794_matrix_36_address0.read();
    } else {
        mask0_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_36_ce0 = grp_dense_lay_9_64_s_fu_2064_mask115_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_36_ce0 = grp_generate_binary_matr_fu_1794_matrix_36_ce0.read();
    } else {
        mask0_36_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_36_we0 = grp_generate_binary_matr_fu_1794_matrix_36_we0.read();
    } else {
        mask0_36_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_37_address0 = grp_dense_lay_9_64_s_fu_2064_mask116_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_37_address0 = grp_generate_binary_matr_fu_1794_matrix_37_address0.read();
    } else {
        mask0_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_37_ce0 = grp_dense_lay_9_64_s_fu_2064_mask116_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_37_ce0 = grp_generate_binary_matr_fu_1794_matrix_37_ce0.read();
    } else {
        mask0_37_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_37_we0 = grp_generate_binary_matr_fu_1794_matrix_37_we0.read();
    } else {
        mask0_37_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_38_address0 = grp_dense_lay_9_64_s_fu_2064_mask117_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_38_address0 = grp_generate_binary_matr_fu_1794_matrix_38_address0.read();
    } else {
        mask0_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_38_ce0 = grp_dense_lay_9_64_s_fu_2064_mask117_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_38_ce0 = grp_generate_binary_matr_fu_1794_matrix_38_ce0.read();
    } else {
        mask0_38_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_38_we0 = grp_generate_binary_matr_fu_1794_matrix_38_we0.read();
    } else {
        mask0_38_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_39_address0 = grp_dense_lay_9_64_s_fu_2064_mask118_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_39_address0 = grp_generate_binary_matr_fu_1794_matrix_39_address0.read();
    } else {
        mask0_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_39_ce0 = grp_dense_lay_9_64_s_fu_2064_mask118_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_39_ce0 = grp_generate_binary_matr_fu_1794_matrix_39_ce0.read();
    } else {
        mask0_39_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_39_we0 = grp_generate_binary_matr_fu_1794_matrix_39_we0.read();
    } else {
        mask0_39_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_3_address0 = grp_dense_lay_9_64_s_fu_2064_mask82_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_3_address0 = grp_generate_binary_matr_fu_1794_matrix_3_address0.read();
    } else {
        mask0_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_3_ce0 = grp_dense_lay_9_64_s_fu_2064_mask82_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_3_ce0 = grp_generate_binary_matr_fu_1794_matrix_3_ce0.read();
    } else {
        mask0_3_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_3_we0 = grp_generate_binary_matr_fu_1794_matrix_3_we0.read();
    } else {
        mask0_3_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_40_address0 = grp_dense_lay_9_64_s_fu_2064_mask119_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_40_address0 = grp_generate_binary_matr_fu_1794_matrix_40_address0.read();
    } else {
        mask0_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_40_ce0 = grp_dense_lay_9_64_s_fu_2064_mask119_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_40_ce0 = grp_generate_binary_matr_fu_1794_matrix_40_ce0.read();
    } else {
        mask0_40_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_40_we0 = grp_generate_binary_matr_fu_1794_matrix_40_we0.read();
    } else {
        mask0_40_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_41_address0 = grp_dense_lay_9_64_s_fu_2064_mask120_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_41_address0 = grp_generate_binary_matr_fu_1794_matrix_41_address0.read();
    } else {
        mask0_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_41_ce0 = grp_dense_lay_9_64_s_fu_2064_mask120_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_41_ce0 = grp_generate_binary_matr_fu_1794_matrix_41_ce0.read();
    } else {
        mask0_41_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_41_we0 = grp_generate_binary_matr_fu_1794_matrix_41_we0.read();
    } else {
        mask0_41_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_42_address0 = grp_dense_lay_9_64_s_fu_2064_mask121_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_42_address0 = grp_generate_binary_matr_fu_1794_matrix_42_address0.read();
    } else {
        mask0_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_42_ce0 = grp_dense_lay_9_64_s_fu_2064_mask121_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_42_ce0 = grp_generate_binary_matr_fu_1794_matrix_42_ce0.read();
    } else {
        mask0_42_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_42_we0 = grp_generate_binary_matr_fu_1794_matrix_42_we0.read();
    } else {
        mask0_42_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_43_address0 = grp_dense_lay_9_64_s_fu_2064_mask122_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_43_address0 = grp_generate_binary_matr_fu_1794_matrix_43_address0.read();
    } else {
        mask0_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_43_ce0 = grp_dense_lay_9_64_s_fu_2064_mask122_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_43_ce0 = grp_generate_binary_matr_fu_1794_matrix_43_ce0.read();
    } else {
        mask0_43_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_43_we0 = grp_generate_binary_matr_fu_1794_matrix_43_we0.read();
    } else {
        mask0_43_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_44_address0 = grp_dense_lay_9_64_s_fu_2064_mask123_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_44_address0 = grp_generate_binary_matr_fu_1794_matrix_44_address0.read();
    } else {
        mask0_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_44_ce0 = grp_dense_lay_9_64_s_fu_2064_mask123_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_44_ce0 = grp_generate_binary_matr_fu_1794_matrix_44_ce0.read();
    } else {
        mask0_44_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_44_we0 = grp_generate_binary_matr_fu_1794_matrix_44_we0.read();
    } else {
        mask0_44_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_45_address0 = grp_dense_lay_9_64_s_fu_2064_mask124_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_45_address0 = grp_generate_binary_matr_fu_1794_matrix_45_address0.read();
    } else {
        mask0_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_45_ce0 = grp_dense_lay_9_64_s_fu_2064_mask124_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_45_ce0 = grp_generate_binary_matr_fu_1794_matrix_45_ce0.read();
    } else {
        mask0_45_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_45_we0 = grp_generate_binary_matr_fu_1794_matrix_45_we0.read();
    } else {
        mask0_45_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_46_address0 = grp_dense_lay_9_64_s_fu_2064_mask125_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_46_address0 = grp_generate_binary_matr_fu_1794_matrix_46_address0.read();
    } else {
        mask0_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_46_ce0 = grp_dense_lay_9_64_s_fu_2064_mask125_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_46_ce0 = grp_generate_binary_matr_fu_1794_matrix_46_ce0.read();
    } else {
        mask0_46_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_46_we0 = grp_generate_binary_matr_fu_1794_matrix_46_we0.read();
    } else {
        mask0_46_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_47_address0 = grp_dense_lay_9_64_s_fu_2064_mask126_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_47_address0 = grp_generate_binary_matr_fu_1794_matrix_47_address0.read();
    } else {
        mask0_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_47_ce0 = grp_dense_lay_9_64_s_fu_2064_mask126_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_47_ce0 = grp_generate_binary_matr_fu_1794_matrix_47_ce0.read();
    } else {
        mask0_47_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_47_we0 = grp_generate_binary_matr_fu_1794_matrix_47_we0.read();
    } else {
        mask0_47_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_48_address0 = grp_dense_lay_9_64_s_fu_2064_mask127_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_48_address0 = grp_generate_binary_matr_fu_1794_matrix_48_address0.read();
    } else {
        mask0_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_48_ce0 = grp_dense_lay_9_64_s_fu_2064_mask127_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_48_ce0 = grp_generate_binary_matr_fu_1794_matrix_48_ce0.read();
    } else {
        mask0_48_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_48_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_48_we0 = grp_generate_binary_matr_fu_1794_matrix_48_we0.read();
    } else {
        mask0_48_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_49_address0 = grp_dense_lay_9_64_s_fu_2064_mask128_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_49_address0 = grp_generate_binary_matr_fu_1794_matrix_49_address0.read();
    } else {
        mask0_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_49_ce0 = grp_dense_lay_9_64_s_fu_2064_mask128_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_49_ce0 = grp_generate_binary_matr_fu_1794_matrix_49_ce0.read();
    } else {
        mask0_49_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_49_we0 = grp_generate_binary_matr_fu_1794_matrix_49_we0.read();
    } else {
        mask0_49_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_4_address0 = grp_dense_lay_9_64_s_fu_2064_mask83_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_4_address0 = grp_generate_binary_matr_fu_1794_matrix_4_address0.read();
    } else {
        mask0_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_4_ce0 = grp_dense_lay_9_64_s_fu_2064_mask83_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_4_ce0 = grp_generate_binary_matr_fu_1794_matrix_4_ce0.read();
    } else {
        mask0_4_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_4_we0 = grp_generate_binary_matr_fu_1794_matrix_4_we0.read();
    } else {
        mask0_4_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_50_address0 = grp_dense_lay_9_64_s_fu_2064_mask129_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_50_address0 = grp_generate_binary_matr_fu_1794_matrix_50_address0.read();
    } else {
        mask0_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_50_ce0 = grp_dense_lay_9_64_s_fu_2064_mask129_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_50_ce0 = grp_generate_binary_matr_fu_1794_matrix_50_ce0.read();
    } else {
        mask0_50_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_50_we0 = grp_generate_binary_matr_fu_1794_matrix_50_we0.read();
    } else {
        mask0_50_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_51_address0 = grp_dense_lay_9_64_s_fu_2064_mask130_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_51_address0 = grp_generate_binary_matr_fu_1794_matrix_51_address0.read();
    } else {
        mask0_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_51_ce0 = grp_dense_lay_9_64_s_fu_2064_mask130_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_51_ce0 = grp_generate_binary_matr_fu_1794_matrix_51_ce0.read();
    } else {
        mask0_51_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_51_we0 = grp_generate_binary_matr_fu_1794_matrix_51_we0.read();
    } else {
        mask0_51_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_52_address0 = grp_dense_lay_9_64_s_fu_2064_mask131_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_52_address0 = grp_generate_binary_matr_fu_1794_matrix_52_address0.read();
    } else {
        mask0_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_52_ce0 = grp_dense_lay_9_64_s_fu_2064_mask131_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_52_ce0 = grp_generate_binary_matr_fu_1794_matrix_52_ce0.read();
    } else {
        mask0_52_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_52_we0 = grp_generate_binary_matr_fu_1794_matrix_52_we0.read();
    } else {
        mask0_52_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_53_address0 = grp_dense_lay_9_64_s_fu_2064_mask132_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_53_address0 = grp_generate_binary_matr_fu_1794_matrix_53_address0.read();
    } else {
        mask0_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_53_ce0 = grp_dense_lay_9_64_s_fu_2064_mask132_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_53_ce0 = grp_generate_binary_matr_fu_1794_matrix_53_ce0.read();
    } else {
        mask0_53_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_53_we0 = grp_generate_binary_matr_fu_1794_matrix_53_we0.read();
    } else {
        mask0_53_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_54_address0 = grp_dense_lay_9_64_s_fu_2064_mask133_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_54_address0 = grp_generate_binary_matr_fu_1794_matrix_54_address0.read();
    } else {
        mask0_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_54_ce0 = grp_dense_lay_9_64_s_fu_2064_mask133_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_54_ce0 = grp_generate_binary_matr_fu_1794_matrix_54_ce0.read();
    } else {
        mask0_54_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_54_we0 = grp_generate_binary_matr_fu_1794_matrix_54_we0.read();
    } else {
        mask0_54_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_55_address0 = grp_dense_lay_9_64_s_fu_2064_mask134_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_55_address0 = grp_generate_binary_matr_fu_1794_matrix_55_address0.read();
    } else {
        mask0_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_55_ce0 = grp_dense_lay_9_64_s_fu_2064_mask134_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_55_ce0 = grp_generate_binary_matr_fu_1794_matrix_55_ce0.read();
    } else {
        mask0_55_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_55_we0 = grp_generate_binary_matr_fu_1794_matrix_55_we0.read();
    } else {
        mask0_55_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_56_address0 = grp_dense_lay_9_64_s_fu_2064_mask135_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_56_address0 = grp_generate_binary_matr_fu_1794_matrix_56_address0.read();
    } else {
        mask0_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_56_ce0 = grp_dense_lay_9_64_s_fu_2064_mask135_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_56_ce0 = grp_generate_binary_matr_fu_1794_matrix_56_ce0.read();
    } else {
        mask0_56_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_56_we0 = grp_generate_binary_matr_fu_1794_matrix_56_we0.read();
    } else {
        mask0_56_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_57_address0 = grp_dense_lay_9_64_s_fu_2064_mask136_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_57_address0 = grp_generate_binary_matr_fu_1794_matrix_57_address0.read();
    } else {
        mask0_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_57_ce0 = grp_dense_lay_9_64_s_fu_2064_mask136_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_57_ce0 = grp_generate_binary_matr_fu_1794_matrix_57_ce0.read();
    } else {
        mask0_57_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_57_we0 = grp_generate_binary_matr_fu_1794_matrix_57_we0.read();
    } else {
        mask0_57_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_58_address0 = grp_dense_lay_9_64_s_fu_2064_mask137_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_58_address0 = grp_generate_binary_matr_fu_1794_matrix_58_address0.read();
    } else {
        mask0_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_58_ce0 = grp_dense_lay_9_64_s_fu_2064_mask137_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_58_ce0 = grp_generate_binary_matr_fu_1794_matrix_58_ce0.read();
    } else {
        mask0_58_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_58_we0 = grp_generate_binary_matr_fu_1794_matrix_58_we0.read();
    } else {
        mask0_58_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_59_address0 = grp_dense_lay_9_64_s_fu_2064_mask138_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_59_address0 = grp_generate_binary_matr_fu_1794_matrix_59_address0.read();
    } else {
        mask0_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_59_ce0 = grp_dense_lay_9_64_s_fu_2064_mask138_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_59_ce0 = grp_generate_binary_matr_fu_1794_matrix_59_ce0.read();
    } else {
        mask0_59_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_59_we0 = grp_generate_binary_matr_fu_1794_matrix_59_we0.read();
    } else {
        mask0_59_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_5_address0 = grp_dense_lay_9_64_s_fu_2064_mask84_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_5_address0 = grp_generate_binary_matr_fu_1794_matrix_5_address0.read();
    } else {
        mask0_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_5_ce0 = grp_dense_lay_9_64_s_fu_2064_mask84_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_5_ce0 = grp_generate_binary_matr_fu_1794_matrix_5_ce0.read();
    } else {
        mask0_5_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_5_we0 = grp_generate_binary_matr_fu_1794_matrix_5_we0.read();
    } else {
        mask0_5_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_60_address0 = grp_dense_lay_9_64_s_fu_2064_mask139_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_60_address0 = grp_generate_binary_matr_fu_1794_matrix_60_address0.read();
    } else {
        mask0_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_60_ce0 = grp_dense_lay_9_64_s_fu_2064_mask139_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_60_ce0 = grp_generate_binary_matr_fu_1794_matrix_60_ce0.read();
    } else {
        mask0_60_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_60_we0 = grp_generate_binary_matr_fu_1794_matrix_60_we0.read();
    } else {
        mask0_60_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_61_address0 = grp_dense_lay_9_64_s_fu_2064_mask140_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_61_address0 = grp_generate_binary_matr_fu_1794_matrix_61_address0.read();
    } else {
        mask0_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_61_ce0 = grp_dense_lay_9_64_s_fu_2064_mask140_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_61_ce0 = grp_generate_binary_matr_fu_1794_matrix_61_ce0.read();
    } else {
        mask0_61_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_61_we0 = grp_generate_binary_matr_fu_1794_matrix_61_we0.read();
    } else {
        mask0_61_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_62_address0 = grp_dense_lay_9_64_s_fu_2064_mask141_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_62_address0 = grp_generate_binary_matr_fu_1794_matrix_62_address0.read();
    } else {
        mask0_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_62_ce0 = grp_dense_lay_9_64_s_fu_2064_mask141_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_62_ce0 = grp_generate_binary_matr_fu_1794_matrix_62_ce0.read();
    } else {
        mask0_62_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_62_we0 = grp_generate_binary_matr_fu_1794_matrix_62_we0.read();
    } else {
        mask0_62_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_63_address0 = grp_dense_lay_9_64_s_fu_2064_mask142_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_63_address0 = grp_generate_binary_matr_fu_1794_matrix_63_address0.read();
    } else {
        mask0_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_63_ce0 = grp_dense_lay_9_64_s_fu_2064_mask142_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_63_ce0 = grp_generate_binary_matr_fu_1794_matrix_63_ce0.read();
    } else {
        mask0_63_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_63_we0 = grp_generate_binary_matr_fu_1794_matrix_63_we0.read();
    } else {
        mask0_63_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_6_address0 = grp_dense_lay_9_64_s_fu_2064_mask85_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_6_address0 = grp_generate_binary_matr_fu_1794_matrix_6_address0.read();
    } else {
        mask0_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_6_ce0 = grp_dense_lay_9_64_s_fu_2064_mask85_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_6_ce0 = grp_generate_binary_matr_fu_1794_matrix_6_ce0.read();
    } else {
        mask0_6_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_6_we0 = grp_generate_binary_matr_fu_1794_matrix_6_we0.read();
    } else {
        mask0_6_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_7_address0 = grp_dense_lay_9_64_s_fu_2064_mask86_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_7_address0 = grp_generate_binary_matr_fu_1794_matrix_7_address0.read();
    } else {
        mask0_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_7_ce0 = grp_dense_lay_9_64_s_fu_2064_mask86_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_7_ce0 = grp_generate_binary_matr_fu_1794_matrix_7_ce0.read();
    } else {
        mask0_7_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_7_we0 = grp_generate_binary_matr_fu_1794_matrix_7_we0.read();
    } else {
        mask0_7_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_8_address0 = grp_dense_lay_9_64_s_fu_2064_mask87_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_8_address0 = grp_generate_binary_matr_fu_1794_matrix_8_address0.read();
    } else {
        mask0_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_8_ce0 = grp_dense_lay_9_64_s_fu_2064_mask87_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_8_ce0 = grp_generate_binary_matr_fu_1794_matrix_8_ce0.read();
    } else {
        mask0_8_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_8_we0 = grp_generate_binary_matr_fu_1794_matrix_8_we0.read();
    } else {
        mask0_8_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_9_address0 = grp_dense_lay_9_64_s_fu_2064_mask88_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_9_address0 = grp_generate_binary_matr_fu_1794_matrix_9_address0.read();
    } else {
        mask0_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask0_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        mask0_9_ce0 = grp_dense_lay_9_64_s_fu_2064_mask88_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_9_ce0 = grp_generate_binary_matr_fu_1794_matrix_9_ce0.read();
    } else {
        mask0_9_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask0_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mask0_9_we0 = grp_generate_binary_matr_fu_1794_matrix_9_we0.read();
    } else {
        mask0_9_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_0_address0 = grp_generate_binary_matr_1_fu_2227_matrix_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_0_address0 = grp_dense_lay_64_32_s_fu_1530_mask_address0.read();
    } else {
        mask1_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_0_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_0_ce0 = grp_dense_lay_64_32_s_fu_1530_mask_ce0.read();
    } else {
        mask1_0_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_0_we0 = grp_generate_binary_matr_1_fu_2227_matrix_0_we0.read();
    } else {
        mask1_0_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_10_address0 = grp_generate_binary_matr_1_fu_2227_matrix_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_10_address0 = grp_dense_lay_64_32_s_fu_1530_mask167_address0.read();
    } else {
        mask1_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_10_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_10_ce0 = grp_dense_lay_64_32_s_fu_1530_mask167_ce0.read();
    } else {
        mask1_10_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_10_we0 = grp_generate_binary_matr_1_fu_2227_matrix_10_we0.read();
    } else {
        mask1_10_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_11_address0 = grp_generate_binary_matr_1_fu_2227_matrix_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_11_address0 = grp_dense_lay_64_32_s_fu_1530_mask168_address0.read();
    } else {
        mask1_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_11_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_11_ce0 = grp_dense_lay_64_32_s_fu_1530_mask168_ce0.read();
    } else {
        mask1_11_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_11_we0 = grp_generate_binary_matr_1_fu_2227_matrix_11_we0.read();
    } else {
        mask1_11_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_12_address0 = grp_generate_binary_matr_1_fu_2227_matrix_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_12_address0 = grp_dense_lay_64_32_s_fu_1530_mask169_address0.read();
    } else {
        mask1_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_12_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_12_ce0 = grp_dense_lay_64_32_s_fu_1530_mask169_ce0.read();
    } else {
        mask1_12_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_12_we0 = grp_generate_binary_matr_1_fu_2227_matrix_12_we0.read();
    } else {
        mask1_12_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_13_address0 = grp_generate_binary_matr_1_fu_2227_matrix_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_13_address0 = grp_dense_lay_64_32_s_fu_1530_mask170_address0.read();
    } else {
        mask1_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_13_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_13_ce0 = grp_dense_lay_64_32_s_fu_1530_mask170_ce0.read();
    } else {
        mask1_13_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_13_we0 = grp_generate_binary_matr_1_fu_2227_matrix_13_we0.read();
    } else {
        mask1_13_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_14_address0 = grp_generate_binary_matr_1_fu_2227_matrix_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_14_address0 = grp_dense_lay_64_32_s_fu_1530_mask171_address0.read();
    } else {
        mask1_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_14_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_14_ce0 = grp_dense_lay_64_32_s_fu_1530_mask171_ce0.read();
    } else {
        mask1_14_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_14_we0 = grp_generate_binary_matr_1_fu_2227_matrix_14_we0.read();
    } else {
        mask1_14_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_15_address0 = grp_generate_binary_matr_1_fu_2227_matrix_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_15_address0 = grp_dense_lay_64_32_s_fu_1530_mask172_address0.read();
    } else {
        mask1_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_15_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_15_ce0 = grp_dense_lay_64_32_s_fu_1530_mask172_ce0.read();
    } else {
        mask1_15_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_15_we0 = grp_generate_binary_matr_1_fu_2227_matrix_15_we0.read();
    } else {
        mask1_15_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_16_address0 = grp_generate_binary_matr_1_fu_2227_matrix_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_16_address0 = grp_dense_lay_64_32_s_fu_1530_mask173_address0.read();
    } else {
        mask1_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_16_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_16_ce0 = grp_dense_lay_64_32_s_fu_1530_mask173_ce0.read();
    } else {
        mask1_16_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_16_we0 = grp_generate_binary_matr_1_fu_2227_matrix_16_we0.read();
    } else {
        mask1_16_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_17_address0 = grp_generate_binary_matr_1_fu_2227_matrix_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_17_address0 = grp_dense_lay_64_32_s_fu_1530_mask174_address0.read();
    } else {
        mask1_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_17_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_17_ce0 = grp_dense_lay_64_32_s_fu_1530_mask174_ce0.read();
    } else {
        mask1_17_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_17_we0 = grp_generate_binary_matr_1_fu_2227_matrix_17_we0.read();
    } else {
        mask1_17_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_18_address0 = grp_generate_binary_matr_1_fu_2227_matrix_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_18_address0 = grp_dense_lay_64_32_s_fu_1530_mask175_address0.read();
    } else {
        mask1_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_18_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_18_ce0 = grp_dense_lay_64_32_s_fu_1530_mask175_ce0.read();
    } else {
        mask1_18_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_18_we0 = grp_generate_binary_matr_1_fu_2227_matrix_18_we0.read();
    } else {
        mask1_18_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_19_address0 = grp_generate_binary_matr_1_fu_2227_matrix_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_19_address0 = grp_dense_lay_64_32_s_fu_1530_mask176_address0.read();
    } else {
        mask1_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_19_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_19_ce0 = grp_dense_lay_64_32_s_fu_1530_mask176_ce0.read();
    } else {
        mask1_19_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_19_we0 = grp_generate_binary_matr_1_fu_2227_matrix_19_we0.read();
    } else {
        mask1_19_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_1_address0 = grp_generate_binary_matr_1_fu_2227_matrix_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_1_address0 = grp_dense_lay_64_32_s_fu_1530_mask158_address0.read();
    } else {
        mask1_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_1_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_1_ce0 = grp_dense_lay_64_32_s_fu_1530_mask158_ce0.read();
    } else {
        mask1_1_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_1_we0 = grp_generate_binary_matr_1_fu_2227_matrix_1_we0.read();
    } else {
        mask1_1_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_20_address0 = grp_generate_binary_matr_1_fu_2227_matrix_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_20_address0 = grp_dense_lay_64_32_s_fu_1530_mask177_address0.read();
    } else {
        mask1_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_20_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_20_ce0 = grp_dense_lay_64_32_s_fu_1530_mask177_ce0.read();
    } else {
        mask1_20_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_20_we0 = grp_generate_binary_matr_1_fu_2227_matrix_20_we0.read();
    } else {
        mask1_20_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_21_address0 = grp_generate_binary_matr_1_fu_2227_matrix_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_21_address0 = grp_dense_lay_64_32_s_fu_1530_mask178_address0.read();
    } else {
        mask1_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_21_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_21_ce0 = grp_dense_lay_64_32_s_fu_1530_mask178_ce0.read();
    } else {
        mask1_21_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_21_we0 = grp_generate_binary_matr_1_fu_2227_matrix_21_we0.read();
    } else {
        mask1_21_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_22_address0 = grp_generate_binary_matr_1_fu_2227_matrix_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_22_address0 = grp_dense_lay_64_32_s_fu_1530_mask179_address0.read();
    } else {
        mask1_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_22_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_22_ce0 = grp_dense_lay_64_32_s_fu_1530_mask179_ce0.read();
    } else {
        mask1_22_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_22_we0 = grp_generate_binary_matr_1_fu_2227_matrix_22_we0.read();
    } else {
        mask1_22_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_23_address0 = grp_generate_binary_matr_1_fu_2227_matrix_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_23_address0 = grp_dense_lay_64_32_s_fu_1530_mask180_address0.read();
    } else {
        mask1_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_23_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_23_ce0 = grp_dense_lay_64_32_s_fu_1530_mask180_ce0.read();
    } else {
        mask1_23_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_23_we0 = grp_generate_binary_matr_1_fu_2227_matrix_23_we0.read();
    } else {
        mask1_23_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_24_address0 = grp_generate_binary_matr_1_fu_2227_matrix_24_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_24_address0 = grp_dense_lay_64_32_s_fu_1530_mask181_address0.read();
    } else {
        mask1_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_24_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_24_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_24_ce0 = grp_dense_lay_64_32_s_fu_1530_mask181_ce0.read();
    } else {
        mask1_24_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_24_we0 = grp_generate_binary_matr_1_fu_2227_matrix_24_we0.read();
    } else {
        mask1_24_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_25_address0 = grp_generate_binary_matr_1_fu_2227_matrix_25_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_25_address0 = grp_dense_lay_64_32_s_fu_1530_mask182_address0.read();
    } else {
        mask1_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_25_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_25_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_25_ce0 = grp_dense_lay_64_32_s_fu_1530_mask182_ce0.read();
    } else {
        mask1_25_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_25_we0 = grp_generate_binary_matr_1_fu_2227_matrix_25_we0.read();
    } else {
        mask1_25_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_26_address0 = grp_generate_binary_matr_1_fu_2227_matrix_26_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_26_address0 = grp_dense_lay_64_32_s_fu_1530_mask183_address0.read();
    } else {
        mask1_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_26_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_26_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_26_ce0 = grp_dense_lay_64_32_s_fu_1530_mask183_ce0.read();
    } else {
        mask1_26_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_26_we0 = grp_generate_binary_matr_1_fu_2227_matrix_26_we0.read();
    } else {
        mask1_26_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_27_address0 = grp_generate_binary_matr_1_fu_2227_matrix_27_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_27_address0 = grp_dense_lay_64_32_s_fu_1530_mask184_address0.read();
    } else {
        mask1_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_27_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_27_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_27_ce0 = grp_dense_lay_64_32_s_fu_1530_mask184_ce0.read();
    } else {
        mask1_27_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_27_we0 = grp_generate_binary_matr_1_fu_2227_matrix_27_we0.read();
    } else {
        mask1_27_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_28_address0 = grp_generate_binary_matr_1_fu_2227_matrix_28_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_28_address0 = grp_dense_lay_64_32_s_fu_1530_mask185_address0.read();
    } else {
        mask1_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_28_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_28_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_28_ce0 = grp_dense_lay_64_32_s_fu_1530_mask185_ce0.read();
    } else {
        mask1_28_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_28_we0 = grp_generate_binary_matr_1_fu_2227_matrix_28_we0.read();
    } else {
        mask1_28_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_29_address0 = grp_generate_binary_matr_1_fu_2227_matrix_29_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_29_address0 = grp_dense_lay_64_32_s_fu_1530_mask186_address0.read();
    } else {
        mask1_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_29_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_29_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_29_ce0 = grp_dense_lay_64_32_s_fu_1530_mask186_ce0.read();
    } else {
        mask1_29_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_29_we0 = grp_generate_binary_matr_1_fu_2227_matrix_29_we0.read();
    } else {
        mask1_29_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_2_address0 = grp_generate_binary_matr_1_fu_2227_matrix_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_2_address0 = grp_dense_lay_64_32_s_fu_1530_mask159_address0.read();
    } else {
        mask1_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_2_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_2_ce0 = grp_dense_lay_64_32_s_fu_1530_mask159_ce0.read();
    } else {
        mask1_2_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_2_we0 = grp_generate_binary_matr_1_fu_2227_matrix_2_we0.read();
    } else {
        mask1_2_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_30_address0 = grp_generate_binary_matr_1_fu_2227_matrix_30_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_30_address0 = grp_dense_lay_64_32_s_fu_1530_mask187_address0.read();
    } else {
        mask1_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_30_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_30_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_30_ce0 = grp_dense_lay_64_32_s_fu_1530_mask187_ce0.read();
    } else {
        mask1_30_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_30_we0 = grp_generate_binary_matr_1_fu_2227_matrix_30_we0.read();
    } else {
        mask1_30_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_31_address0 = grp_generate_binary_matr_1_fu_2227_matrix_31_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_31_address0 = grp_dense_lay_64_32_s_fu_1530_mask188_address0.read();
    } else {
        mask1_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_31_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_31_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_31_ce0 = grp_dense_lay_64_32_s_fu_1530_mask188_ce0.read();
    } else {
        mask1_31_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_31_we0 = grp_generate_binary_matr_1_fu_2227_matrix_31_we0.read();
    } else {
        mask1_31_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_3_address0 = grp_generate_binary_matr_1_fu_2227_matrix_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_3_address0 = grp_dense_lay_64_32_s_fu_1530_mask160_address0.read();
    } else {
        mask1_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_3_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_3_ce0 = grp_dense_lay_64_32_s_fu_1530_mask160_ce0.read();
    } else {
        mask1_3_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_3_we0 = grp_generate_binary_matr_1_fu_2227_matrix_3_we0.read();
    } else {
        mask1_3_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_4_address0 = grp_generate_binary_matr_1_fu_2227_matrix_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_4_address0 = grp_dense_lay_64_32_s_fu_1530_mask161_address0.read();
    } else {
        mask1_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_4_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_4_ce0 = grp_dense_lay_64_32_s_fu_1530_mask161_ce0.read();
    } else {
        mask1_4_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_4_we0 = grp_generate_binary_matr_1_fu_2227_matrix_4_we0.read();
    } else {
        mask1_4_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_5_address0 = grp_generate_binary_matr_1_fu_2227_matrix_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_5_address0 = grp_dense_lay_64_32_s_fu_1530_mask162_address0.read();
    } else {
        mask1_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_5_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_5_ce0 = grp_dense_lay_64_32_s_fu_1530_mask162_ce0.read();
    } else {
        mask1_5_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_5_we0 = grp_generate_binary_matr_1_fu_2227_matrix_5_we0.read();
    } else {
        mask1_5_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_6_address0 = grp_generate_binary_matr_1_fu_2227_matrix_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_6_address0 = grp_dense_lay_64_32_s_fu_1530_mask163_address0.read();
    } else {
        mask1_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_6_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_6_ce0 = grp_dense_lay_64_32_s_fu_1530_mask163_ce0.read();
    } else {
        mask1_6_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_6_we0 = grp_generate_binary_matr_1_fu_2227_matrix_6_we0.read();
    } else {
        mask1_6_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_7_address0 = grp_generate_binary_matr_1_fu_2227_matrix_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_7_address0 = grp_dense_lay_64_32_s_fu_1530_mask164_address0.read();
    } else {
        mask1_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_7_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_7_ce0 = grp_dense_lay_64_32_s_fu_1530_mask164_ce0.read();
    } else {
        mask1_7_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_7_we0 = grp_generate_binary_matr_1_fu_2227_matrix_7_we0.read();
    } else {
        mask1_7_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_8_address0 = grp_generate_binary_matr_1_fu_2227_matrix_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_8_address0 = grp_dense_lay_64_32_s_fu_1530_mask165_address0.read();
    } else {
        mask1_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_8_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_8_ce0 = grp_dense_lay_64_32_s_fu_1530_mask165_ce0.read();
    } else {
        mask1_8_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_8_we0 = grp_generate_binary_matr_1_fu_2227_matrix_8_we0.read();
    } else {
        mask1_8_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_9_address0 = grp_generate_binary_matr_1_fu_2227_matrix_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_9_address0 = grp_dense_lay_64_32_s_fu_1530_mask166_address0.read();
    } else {
        mask1_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask1_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_9_ce0 = grp_generate_binary_matr_1_fu_2227_matrix_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        mask1_9_ce0 = grp_dense_lay_64_32_s_fu_1530_mask166_ce0.read();
    } else {
        mask1_9_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask1_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mask1_9_we0 = grp_generate_binary_matr_1_fu_2227_matrix_9_we0.read();
    } else {
        mask1_9_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_0_address0 = grp_generate_binary_matr_2_fu_2361_matrix_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_0_address0 = grp_dense_lay_32_16_s_fu_1928_mask_address0.read();
    } else {
        mask2_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_0_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_0_ce0 = grp_dense_lay_32_16_s_fu_1928_mask_ce0.read();
    } else {
        mask2_0_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_0_we0 = grp_generate_binary_matr_2_fu_2361_matrix_0_we0.read();
    } else {
        mask2_0_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_10_address0 = grp_generate_binary_matr_2_fu_2361_matrix_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_10_address0 = grp_dense_lay_32_16_s_fu_1928_mask87_address0.read();
    } else {
        mask2_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_10_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_10_ce0 = grp_dense_lay_32_16_s_fu_1928_mask87_ce0.read();
    } else {
        mask2_10_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_10_we0 = grp_generate_binary_matr_2_fu_2361_matrix_10_we0.read();
    } else {
        mask2_10_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_11_address0 = grp_generate_binary_matr_2_fu_2361_matrix_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_11_address0 = grp_dense_lay_32_16_s_fu_1928_mask88_address0.read();
    } else {
        mask2_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_11_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_11_ce0 = grp_dense_lay_32_16_s_fu_1928_mask88_ce0.read();
    } else {
        mask2_11_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_11_we0 = grp_generate_binary_matr_2_fu_2361_matrix_11_we0.read();
    } else {
        mask2_11_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_12_address0 = grp_generate_binary_matr_2_fu_2361_matrix_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_12_address0 = grp_dense_lay_32_16_s_fu_1928_mask89_address0.read();
    } else {
        mask2_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_12_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_12_ce0 = grp_dense_lay_32_16_s_fu_1928_mask89_ce0.read();
    } else {
        mask2_12_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_12_we0 = grp_generate_binary_matr_2_fu_2361_matrix_12_we0.read();
    } else {
        mask2_12_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_13_address0 = grp_generate_binary_matr_2_fu_2361_matrix_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_13_address0 = grp_dense_lay_32_16_s_fu_1928_mask90_address0.read();
    } else {
        mask2_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_13_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_13_ce0 = grp_dense_lay_32_16_s_fu_1928_mask90_ce0.read();
    } else {
        mask2_13_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_13_we0 = grp_generate_binary_matr_2_fu_2361_matrix_13_we0.read();
    } else {
        mask2_13_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_14_address0 = grp_generate_binary_matr_2_fu_2361_matrix_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_14_address0 = grp_dense_lay_32_16_s_fu_1928_mask91_address0.read();
    } else {
        mask2_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_14_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_14_ce0 = grp_dense_lay_32_16_s_fu_1928_mask91_ce0.read();
    } else {
        mask2_14_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_14_we0 = grp_generate_binary_matr_2_fu_2361_matrix_14_we0.read();
    } else {
        mask2_14_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_15_address0 = grp_generate_binary_matr_2_fu_2361_matrix_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_15_address0 = grp_dense_lay_32_16_s_fu_1928_mask92_address0.read();
    } else {
        mask2_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_15_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_15_ce0 = grp_dense_lay_32_16_s_fu_1928_mask92_ce0.read();
    } else {
        mask2_15_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_15_we0 = grp_generate_binary_matr_2_fu_2361_matrix_15_we0.read();
    } else {
        mask2_15_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_1_address0 = grp_generate_binary_matr_2_fu_2361_matrix_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_1_address0 = grp_dense_lay_32_16_s_fu_1928_mask78_address0.read();
    } else {
        mask2_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_1_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_1_ce0 = grp_dense_lay_32_16_s_fu_1928_mask78_ce0.read();
    } else {
        mask2_1_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_1_we0 = grp_generate_binary_matr_2_fu_2361_matrix_1_we0.read();
    } else {
        mask2_1_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_2_address0 = grp_generate_binary_matr_2_fu_2361_matrix_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_2_address0 = grp_dense_lay_32_16_s_fu_1928_mask79_address0.read();
    } else {
        mask2_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_2_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_2_ce0 = grp_dense_lay_32_16_s_fu_1928_mask79_ce0.read();
    } else {
        mask2_2_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_2_we0 = grp_generate_binary_matr_2_fu_2361_matrix_2_we0.read();
    } else {
        mask2_2_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_3_address0 = grp_generate_binary_matr_2_fu_2361_matrix_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_3_address0 = grp_dense_lay_32_16_s_fu_1928_mask80_address0.read();
    } else {
        mask2_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_3_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_3_ce0 = grp_dense_lay_32_16_s_fu_1928_mask80_ce0.read();
    } else {
        mask2_3_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_3_we0 = grp_generate_binary_matr_2_fu_2361_matrix_3_we0.read();
    } else {
        mask2_3_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_4_address0 = grp_generate_binary_matr_2_fu_2361_matrix_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_4_address0 = grp_dense_lay_32_16_s_fu_1928_mask81_address0.read();
    } else {
        mask2_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_4_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_4_ce0 = grp_dense_lay_32_16_s_fu_1928_mask81_ce0.read();
    } else {
        mask2_4_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_4_we0 = grp_generate_binary_matr_2_fu_2361_matrix_4_we0.read();
    } else {
        mask2_4_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_5_address0 = grp_generate_binary_matr_2_fu_2361_matrix_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_5_address0 = grp_dense_lay_32_16_s_fu_1928_mask82_address0.read();
    } else {
        mask2_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_5_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_5_ce0 = grp_dense_lay_32_16_s_fu_1928_mask82_ce0.read();
    } else {
        mask2_5_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_5_we0 = grp_generate_binary_matr_2_fu_2361_matrix_5_we0.read();
    } else {
        mask2_5_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_6_address0 = grp_generate_binary_matr_2_fu_2361_matrix_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_6_address0 = grp_dense_lay_32_16_s_fu_1928_mask83_address0.read();
    } else {
        mask2_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_6_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_6_ce0 = grp_dense_lay_32_16_s_fu_1928_mask83_ce0.read();
    } else {
        mask2_6_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_6_we0 = grp_generate_binary_matr_2_fu_2361_matrix_6_we0.read();
    } else {
        mask2_6_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_7_address0 = grp_generate_binary_matr_2_fu_2361_matrix_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_7_address0 = grp_dense_lay_32_16_s_fu_1928_mask84_address0.read();
    } else {
        mask2_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_7_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_7_ce0 = grp_dense_lay_32_16_s_fu_1928_mask84_ce0.read();
    } else {
        mask2_7_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_7_we0 = grp_generate_binary_matr_2_fu_2361_matrix_7_we0.read();
    } else {
        mask2_7_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_8_address0 = grp_generate_binary_matr_2_fu_2361_matrix_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_8_address0 = grp_dense_lay_32_16_s_fu_1928_mask85_address0.read();
    } else {
        mask2_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_8_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_8_ce0 = grp_dense_lay_32_16_s_fu_1928_mask85_ce0.read();
    } else {
        mask2_8_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_8_we0 = grp_generate_binary_matr_2_fu_2361_matrix_8_we0.read();
    } else {
        mask2_8_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_9_address0 = grp_generate_binary_matr_2_fu_2361_matrix_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_9_address0 = grp_dense_lay_32_16_s_fu_1928_mask86_address0.read();
    } else {
        mask2_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask2_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_9_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        mask2_9_ce0 = grp_dense_lay_32_16_s_fu_1928_mask86_ce0.read();
    } else {
        mask2_9_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask2_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mask2_9_we0 = grp_generate_binary_matr_2_fu_2361_matrix_9_we0.read();
    } else {
        mask2_9_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_0_address0 = grp_generate_binary_matr_2_fu_2361_matrix_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_0_address0 = grp_dense_lay_16_16_s_fu_2265_mask_address0.read();
    } else {
        mask3_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_0_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_0_ce0 = grp_dense_lay_16_16_s_fu_2265_mask_ce0.read();
    } else {
        mask3_0_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_0_we0 = grp_generate_binary_matr_2_fu_2361_matrix_0_we0.read();
    } else {
        mask3_0_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_10_address0 = grp_generate_binary_matr_2_fu_2361_matrix_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_10_address0 = grp_dense_lay_16_16_s_fu_2265_mask55_address0.read();
    } else {
        mask3_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_10_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_10_ce0 = grp_dense_lay_16_16_s_fu_2265_mask55_ce0.read();
    } else {
        mask3_10_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_10_we0 = grp_generate_binary_matr_2_fu_2361_matrix_10_we0.read();
    } else {
        mask3_10_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_11_address0 = grp_generate_binary_matr_2_fu_2361_matrix_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_11_address0 = grp_dense_lay_16_16_s_fu_2265_mask56_address0.read();
    } else {
        mask3_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_11_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_11_ce0 = grp_dense_lay_16_16_s_fu_2265_mask56_ce0.read();
    } else {
        mask3_11_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_11_we0 = grp_generate_binary_matr_2_fu_2361_matrix_11_we0.read();
    } else {
        mask3_11_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_12_address0 = grp_generate_binary_matr_2_fu_2361_matrix_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_12_address0 = grp_dense_lay_16_16_s_fu_2265_mask57_address0.read();
    } else {
        mask3_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_12_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_12_ce0 = grp_dense_lay_16_16_s_fu_2265_mask57_ce0.read();
    } else {
        mask3_12_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_12_we0 = grp_generate_binary_matr_2_fu_2361_matrix_12_we0.read();
    } else {
        mask3_12_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_13_address0 = grp_generate_binary_matr_2_fu_2361_matrix_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_13_address0 = grp_dense_lay_16_16_s_fu_2265_mask58_address0.read();
    } else {
        mask3_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_13_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_13_ce0 = grp_dense_lay_16_16_s_fu_2265_mask58_ce0.read();
    } else {
        mask3_13_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_13_we0 = grp_generate_binary_matr_2_fu_2361_matrix_13_we0.read();
    } else {
        mask3_13_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_14_address0 = grp_generate_binary_matr_2_fu_2361_matrix_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_14_address0 = grp_dense_lay_16_16_s_fu_2265_mask59_address0.read();
    } else {
        mask3_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_14_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_14_ce0 = grp_dense_lay_16_16_s_fu_2265_mask59_ce0.read();
    } else {
        mask3_14_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_14_we0 = grp_generate_binary_matr_2_fu_2361_matrix_14_we0.read();
    } else {
        mask3_14_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_15_address0 = grp_generate_binary_matr_2_fu_2361_matrix_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_15_address0 = grp_dense_lay_16_16_s_fu_2265_mask60_address0.read();
    } else {
        mask3_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_15_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_15_ce0 = grp_dense_lay_16_16_s_fu_2265_mask60_ce0.read();
    } else {
        mask3_15_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_15_we0 = grp_generate_binary_matr_2_fu_2361_matrix_15_we0.read();
    } else {
        mask3_15_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_1_address0 = grp_generate_binary_matr_2_fu_2361_matrix_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_1_address0 = grp_dense_lay_16_16_s_fu_2265_mask46_address0.read();
    } else {
        mask3_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_1_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_1_ce0 = grp_dense_lay_16_16_s_fu_2265_mask46_ce0.read();
    } else {
        mask3_1_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_1_we0 = grp_generate_binary_matr_2_fu_2361_matrix_1_we0.read();
    } else {
        mask3_1_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_2_address0 = grp_generate_binary_matr_2_fu_2361_matrix_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_2_address0 = grp_dense_lay_16_16_s_fu_2265_mask47_address0.read();
    } else {
        mask3_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_2_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_2_ce0 = grp_dense_lay_16_16_s_fu_2265_mask47_ce0.read();
    } else {
        mask3_2_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_2_we0 = grp_generate_binary_matr_2_fu_2361_matrix_2_we0.read();
    } else {
        mask3_2_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_3_address0 = grp_generate_binary_matr_2_fu_2361_matrix_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_3_address0 = grp_dense_lay_16_16_s_fu_2265_mask48_address0.read();
    } else {
        mask3_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_3_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_3_ce0 = grp_dense_lay_16_16_s_fu_2265_mask48_ce0.read();
    } else {
        mask3_3_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_3_we0 = grp_generate_binary_matr_2_fu_2361_matrix_3_we0.read();
    } else {
        mask3_3_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_4_address0 = grp_generate_binary_matr_2_fu_2361_matrix_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_4_address0 = grp_dense_lay_16_16_s_fu_2265_mask49_address0.read();
    } else {
        mask3_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_4_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_4_ce0 = grp_dense_lay_16_16_s_fu_2265_mask49_ce0.read();
    } else {
        mask3_4_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_4_we0 = grp_generate_binary_matr_2_fu_2361_matrix_4_we0.read();
    } else {
        mask3_4_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_5_address0 = grp_generate_binary_matr_2_fu_2361_matrix_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_5_address0 = grp_dense_lay_16_16_s_fu_2265_mask50_address0.read();
    } else {
        mask3_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_5_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_5_ce0 = grp_dense_lay_16_16_s_fu_2265_mask50_ce0.read();
    } else {
        mask3_5_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_5_we0 = grp_generate_binary_matr_2_fu_2361_matrix_5_we0.read();
    } else {
        mask3_5_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_6_address0 = grp_generate_binary_matr_2_fu_2361_matrix_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_6_address0 = grp_dense_lay_16_16_s_fu_2265_mask51_address0.read();
    } else {
        mask3_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_6_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_6_ce0 = grp_dense_lay_16_16_s_fu_2265_mask51_ce0.read();
    } else {
        mask3_6_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_6_we0 = grp_generate_binary_matr_2_fu_2361_matrix_6_we0.read();
    } else {
        mask3_6_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_7_address0 = grp_generate_binary_matr_2_fu_2361_matrix_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_7_address0 = grp_dense_lay_16_16_s_fu_2265_mask52_address0.read();
    } else {
        mask3_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_7_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_7_ce0 = grp_dense_lay_16_16_s_fu_2265_mask52_ce0.read();
    } else {
        mask3_7_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_7_we0 = grp_generate_binary_matr_2_fu_2361_matrix_7_we0.read();
    } else {
        mask3_7_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_8_address0 = grp_generate_binary_matr_2_fu_2361_matrix_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_8_address0 = grp_dense_lay_16_16_s_fu_2265_mask53_address0.read();
    } else {
        mask3_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_8_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_8_ce0 = grp_dense_lay_16_16_s_fu_2265_mask53_ce0.read();
    } else {
        mask3_8_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_8_we0 = grp_generate_binary_matr_2_fu_2361_matrix_8_we0.read();
    } else {
        mask3_8_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_9_address0 = grp_generate_binary_matr_2_fu_2361_matrix_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_9_address0 = grp_dense_lay_16_16_s_fu_2265_mask54_address0.read();
    } else {
        mask3_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_mask3_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_9_ce0 = grp_generate_binary_matr_2_fu_2361_matrix_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        mask3_9_ce0 = grp_dense_lay_16_16_s_fu_2265_mask54_ce0.read();
    } else {
        mask3_9_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mask3_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        mask3_9_we0 = grp_generate_binary_matr_2_fu_2361_matrix_9_we0.read();
    } else {
        mask3_9_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_mul_ln1118_1_fu_5953_p1() {
    mul_ln1118_1_fu_5953_p1 =  (sc_lv<26>) (mul_ln1118_1_fu_5953_p10.read());
}

void mlp_xcel::thread_mul_ln1118_1_fu_5953_p10() {
    mul_ln1118_1_fu_5953_p10 = esl_zext<35,26>(dense3_4_V_1_reg_8566.read());
}

void mlp_xcel::thread_mul_ln1118_1_fu_5953_p2() {
    mul_ln1118_1_fu_5953_p2 = (!ap_const_lv35_7FFFFFF71.is_01() || !mul_ln1118_1_fu_5953_p1.read().is_01())? sc_lv<35>(): sc_bigint<35>(ap_const_lv35_7FFFFFF71) * sc_biguint<26>(mul_ln1118_1_fu_5953_p1.read());
}

void mlp_xcel::thread_mul_ln1118_2_fu_5962_p1() {
    mul_ln1118_2_fu_5962_p1 =  (sc_lv<26>) (mul_ln1118_2_fu_5962_p10.read());
}

void mlp_xcel::thread_mul_ln1118_2_fu_5962_p10() {
    mul_ln1118_2_fu_5962_p10 = esl_zext<36,26>(dense3_5_V_1_reg_8571.read());
}

void mlp_xcel::thread_mul_ln1118_2_fu_5962_p2() {
    mul_ln1118_2_fu_5962_p2 = (!ap_const_lv36_FFFFFFEAC.is_01() || !mul_ln1118_2_fu_5962_p1.read().is_01())? sc_lv<36>(): sc_bigint<36>(ap_const_lv36_FFFFFFEAC) * sc_biguint<26>(mul_ln1118_2_fu_5962_p1.read());
}

void mlp_xcel::thread_mul_ln1118_3_fu_6076_p1() {
    mul_ln1118_3_fu_6076_p1 =  (sc_lv<26>) (mul_ln1118_3_fu_6076_p10.read());
}

void mlp_xcel::thread_mul_ln1118_3_fu_6076_p10() {
    mul_ln1118_3_fu_6076_p10 = esl_zext<34,26>(dense3_8_V_1_reg_8587.read());
}

void mlp_xcel::thread_mul_ln1118_3_fu_6076_p2() {
    mul_ln1118_3_fu_6076_p2 = (!ap_const_lv34_3FFFFFFAC.is_01() || !mul_ln1118_3_fu_6076_p1.read().is_01())? sc_lv<34>(): sc_bigint<34>(ap_const_lv34_3FFFFFFAC) * sc_biguint<26>(mul_ln1118_3_fu_6076_p1.read());
}

void mlp_xcel::thread_mul_ln1118_4_fu_6151_p1() {
    mul_ln1118_4_fu_6151_p1 =  (sc_lv<26>) (mul_ln1118_4_fu_6151_p10.read());
}

void mlp_xcel::thread_mul_ln1118_4_fu_6151_p10() {
    mul_ln1118_4_fu_6151_p10 = esl_zext<36,26>(dense3_9_V_1_reg_8592.read());
}

void mlp_xcel::thread_mul_ln1118_4_fu_6151_p2() {
    mul_ln1118_4_fu_6151_p2 = (!ap_const_lv36_14C.is_01() || !mul_ln1118_4_fu_6151_p1.read().is_01())? sc_lv<36>(): sc_biguint<36>(ap_const_lv36_14C) * sc_biguint<26>(mul_ln1118_4_fu_6151_p1.read());
}

void mlp_xcel::thread_mul_ln1118_5_fu_6357_p1() {
    mul_ln1118_5_fu_6357_p1 =  (sc_lv<26>) (mul_ln1118_5_fu_6357_p10.read());
}

void mlp_xcel::thread_mul_ln1118_5_fu_6357_p10() {
    mul_ln1118_5_fu_6357_p10 = esl_zext<36,26>(dense3_14_V_1_reg_8619.read());
}

void mlp_xcel::thread_mul_ln1118_5_fu_6357_p2() {
    mul_ln1118_5_fu_6357_p2 = (!ap_const_lv36_FFFFFFE06.is_01() || !mul_ln1118_5_fu_6357_p1.read().is_01())? sc_lv<36>(): sc_bigint<36>(ap_const_lv36_FFFFFFE06) * sc_biguint<26>(mul_ln1118_5_fu_6357_p1.read());
}

void mlp_xcel::thread_mul_ln1118_fu_5786_p1() {
    mul_ln1118_fu_5786_p1 =  (sc_lv<26>) (mul_ln1118_fu_5786_p10.read());
}

void mlp_xcel::thread_mul_ln1118_fu_5786_p10() {
    mul_ln1118_fu_5786_p10 = esl_zext<36,26>(dense3_2_V_1_fu_5650_p3.read());
}

void mlp_xcel::thread_mul_ln1118_fu_5786_p2() {
    mul_ln1118_fu_5786_p2 = (!ap_const_lv36_FFFFFFE5B.is_01() || !mul_ln1118_fu_5786_p1.read().is_01())? sc_lv<36>(): sc_bigint<36>(ap_const_lv36_FFFFFFE5B) * sc_biguint<26>(mul_ln1118_fu_5786_p1.read());
}

void mlp_xcel::thread_mul_ln1148_fu_6464_p0() {
    mul_ln1148_fu_6464_p0 = t_V_reg_8742.read();
}

void mlp_xcel::thread_mul_ln1148_fu_6464_p2() {
    mul_ln1148_fu_6464_p2 = (!mul_ln1148_fu_6464_p0.read().is_01() || !ap_const_lv55_A3D70A4.is_01())? sc_lv<55>(): sc_bigint<27>(mul_ln1148_fu_6464_p0.read()) * sc_biguint<55>(ap_const_lv55_A3D70A4);
}

void mlp_xcel::thread_mul_ln1192_1_fu_5776_p1() {
    mul_ln1192_1_fu_5776_p1 =  (sc_lv<26>) (mul_ln1192_1_fu_5776_p10.read());
}

void mlp_xcel::thread_mul_ln1192_1_fu_5776_p10() {
    mul_ln1192_1_fu_5776_p10 = esl_zext<37,26>(dense3_1_V_1_fu_5642_p3.read());
}

void mlp_xcel::thread_mul_ln1192_1_fu_5776_p2() {
    mul_ln1192_1_fu_5776_p2 = (!ap_const_lv37_537.is_01() || !mul_ln1192_1_fu_5776_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_537) * sc_biguint<26>(mul_ln1192_1_fu_5776_p1.read());
}

void mlp_xcel::thread_mul_ln1192_2_fu_5934_p1() {
    mul_ln1192_2_fu_5934_p1 =  (sc_lv<26>) (mul_ln1192_2_fu_5934_p10.read());
}

void mlp_xcel::thread_mul_ln1192_2_fu_5934_p10() {
    mul_ln1192_2_fu_5934_p10 = esl_zext<37,26>(dense3_3_V_1_reg_8561.read());
}

void mlp_xcel::thread_mul_ln1192_2_fu_5934_p2() {
    mul_ln1192_2_fu_5934_p2 = (!ap_const_lv37_27C.is_01() || !mul_ln1192_2_fu_5934_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_27C) * sc_biguint<26>(mul_ln1192_2_fu_5934_p1.read());
}

void mlp_xcel::thread_mul_ln1192_3_fu_6067_p1() {
    mul_ln1192_3_fu_6067_p1 =  (sc_lv<26>) (mul_ln1192_3_fu_6067_p10.read());
}

void mlp_xcel::thread_mul_ln1192_3_fu_6067_p10() {
    mul_ln1192_3_fu_6067_p10 = esl_zext<37,26>(dense3_7_V_1_reg_8582.read());
}

void mlp_xcel::thread_mul_ln1192_3_fu_6067_p2() {
    mul_ln1192_3_fu_6067_p2 = (!ap_const_lv37_466.is_01() || !mul_ln1192_3_fu_6067_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_466) * sc_biguint<26>(mul_ln1192_3_fu_6067_p1.read());
}

void mlp_xcel::thread_mul_ln1192_4_fu_6238_p1() {
    mul_ln1192_4_fu_6238_p1 =  (sc_lv<26>) (mul_ln1192_4_fu_6238_p10.read());
}

void mlp_xcel::thread_mul_ln1192_4_fu_6238_p10() {
    mul_ln1192_4_fu_6238_p10 = esl_zext<37,26>(dense3_11_V_1_reg_8603.read());
}

void mlp_xcel::thread_mul_ln1192_4_fu_6238_p2() {
    mul_ln1192_4_fu_6238_p2 = (!ap_const_lv37_4FA.is_01() || !mul_ln1192_4_fu_6238_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_4FA) * sc_biguint<26>(mul_ln1192_4_fu_6238_p1.read());
}

void mlp_xcel::thread_mul_ln1192_5_fu_6257_p1() {
    mul_ln1192_5_fu_6257_p1 =  (sc_lv<26>) (mul_ln1192_5_fu_6257_p10.read());
}

void mlp_xcel::thread_mul_ln1192_5_fu_6257_p10() {
    mul_ln1192_5_fu_6257_p10 = esl_zext<37,26>(dense3_13_V_1_reg_8614.read());
}

void mlp_xcel::thread_mul_ln1192_5_fu_6257_p2() {
    mul_ln1192_5_fu_6257_p2 = (!ap_const_lv37_476.is_01() || !mul_ln1192_5_fu_6257_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_476) * sc_biguint<26>(mul_ln1192_5_fu_6257_p1.read());
}

void mlp_xcel::thread_mul_ln1192_6_fu_6376_p1() {
    mul_ln1192_6_fu_6376_p1 =  (sc_lv<26>) (mul_ln1192_6_fu_6376_p10.read());
}

void mlp_xcel::thread_mul_ln1192_6_fu_6376_p10() {
    mul_ln1192_6_fu_6376_p10 = esl_zext<37,26>(dense3_15_V_1_reg_8624.read());
}

void mlp_xcel::thread_mul_ln1192_6_fu_6376_p2() {
    mul_ln1192_6_fu_6376_p2 = (!ap_const_lv37_3C4.is_01() || !mul_ln1192_6_fu_6376_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_3C4) * sc_biguint<26>(mul_ln1192_6_fu_6376_p1.read());
}

void mlp_xcel::thread_mul_ln1192_fu_5766_p1() {
    mul_ln1192_fu_5766_p1 =  (sc_lv<26>) (mul_ln1192_fu_5766_p10.read());
}

void mlp_xcel::thread_mul_ln1192_fu_5766_p10() {
    mul_ln1192_fu_5766_p10 = esl_zext<36,26>(dense3_0_V_1_fu_5634_p3.read());
}

void mlp_xcel::thread_mul_ln1192_fu_5766_p2() {
    mul_ln1192_fu_5766_p2 = (!ap_const_lv36_3A3.is_01() || !mul_ln1192_fu_5766_p1.read().is_01())? sc_lv<36>(): sc_biguint<36>(ap_const_lv36_3A3) * sc_biguint<26>(mul_ln1192_fu_5766_p1.read());
}

void mlp_xcel::thread_outputs_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln59_fu_6436_p2.read()))) {
        outputs_V_address0 =  (sc_lv<7>) (zext_ln61_fu_6448_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        outputs_V_address0 =  (sc_lv<7>) (zext_ln60_fu_6431_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        outputs_V_address0 = grp_calculate_variance_fu_2353_outputs_V_2_address0.read();
    } else {
        outputs_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void mlp_xcel::thread_outputs_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln59_fu_6436_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        outputs_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        outputs_V_ce0 = grp_calculate_variance_fu_2353_outputs_V_2_ce0.read();
    } else {
        outputs_V_ce0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_outputs_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        outputs_V_we0 = ap_const_logic_1;
    } else {
        outputs_V_we0 = ap_const_logic_0;
    }
}

void mlp_xcel::thread_select_ln1148_1_fu_6515_p3() {
    select_ln1148_1_fu_6515_p3 = (!tmp_128_reg_8747.read()[0].is_01())? sc_lv<27>(): ((tmp_128_reg_8747.read()[0].to_bool())? sub_ln1148_1_fu_6509_p2.read(): sext_ln1148_2_fu_6499_p1.read());
}

void mlp_xcel::thread_select_ln1148_fu_6502_p3() {
    select_ln1148_fu_6502_p3 = (!tmp_128_reg_8747.read()[0].is_01())? sc_lv<27>(): ((tmp_128_reg_8747.read()[0].to_bool())? sext_ln1148_1_fu_6495_p1.read(): sext_ln1148_2_fu_6499_p1.read());
}

void mlp_xcel::thread_sext_ln1118_1_fu_6007_p1() {
    sext_ln1118_1_fu_6007_p1 = esl_sext<37,36>(mul_ln1118_2_reg_8659.read());
}

void mlp_xcel::thread_sext_ln1118_2_fu_6382_p1() {
    sext_ln1118_2_fu_6382_p1 = esl_sext<37,36>(mul_ln1118_5_reg_8709.read());
}

void mlp_xcel::thread_sext_ln1118_fu_5904_p1() {
    sext_ln1118_fu_5904_p1 = esl_sext<37,36>(mul_ln1118_reg_8639.read());
}

void mlp_xcel::thread_sext_ln1148_1_fu_6495_p1() {
    sext_ln1148_1_fu_6495_p1 = esl_sext<27,21>(tmp_129_fu_6485_p4.read());
}

void mlp_xcel::thread_sext_ln1148_2_fu_6499_p1() {
    sext_ln1148_2_fu_6499_p1 = esl_sext<27,21>(tmp_130_reg_8758.read());
}

void mlp_xcel::thread_sext_ln1192_1_fu_6089_p1() {
    sext_ln1192_1_fu_6089_p1 = esl_sext<37,32>(sub_ln1118_reg_8664.read());
}

void mlp_xcel::thread_sext_ln1192_2_fu_6139_p1() {
    sext_ln1192_2_fu_6139_p1 = esl_sext<37,34>(mul_ln1118_3_reg_8679.read());
}

void mlp_xcel::thread_sext_ln1192_fu_5998_p1() {
    sext_ln1192_fu_5998_p1 = esl_sext<37,35>(mul_ln1118_1_reg_8654.read());
}

void mlp_xcel::thread_shl_ln1118_1_fu_6183_p3() {
    shl_ln1118_1_fu_6183_p3 = esl_concat<26,10>(dense3_10_V_1_reg_8597.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln1118_2_fu_6194_p3() {
    shl_ln1118_2_fu_6194_p3 = esl_concat<26,4>(dense3_10_V_1_reg_8597.read(), ap_const_lv4_0);
}

void mlp_xcel::thread_shl_ln1118_3_fu_6275_p3() {
    shl_ln1118_3_fu_6275_p3 = esl_concat<26,7>(dense3_12_V_1_reg_8608.read(), ap_const_lv7_0);
}

void mlp_xcel::thread_shl_ln1118_4_fu_6286_p3() {
    shl_ln1118_4_fu_6286_p3 = esl_concat<26,3>(dense3_12_V_1_reg_8608.read(), ap_const_lv3_0);
}

void mlp_xcel::thread_shl_ln1_fu_6037_p3() {
    shl_ln1_fu_6037_p3 = esl_concat<26,5>(dense3_6_V_1_reg_8576.read(), ap_const_lv5_0);
}

void mlp_xcel::thread_shl_ln728_10_fu_6313_p3() {
    shl_ln728_10_fu_6313_p3 = esl_concat<27,10>(tmp_10_fu_6303_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_11_fu_6341_p3() {
    shl_ln728_11_fu_6341_p3 = esl_concat<27,10>(tmp_11_fu_6331_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_12_fu_6385_p3() {
    shl_ln728_12_fu_6385_p3 = esl_concat<27,10>(tmp_12_reg_8714.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_13_fu_6408_p3() {
    shl_ln728_13_fu_6408_p3 = esl_concat<27,10>(tmp_13_fu_6398_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_1_fu_5917_p3() {
    shl_ln728_1_fu_5917_p3 = esl_concat<27,10>(tmp_1_fu_5907_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_2_fu_5968_p3() {
    shl_ln728_2_fu_5968_p3 = esl_concat<27,10>(tmp_2_reg_8649.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_3_fu_5990_p3() {
    shl_ln728_3_fu_5990_p3 = esl_concat<27,10>(tmp_3_fu_5980_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_4_fu_6020_p3() {
    shl_ln728_4_fu_6020_p3 = esl_concat<27,10>(tmp_4_fu_6010_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_5_fu_6082_p3() {
    shl_ln728_5_fu_6082_p3 = esl_concat<27,10>(tmp_5_reg_8669.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_6_fu_6108_p3() {
    shl_ln728_6_fu_6108_p3 = esl_concat<27,10>(tmp_6_fu_6098_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_7_fu_6131_p3() {
    shl_ln728_7_fu_6131_p3 = esl_concat<27,10>(tmp_7_fu_6121_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_8_fu_6170_p3() {
    shl_ln728_8_fu_6170_p3 = esl_concat<27,10>(tmp_8_reg_8689.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_9_fu_6221_p3() {
    shl_ln728_9_fu_6221_p3 = esl_concat<27,10>(tmp_9_fu_6211_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln728_s_fu_6263_p3() {
    shl_ln728_s_fu_6263_p3 = esl_concat<27,10>(tmp_s_reg_8699.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_shl_ln_fu_5887_p3() {
    shl_ln_fu_5887_p3 = esl_concat<26,10>(tmp_fu_5877_p4.read(), ap_const_lv10_0);
}

void mlp_xcel::thread_sub_ln1118_1_fu_6205_p2() {
    sub_ln1118_1_fu_6205_p2 = (!zext_ln1118_7_fu_6190_p1.read().is_01() || !zext_ln1118_8_fu_6201_p1.read().is_01())? sc_lv<37>(): (sc_biguint<37>(zext_ln1118_7_fu_6190_p1.read()) - sc_biguint<37>(zext_ln1118_8_fu_6201_p1.read()));
}

void mlp_xcel::thread_sub_ln1118_fu_6048_p2() {
    sub_ln1118_fu_6048_p2 = (!zext_ln1118_4_fu_6044_p1.read().is_01() || !zext_ln1118_3_fu_6034_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1118_4_fu_6044_p1.read()) - sc_biguint<32>(zext_ln1118_3_fu_6034_p1.read()));
}

void mlp_xcel::thread_sub_ln1148_1_fu_6509_p2() {
    sub_ln1148_1_fu_6509_p2 = (!ap_const_lv27_0.is_01() || !select_ln1148_fu_6502_p3.read().is_01())? sc_lv<27>(): (sc_biguint<27>(ap_const_lv27_0) - sc_biguint<27>(select_ln1148_fu_6502_p3.read()));
}

void mlp_xcel::thread_sub_ln1148_fu_6480_p2() {
    sub_ln1148_fu_6480_p2 = (!ap_const_lv55_0.is_01() || !mul_ln1148_reg_8753.read().is_01())? sc_lv<55>(): (sc_biguint<55>(ap_const_lv55_0) - sc_biguint<55>(mul_ln1148_reg_8753.read()));
}

void mlp_xcel::thread_sum_V_fu_6522_p2() {
    sum_V_fu_6522_p2 = (!select_ln1148_1_fu_6515_p3.read().is_01() || !p_Val2_s_reg_1507.read().is_01())? sc_lv<27>(): (sc_biguint<27>(select_ln1148_1_fu_6515_p3.read()) + sc_biguint<27>(p_Val2_s_reg_1507.read()));
}

void mlp_xcel::thread_tmp_100_fu_5058_p3() {
    tmp_100_fu_5058_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_4.read().range(26, 26);
}

void mlp_xcel::thread_tmp_101_fu_5066_p3() {
    tmp_101_fu_5066_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_5.read().range(26, 26);
}

void mlp_xcel::thread_tmp_102_fu_5074_p3() {
    tmp_102_fu_5074_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_6.read().range(26, 26);
}

void mlp_xcel::thread_tmp_103_fu_5082_p3() {
    tmp_103_fu_5082_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_7.read().range(26, 26);
}

void mlp_xcel::thread_tmp_104_fu_5090_p3() {
    tmp_104_fu_5090_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_8.read().range(26, 26);
}

void mlp_xcel::thread_tmp_105_fu_5098_p3() {
    tmp_105_fu_5098_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_9.read().range(26, 26);
}

void mlp_xcel::thread_tmp_106_fu_5106_p3() {
    tmp_106_fu_5106_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_10.read().range(26, 26);
}

void mlp_xcel::thread_tmp_107_fu_5114_p3() {
    tmp_107_fu_5114_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_11.read().range(26, 26);
}

void mlp_xcel::thread_tmp_108_fu_5122_p3() {
    tmp_108_fu_5122_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_12.read().range(26, 26);
}

void mlp_xcel::thread_tmp_109_fu_5130_p3() {
    tmp_109_fu_5130_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_13.read().range(26, 26);
}

void mlp_xcel::thread_tmp_10_fu_6303_p4() {
    tmp_10_fu_6303_p4 = add_ln1192_11_fu_6270_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_110_fu_5138_p3() {
    tmp_110_fu_5138_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_14.read().range(26, 26);
}

void mlp_xcel::thread_tmp_111_fu_5146_p3() {
    tmp_111_fu_5146_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_15.read().range(26, 26);
}

void mlp_xcel::thread_tmp_112_fu_5506_p3() {
    tmp_112_fu_5506_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_0.read().range(26, 26);
}

void mlp_xcel::thread_tmp_113_fu_5514_p3() {
    tmp_113_fu_5514_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_1.read().range(26, 26);
}

void mlp_xcel::thread_tmp_114_fu_5522_p3() {
    tmp_114_fu_5522_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_2.read().range(26, 26);
}

void mlp_xcel::thread_tmp_115_fu_5530_p3() {
    tmp_115_fu_5530_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_3.read().range(26, 26);
}

void mlp_xcel::thread_tmp_116_fu_5538_p3() {
    tmp_116_fu_5538_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_4.read().range(26, 26);
}

void mlp_xcel::thread_tmp_117_fu_5546_p3() {
    tmp_117_fu_5546_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_5.read().range(26, 26);
}

void mlp_xcel::thread_tmp_118_fu_5554_p3() {
    tmp_118_fu_5554_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_6.read().range(26, 26);
}

void mlp_xcel::thread_tmp_119_fu_5562_p3() {
    tmp_119_fu_5562_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_7.read().range(26, 26);
}

void mlp_xcel::thread_tmp_11_fu_6331_p4() {
    tmp_11_fu_6331_p4 = add_ln1192_12_fu_6325_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_120_fu_5570_p3() {
    tmp_120_fu_5570_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_8.read().range(26, 26);
}

void mlp_xcel::thread_tmp_121_fu_5578_p3() {
    tmp_121_fu_5578_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_9.read().range(26, 26);
}

void mlp_xcel::thread_tmp_122_fu_5586_p3() {
    tmp_122_fu_5586_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_10.read().range(26, 26);
}

void mlp_xcel::thread_tmp_123_fu_5594_p3() {
    tmp_123_fu_5594_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_11.read().range(26, 26);
}

void mlp_xcel::thread_tmp_124_fu_5602_p3() {
    tmp_124_fu_5602_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_12.read().range(26, 26);
}

void mlp_xcel::thread_tmp_125_fu_5610_p3() {
    tmp_125_fu_5610_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_13.read().range(26, 26);
}

void mlp_xcel::thread_tmp_126_fu_5618_p3() {
    tmp_126_fu_5618_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_14.read().range(26, 26);
}

void mlp_xcel::thread_tmp_127_fu_5626_p3() {
    tmp_127_fu_5626_p3 = grp_dense_lay_16_16_s_fu_2265_ap_return_15.read().range(26, 26);
}

void mlp_xcel::thread_tmp_128_fu_6453_p1() {
    tmp_128_fu_6453_p1 = outputs_V_q0.read();
}

void mlp_xcel::thread_tmp_129_fu_6485_p4() {
    tmp_129_fu_6485_p4 = sub_ln1148_fu_6480_p2.read().range(54, 34);
}

void mlp_xcel::thread_tmp_13_fu_6398_p4() {
    tmp_13_fu_6398_p4 = add_ln1192_14_fu_6392_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_1_fu_5907_p4() {
    tmp_1_fu_5907_p4 = add_ln1192_1_fu_5899_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_3_fu_5980_p4() {
    tmp_3_fu_5980_p4 = add_ln1192_3_fu_5975_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_4_fu_6010_p4() {
    tmp_4_fu_6010_p4 = add_ln1192_4_fu_6001_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_64_fu_4130_p3() {
    tmp_64_fu_4130_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_0.read().range(26, 26);
}

void mlp_xcel::thread_tmp_65_fu_4138_p3() {
    tmp_65_fu_4138_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_1.read().range(26, 26);
}

void mlp_xcel::thread_tmp_66_fu_4146_p3() {
    tmp_66_fu_4146_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_2.read().range(26, 26);
}

void mlp_xcel::thread_tmp_67_fu_4154_p3() {
    tmp_67_fu_4154_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_3.read().range(26, 26);
}

void mlp_xcel::thread_tmp_68_fu_4162_p3() {
    tmp_68_fu_4162_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_4.read().range(26, 26);
}

void mlp_xcel::thread_tmp_69_fu_4170_p3() {
    tmp_69_fu_4170_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_5.read().range(26, 26);
}

void mlp_xcel::thread_tmp_6_fu_6098_p4() {
    tmp_6_fu_6098_p4 = add_ln1192_6_fu_6092_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_70_fu_4178_p3() {
    tmp_70_fu_4178_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_6.read().range(26, 26);
}

void mlp_xcel::thread_tmp_71_fu_4186_p3() {
    tmp_71_fu_4186_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_7.read().range(26, 26);
}

void mlp_xcel::thread_tmp_72_fu_4194_p3() {
    tmp_72_fu_4194_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_8.read().range(26, 26);
}

void mlp_xcel::thread_tmp_73_fu_4202_p3() {
    tmp_73_fu_4202_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_9.read().range(26, 26);
}

void mlp_xcel::thread_tmp_74_fu_4210_p3() {
    tmp_74_fu_4210_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_10.read().range(26, 26);
}

void mlp_xcel::thread_tmp_75_fu_4218_p3() {
    tmp_75_fu_4218_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_11.read().range(26, 26);
}

void mlp_xcel::thread_tmp_76_fu_4226_p3() {
    tmp_76_fu_4226_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_12.read().range(26, 26);
}

void mlp_xcel::thread_tmp_77_fu_4234_p3() {
    tmp_77_fu_4234_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_13.read().range(26, 26);
}

void mlp_xcel::thread_tmp_78_fu_4242_p3() {
    tmp_78_fu_4242_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_14.read().range(26, 26);
}

void mlp_xcel::thread_tmp_79_fu_4250_p3() {
    tmp_79_fu_4250_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_15.read().range(26, 26);
}

void mlp_xcel::thread_tmp_7_fu_6121_p4() {
    tmp_7_fu_6121_p4 = add_ln1192_7_fu_6116_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_80_fu_4258_p3() {
    tmp_80_fu_4258_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_16.read().range(26, 26);
}

void mlp_xcel::thread_tmp_81_fu_4266_p3() {
    tmp_81_fu_4266_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_17.read().range(26, 26);
}

void mlp_xcel::thread_tmp_82_fu_4274_p3() {
    tmp_82_fu_4274_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_18.read().range(26, 26);
}

void mlp_xcel::thread_tmp_83_fu_4282_p3() {
    tmp_83_fu_4282_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_19.read().range(26, 26);
}

void mlp_xcel::thread_tmp_84_fu_4290_p3() {
    tmp_84_fu_4290_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_20.read().range(26, 26);
}

void mlp_xcel::thread_tmp_85_fu_4298_p3() {
    tmp_85_fu_4298_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_21.read().range(26, 26);
}

void mlp_xcel::thread_tmp_86_fu_4306_p3() {
    tmp_86_fu_4306_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_22.read().range(26, 26);
}

void mlp_xcel::thread_tmp_87_fu_4314_p3() {
    tmp_87_fu_4314_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_23.read().range(26, 26);
}

void mlp_xcel::thread_tmp_88_fu_4322_p3() {
    tmp_88_fu_4322_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_24.read().range(26, 26);
}

void mlp_xcel::thread_tmp_89_fu_4330_p3() {
    tmp_89_fu_4330_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_25.read().range(26, 26);
}

void mlp_xcel::thread_tmp_90_fu_4338_p3() {
    tmp_90_fu_4338_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_26.read().range(26, 26);
}

void mlp_xcel::thread_tmp_91_fu_4346_p3() {
    tmp_91_fu_4346_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_27.read().range(26, 26);
}

void mlp_xcel::thread_tmp_92_fu_4354_p3() {
    tmp_92_fu_4354_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_28.read().range(26, 26);
}

void mlp_xcel::thread_tmp_93_fu_4362_p3() {
    tmp_93_fu_4362_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_29.read().range(26, 26);
}

void mlp_xcel::thread_tmp_94_fu_4370_p3() {
    tmp_94_fu_4370_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_30.read().range(26, 26);
}

void mlp_xcel::thread_tmp_95_fu_4378_p3() {
    tmp_95_fu_4378_p3 = grp_dense_lay_64_32_s_fu_1530_ap_return_31.read().range(26, 26);
}

void mlp_xcel::thread_tmp_96_fu_5026_p3() {
    tmp_96_fu_5026_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_0.read().range(26, 26);
}

void mlp_xcel::thread_tmp_97_fu_5034_p3() {
    tmp_97_fu_5034_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_1.read().range(26, 26);
}

void mlp_xcel::thread_tmp_98_fu_5042_p3() {
    tmp_98_fu_5042_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_2.read().range(26, 26);
}

void mlp_xcel::thread_tmp_99_fu_5050_p3() {
    tmp_99_fu_5050_p3 = grp_dense_lay_32_16_s_fu_1928_ap_return_3.read().range(26, 26);
}

void mlp_xcel::thread_tmp_9_fu_6211_p4() {
    tmp_9_fu_6211_p4 = add_ln1192_9_fu_6177_p2.read().range(36, 10);
}

void mlp_xcel::thread_tmp_fu_5877_p4() {
    tmp_fu_5877_p4 = add_ln1192_fu_5872_p2.read().range(35, 10);
}

void mlp_xcel::thread_trunc_ln63_10_fu_3958_p1() {
    trunc_ln63_10_fu_3958_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_10.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_11_fu_3966_p1() {
    trunc_ln63_11_fu_3966_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_11.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_12_fu_3974_p1() {
    trunc_ln63_12_fu_3974_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_12.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_13_fu_3982_p1() {
    trunc_ln63_13_fu_3982_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_13.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_14_fu_3990_p1() {
    trunc_ln63_14_fu_3990_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_14.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_15_fu_3998_p1() {
    trunc_ln63_15_fu_3998_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_15.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_16_fu_4006_p1() {
    trunc_ln63_16_fu_4006_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_16.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_17_fu_4014_p1() {
    trunc_ln63_17_fu_4014_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_17.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_18_fu_4022_p1() {
    trunc_ln63_18_fu_4022_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_18.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_19_fu_4030_p1() {
    trunc_ln63_19_fu_4030_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_19.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_1_fu_3886_p1() {
    trunc_ln63_1_fu_3886_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_1.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_20_fu_4038_p1() {
    trunc_ln63_20_fu_4038_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_20.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_21_fu_4046_p1() {
    trunc_ln63_21_fu_4046_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_21.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_22_fu_4054_p1() {
    trunc_ln63_22_fu_4054_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_22.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_23_fu_4062_p1() {
    trunc_ln63_23_fu_4062_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_23.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_24_fu_4070_p1() {
    trunc_ln63_24_fu_4070_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_24.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_25_fu_4078_p1() {
    trunc_ln63_25_fu_4078_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_25.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_26_fu_4086_p1() {
    trunc_ln63_26_fu_4086_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_26.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_27_fu_4094_p1() {
    trunc_ln63_27_fu_4094_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_27.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_28_fu_4102_p1() {
    trunc_ln63_28_fu_4102_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_28.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_29_fu_4110_p1() {
    trunc_ln63_29_fu_4110_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_29.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_2_fu_3894_p1() {
    trunc_ln63_2_fu_3894_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_2.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_30_fu_4118_p1() {
    trunc_ln63_30_fu_4118_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_30.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_31_fu_4126_p1() {
    trunc_ln63_31_fu_4126_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_31.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_3_fu_3902_p1() {
    trunc_ln63_3_fu_3902_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_3.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_4_fu_3910_p1() {
    trunc_ln63_4_fu_3910_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_4.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_5_fu_3918_p1() {
    trunc_ln63_5_fu_3918_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_5.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_6_fu_3926_p1() {
    trunc_ln63_6_fu_3926_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_6.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_7_fu_3934_p1() {
    trunc_ln63_7_fu_3934_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_7.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_8_fu_3942_p1() {
    trunc_ln63_8_fu_3942_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_8.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_9_fu_3950_p1() {
    trunc_ln63_9_fu_3950_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_9.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln63_fu_3878_p1() {
    trunc_ln63_fu_3878_p1 = grp_dense_lay_64_32_s_fu_1530_ap_return_0.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_10_fu_4982_p1() {
    trunc_ln66_10_fu_4982_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_10.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_11_fu_4990_p1() {
    trunc_ln66_11_fu_4990_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_11.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_12_fu_4998_p1() {
    trunc_ln66_12_fu_4998_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_12.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_13_fu_5006_p1() {
    trunc_ln66_13_fu_5006_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_13.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_14_fu_5014_p1() {
    trunc_ln66_14_fu_5014_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_14.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_15_fu_5022_p1() {
    trunc_ln66_15_fu_5022_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_15.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_1_fu_4910_p1() {
    trunc_ln66_1_fu_4910_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_1.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_2_fu_4918_p1() {
    trunc_ln66_2_fu_4918_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_2.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_3_fu_4926_p1() {
    trunc_ln66_3_fu_4926_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_3.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_4_fu_4934_p1() {
    trunc_ln66_4_fu_4934_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_4.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_5_fu_4942_p1() {
    trunc_ln66_5_fu_4942_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_5.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_6_fu_4950_p1() {
    trunc_ln66_6_fu_4950_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_6.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_7_fu_4958_p1() {
    trunc_ln66_7_fu_4958_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_7.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_8_fu_4966_p1() {
    trunc_ln66_8_fu_4966_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_8.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_9_fu_4974_p1() {
    trunc_ln66_9_fu_4974_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_9.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln66_fu_4902_p1() {
    trunc_ln66_fu_4902_p1 = grp_dense_lay_32_16_s_fu_1928_ap_return_0.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_10_fu_5462_p1() {
    trunc_ln69_10_fu_5462_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_10.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_11_fu_5470_p1() {
    trunc_ln69_11_fu_5470_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_11.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_12_fu_5478_p1() {
    trunc_ln69_12_fu_5478_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_12.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_13_fu_5486_p1() {
    trunc_ln69_13_fu_5486_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_13.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_14_fu_5494_p1() {
    trunc_ln69_14_fu_5494_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_14.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_15_fu_5502_p1() {
    trunc_ln69_15_fu_5502_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_15.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_1_fu_5390_p1() {
    trunc_ln69_1_fu_5390_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_1.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_2_fu_5398_p1() {
    trunc_ln69_2_fu_5398_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_2.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_3_fu_5406_p1() {
    trunc_ln69_3_fu_5406_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_3.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_4_fu_5414_p1() {
    trunc_ln69_4_fu_5414_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_4.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_5_fu_5422_p1() {
    trunc_ln69_5_fu_5422_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_5.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_6_fu_5430_p1() {
    trunc_ln69_6_fu_5430_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_6.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_7_fu_5438_p1() {
    trunc_ln69_7_fu_5438_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_7.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_8_fu_5446_p1() {
    trunc_ln69_8_fu_5446_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_8.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_9_fu_5454_p1() {
    trunc_ln69_9_fu_5454_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_9.read().range(26-1, 0);
}

void mlp_xcel::thread_trunc_ln69_fu_5382_p1() {
    trunc_ln69_fu_5382_p1 = grp_dense_lay_16_16_s_fu_2265_ap_return_0.read().range(26-1, 0);
}

void mlp_xcel::thread_zext_ln1118_10_fu_6293_p1() {
    zext_ln1118_10_fu_6293_p1 = esl_zext<34,29>(shl_ln1118_4_fu_6286_p3.read());
}

void mlp_xcel::thread_zext_ln1118_11_fu_6167_p1() {
    zext_ln1118_11_fu_6167_p1 = esl_zext<37,36>(mul_ln1118_4_reg_8684.read());
}

void mlp_xcel::thread_zext_ln1118_3_fu_6034_p1() {
    zext_ln1118_3_fu_6034_p1 = esl_zext<32,26>(dense3_6_V_1_reg_8576.read());
}

void mlp_xcel::thread_zext_ln1118_4_fu_6044_p1() {
    zext_ln1118_4_fu_6044_p1 = esl_zext<32,31>(shl_ln1_fu_6037_p3.read());
}

void mlp_xcel::thread_zext_ln1118_7_fu_6190_p1() {
    zext_ln1118_7_fu_6190_p1 = esl_zext<37,36>(shl_ln1118_1_fu_6183_p3.read());
}

void mlp_xcel::thread_zext_ln1118_8_fu_6201_p1() {
    zext_ln1118_8_fu_6201_p1 = esl_zext<37,30>(shl_ln1118_2_fu_6194_p3.read());
}

void mlp_xcel::thread_zext_ln1118_9_fu_6282_p1() {
    zext_ln1118_9_fu_6282_p1 = esl_zext<34,33>(shl_ln1118_3_fu_6275_p3.read());
}

void mlp_xcel::thread_zext_ln1192_5_fu_6321_p1() {
    zext_ln1192_5_fu_6321_p1 = esl_zext<37,34>(add_ln1118_fu_6297_p2.read());
}

void mlp_xcel::thread_zext_ln60_fu_6431_p1() {
    zext_ln60_fu_6431_p1 = esl_zext<64,7>(i_0_reg_1495.read());
}

void mlp_xcel::thread_zext_ln61_fu_6448_p1() {
    zext_ln61_fu_6448_p1 = esl_zext<64,7>(i_0_i_reg_1519.read());
}

void mlp_xcel::thread_zext_ln728_fu_5895_p1() {
    zext_ln728_fu_5895_p1 = esl_zext<37,36>(shl_ln_fu_5887_p3.read());
}

}

