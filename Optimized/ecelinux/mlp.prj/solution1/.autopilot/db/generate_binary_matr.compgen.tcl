# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1 \
    name matrix_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_0 \
    op interface \
    ports { matrix_0_address0 { O 7 vector } matrix_0_ce0 { O 1 bit } matrix_0_we0 { O 1 bit } matrix_0_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2 \
    name matrix_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_1 \
    op interface \
    ports { matrix_1_address0 { O 7 vector } matrix_1_ce0 { O 1 bit } matrix_1_we0 { O 1 bit } matrix_1_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3 \
    name matrix_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_2 \
    op interface \
    ports { matrix_2_address0 { O 7 vector } matrix_2_ce0 { O 1 bit } matrix_2_we0 { O 1 bit } matrix_2_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 4 \
    name matrix_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_3 \
    op interface \
    ports { matrix_3_address0 { O 7 vector } matrix_3_ce0 { O 1 bit } matrix_3_we0 { O 1 bit } matrix_3_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name matrix_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_4 \
    op interface \
    ports { matrix_4_address0 { O 7 vector } matrix_4_ce0 { O 1 bit } matrix_4_we0 { O 1 bit } matrix_4_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name matrix_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_5 \
    op interface \
    ports { matrix_5_address0 { O 7 vector } matrix_5_ce0 { O 1 bit } matrix_5_we0 { O 1 bit } matrix_5_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name matrix_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_6 \
    op interface \
    ports { matrix_6_address0 { O 7 vector } matrix_6_ce0 { O 1 bit } matrix_6_we0 { O 1 bit } matrix_6_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name matrix_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_7 \
    op interface \
    ports { matrix_7_address0 { O 7 vector } matrix_7_ce0 { O 1 bit } matrix_7_we0 { O 1 bit } matrix_7_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name matrix_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_8 \
    op interface \
    ports { matrix_8_address0 { O 7 vector } matrix_8_ce0 { O 1 bit } matrix_8_we0 { O 1 bit } matrix_8_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name matrix_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_9 \
    op interface \
    ports { matrix_9_address0 { O 7 vector } matrix_9_ce0 { O 1 bit } matrix_9_we0 { O 1 bit } matrix_9_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name matrix_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_10 \
    op interface \
    ports { matrix_10_address0 { O 7 vector } matrix_10_ce0 { O 1 bit } matrix_10_we0 { O 1 bit } matrix_10_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name matrix_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_11 \
    op interface \
    ports { matrix_11_address0 { O 7 vector } matrix_11_ce0 { O 1 bit } matrix_11_we0 { O 1 bit } matrix_11_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name matrix_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_12 \
    op interface \
    ports { matrix_12_address0 { O 7 vector } matrix_12_ce0 { O 1 bit } matrix_12_we0 { O 1 bit } matrix_12_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name matrix_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_13 \
    op interface \
    ports { matrix_13_address0 { O 7 vector } matrix_13_ce0 { O 1 bit } matrix_13_we0 { O 1 bit } matrix_13_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name matrix_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_14 \
    op interface \
    ports { matrix_14_address0 { O 7 vector } matrix_14_ce0 { O 1 bit } matrix_14_we0 { O 1 bit } matrix_14_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name matrix_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_15 \
    op interface \
    ports { matrix_15_address0 { O 7 vector } matrix_15_ce0 { O 1 bit } matrix_15_we0 { O 1 bit } matrix_15_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name matrix_16 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_16 \
    op interface \
    ports { matrix_16_address0 { O 7 vector } matrix_16_ce0 { O 1 bit } matrix_16_we0 { O 1 bit } matrix_16_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name matrix_17 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_17 \
    op interface \
    ports { matrix_17_address0 { O 7 vector } matrix_17_ce0 { O 1 bit } matrix_17_we0 { O 1 bit } matrix_17_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name matrix_18 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_18 \
    op interface \
    ports { matrix_18_address0 { O 7 vector } matrix_18_ce0 { O 1 bit } matrix_18_we0 { O 1 bit } matrix_18_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name matrix_19 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_19 \
    op interface \
    ports { matrix_19_address0 { O 7 vector } matrix_19_ce0 { O 1 bit } matrix_19_we0 { O 1 bit } matrix_19_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name matrix_20 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_20 \
    op interface \
    ports { matrix_20_address0 { O 7 vector } matrix_20_ce0 { O 1 bit } matrix_20_we0 { O 1 bit } matrix_20_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name matrix_21 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_21 \
    op interface \
    ports { matrix_21_address0 { O 7 vector } matrix_21_ce0 { O 1 bit } matrix_21_we0 { O 1 bit } matrix_21_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name matrix_22 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_22 \
    op interface \
    ports { matrix_22_address0 { O 7 vector } matrix_22_ce0 { O 1 bit } matrix_22_we0 { O 1 bit } matrix_22_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name matrix_23 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_23 \
    op interface \
    ports { matrix_23_address0 { O 7 vector } matrix_23_ce0 { O 1 bit } matrix_23_we0 { O 1 bit } matrix_23_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name matrix_24 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_24 \
    op interface \
    ports { matrix_24_address0 { O 7 vector } matrix_24_ce0 { O 1 bit } matrix_24_we0 { O 1 bit } matrix_24_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name matrix_25 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_25 \
    op interface \
    ports { matrix_25_address0 { O 7 vector } matrix_25_ce0 { O 1 bit } matrix_25_we0 { O 1 bit } matrix_25_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name matrix_26 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_26 \
    op interface \
    ports { matrix_26_address0 { O 7 vector } matrix_26_ce0 { O 1 bit } matrix_26_we0 { O 1 bit } matrix_26_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name matrix_27 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_27 \
    op interface \
    ports { matrix_27_address0 { O 7 vector } matrix_27_ce0 { O 1 bit } matrix_27_we0 { O 1 bit } matrix_27_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name matrix_28 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_28 \
    op interface \
    ports { matrix_28_address0 { O 7 vector } matrix_28_ce0 { O 1 bit } matrix_28_we0 { O 1 bit } matrix_28_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name matrix_29 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_29 \
    op interface \
    ports { matrix_29_address0 { O 7 vector } matrix_29_ce0 { O 1 bit } matrix_29_we0 { O 1 bit } matrix_29_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name matrix_30 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_30 \
    op interface \
    ports { matrix_30_address0 { O 7 vector } matrix_30_ce0 { O 1 bit } matrix_30_we0 { O 1 bit } matrix_30_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name matrix_31 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_31 \
    op interface \
    ports { matrix_31_address0 { O 7 vector } matrix_31_ce0 { O 1 bit } matrix_31_we0 { O 1 bit } matrix_31_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name matrix_32 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_32 \
    op interface \
    ports { matrix_32_address0 { O 7 vector } matrix_32_ce0 { O 1 bit } matrix_32_we0 { O 1 bit } matrix_32_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name matrix_33 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_33 \
    op interface \
    ports { matrix_33_address0 { O 7 vector } matrix_33_ce0 { O 1 bit } matrix_33_we0 { O 1 bit } matrix_33_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name matrix_34 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_34 \
    op interface \
    ports { matrix_34_address0 { O 7 vector } matrix_34_ce0 { O 1 bit } matrix_34_we0 { O 1 bit } matrix_34_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name matrix_35 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_35 \
    op interface \
    ports { matrix_35_address0 { O 7 vector } matrix_35_ce0 { O 1 bit } matrix_35_we0 { O 1 bit } matrix_35_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name matrix_36 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_36 \
    op interface \
    ports { matrix_36_address0 { O 7 vector } matrix_36_ce0 { O 1 bit } matrix_36_we0 { O 1 bit } matrix_36_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name matrix_37 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_37 \
    op interface \
    ports { matrix_37_address0 { O 7 vector } matrix_37_ce0 { O 1 bit } matrix_37_we0 { O 1 bit } matrix_37_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name matrix_38 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_38 \
    op interface \
    ports { matrix_38_address0 { O 7 vector } matrix_38_ce0 { O 1 bit } matrix_38_we0 { O 1 bit } matrix_38_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name matrix_39 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_39 \
    op interface \
    ports { matrix_39_address0 { O 7 vector } matrix_39_ce0 { O 1 bit } matrix_39_we0 { O 1 bit } matrix_39_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name matrix_40 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_40 \
    op interface \
    ports { matrix_40_address0 { O 7 vector } matrix_40_ce0 { O 1 bit } matrix_40_we0 { O 1 bit } matrix_40_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name matrix_41 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_41 \
    op interface \
    ports { matrix_41_address0 { O 7 vector } matrix_41_ce0 { O 1 bit } matrix_41_we0 { O 1 bit } matrix_41_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name matrix_42 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_42 \
    op interface \
    ports { matrix_42_address0 { O 7 vector } matrix_42_ce0 { O 1 bit } matrix_42_we0 { O 1 bit } matrix_42_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name matrix_43 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_43 \
    op interface \
    ports { matrix_43_address0 { O 7 vector } matrix_43_ce0 { O 1 bit } matrix_43_we0 { O 1 bit } matrix_43_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name matrix_44 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_44 \
    op interface \
    ports { matrix_44_address0 { O 7 vector } matrix_44_ce0 { O 1 bit } matrix_44_we0 { O 1 bit } matrix_44_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name matrix_45 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_45 \
    op interface \
    ports { matrix_45_address0 { O 7 vector } matrix_45_ce0 { O 1 bit } matrix_45_we0 { O 1 bit } matrix_45_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name matrix_46 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_46 \
    op interface \
    ports { matrix_46_address0 { O 7 vector } matrix_46_ce0 { O 1 bit } matrix_46_we0 { O 1 bit } matrix_46_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name matrix_47 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_47 \
    op interface \
    ports { matrix_47_address0 { O 7 vector } matrix_47_ce0 { O 1 bit } matrix_47_we0 { O 1 bit } matrix_47_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name matrix_48 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_48 \
    op interface \
    ports { matrix_48_address0 { O 7 vector } matrix_48_ce0 { O 1 bit } matrix_48_we0 { O 1 bit } matrix_48_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name matrix_49 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_49 \
    op interface \
    ports { matrix_49_address0 { O 7 vector } matrix_49_ce0 { O 1 bit } matrix_49_we0 { O 1 bit } matrix_49_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name matrix_50 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_50 \
    op interface \
    ports { matrix_50_address0 { O 7 vector } matrix_50_ce0 { O 1 bit } matrix_50_we0 { O 1 bit } matrix_50_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name matrix_51 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_51 \
    op interface \
    ports { matrix_51_address0 { O 7 vector } matrix_51_ce0 { O 1 bit } matrix_51_we0 { O 1 bit } matrix_51_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name matrix_52 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_52 \
    op interface \
    ports { matrix_52_address0 { O 7 vector } matrix_52_ce0 { O 1 bit } matrix_52_we0 { O 1 bit } matrix_52_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name matrix_53 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_53 \
    op interface \
    ports { matrix_53_address0 { O 7 vector } matrix_53_ce0 { O 1 bit } matrix_53_we0 { O 1 bit } matrix_53_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name matrix_54 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_54 \
    op interface \
    ports { matrix_54_address0 { O 7 vector } matrix_54_ce0 { O 1 bit } matrix_54_we0 { O 1 bit } matrix_54_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name matrix_55 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_55 \
    op interface \
    ports { matrix_55_address0 { O 7 vector } matrix_55_ce0 { O 1 bit } matrix_55_we0 { O 1 bit } matrix_55_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name matrix_56 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_56 \
    op interface \
    ports { matrix_56_address0 { O 7 vector } matrix_56_ce0 { O 1 bit } matrix_56_we0 { O 1 bit } matrix_56_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name matrix_57 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_57 \
    op interface \
    ports { matrix_57_address0 { O 7 vector } matrix_57_ce0 { O 1 bit } matrix_57_we0 { O 1 bit } matrix_57_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name matrix_58 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_58 \
    op interface \
    ports { matrix_58_address0 { O 7 vector } matrix_58_ce0 { O 1 bit } matrix_58_we0 { O 1 bit } matrix_58_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name matrix_59 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_59 \
    op interface \
    ports { matrix_59_address0 { O 7 vector } matrix_59_ce0 { O 1 bit } matrix_59_we0 { O 1 bit } matrix_59_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name matrix_60 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_60 \
    op interface \
    ports { matrix_60_address0 { O 7 vector } matrix_60_ce0 { O 1 bit } matrix_60_we0 { O 1 bit } matrix_60_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name matrix_61 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_61 \
    op interface \
    ports { matrix_61_address0 { O 7 vector } matrix_61_ce0 { O 1 bit } matrix_61_we0 { O 1 bit } matrix_61_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name matrix_62 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_62 \
    op interface \
    ports { matrix_62_address0 { O 7 vector } matrix_62_ce0 { O 1 bit } matrix_62_we0 { O 1 bit } matrix_62_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name matrix_63 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename matrix_63 \
    op interface \
    ports { matrix_63_address0 { O 7 vector } matrix_63_ce0 { O 1 bit } matrix_63_we0 { O 1 bit } matrix_63_d0 { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'matrix_63'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name global_lfsr_seed_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_global_lfsr_seed_V \
    op interface \
    ports { global_lfsr_seed_V_i { I 16 vector } global_lfsr_seed_V_o { O 16 vector } global_lfsr_seed_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


