// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data_out = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1038__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1038__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1040__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1040__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1042__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1042__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1044__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1044__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1050__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1050__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1052__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1052__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1055__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1055__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1057__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1057__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1059__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1059__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1065__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1065__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1066__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1066__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1068__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1068__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1070__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1070__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1074__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1074__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1076__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1076__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1078__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1078__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1080__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1080__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1086__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1086__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1088__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1088__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1091__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1091__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1093__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1093__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1095__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1095__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1101__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1101__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1102__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1102__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1104__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1104__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1106__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1106__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1113__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1113__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1115__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1115__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1117__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1117__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1122__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1122__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1123__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1123__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1125__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1125__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1127__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1127__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1132__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1132__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1134__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1134__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1136__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1136__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1138__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1138__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1144__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1144__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1146__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1146__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1149__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1149__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1151__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1151__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1153__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1153__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1159__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1159__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1160__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1160__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1162__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1162__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1164__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1164__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1168__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1168__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1170__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1170__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1172__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1172__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1174__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1174__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1180__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1180__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1182__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1182__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1185__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1185__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1187__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1187__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1189__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1189__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1195__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1195__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1196__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1196__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1198__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1198__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1200__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1200__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1207__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1207__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1209__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1209__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1211__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1211__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1216__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1216__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1217__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1217__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1219__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1219__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1221__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1221__tms_val = 0;
    // Body
    while ((1U & (~ vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol))) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__address = 0x10U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__data;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                   >> 0x1fU);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1036__unnamedblk2__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode = 0x10U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode))) {
                    goto __Vlabel264;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1038__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1038__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1040__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1040__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1042__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1042__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1044__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1044__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata
                    [0U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata
                    [1U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata
                    [2U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata
                    [3U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1046__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1050__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1050__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1052__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1052__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1037__opcode;
                __Vlabel264: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1055__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1055__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1057__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1057__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1059__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1059__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [1U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [2U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [3U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [4U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [5U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [6U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [7U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [8U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [9U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0xaU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0xbU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0xcU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0xdU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0xeU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0xfU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x10U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x11U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x12U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x13U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x14U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x15U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x16U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x17U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x18U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x19U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x1aU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x1bU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x1cU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x1dU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x1eU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__wdata
                [0x1fU];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1061__unnamedblk3__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1065__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1065__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1066__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1066__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1068__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1068__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1070__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1070__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__address)))) 
                       << 0x22U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk6__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode))) {
                goto __Vlabel265;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1074__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1074__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1076__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1076__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1078__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1078__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1080__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1080__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata
                [0U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata
                [1U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata
                [2U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata
                [3U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1082__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1086__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1086__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1088__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1088__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1073__opcode;
            __Vlabel265: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1091__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1091__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1093__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1093__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1095__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1095__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [1U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [2U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [3U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [4U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [5U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [6U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [7U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [8U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [9U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0xaU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0xbU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0xcU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0xdU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0xeU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0xfU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x10U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x11U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x12U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x13U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x14U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x15U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x16U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x17U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x18U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x19U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x1aU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x1bU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x1cU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x1dU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x1eU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x1fU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x20U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x21U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x22U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x23U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x24U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x25U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x26U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x27U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1097__unnamedblk4__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1101__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1101__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1102__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1102__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1104__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1104__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1106__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1106__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1108__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1113__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1113__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1115__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1115__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1117__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1117__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__address)))) 
               << 0x22U);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk7__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [1U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [2U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [3U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [4U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [5U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [6U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [7U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [8U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [9U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0xaU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0xbU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0xcU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0xdU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0xeU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0xfU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x10U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x11U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x12U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x13U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x14U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x15U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x16U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x17U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x18U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x19U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x1aU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x1bU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x1cU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x1dU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x1eU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x1fU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x20U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x21U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x22U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x23U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x24U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x25U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x26U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x27U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__unnamedblk6__DOT__i = 0x29U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1119__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1122__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1122__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1123__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1123__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1125__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1125__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1127__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1127__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1fU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x20U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x20U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x21U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x21U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x22U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x23U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x23U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x24U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x24U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x25U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x25U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x26U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x26U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x27U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x27U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x28U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
            = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x28U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__unnamedblk8__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1072__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__data;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                    = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 1U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 3U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 4U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 5U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 5U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 6U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 6U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 7U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 7U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 8U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 8U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 9U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 9U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0xaU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xaU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0xbU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xbU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0xcU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xcU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0xdU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xdU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0xeU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xeU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0xfU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xfU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x10U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x10U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x11U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x11U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x12U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x12U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x13U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x13U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x14U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x14U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x15U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x15U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x16U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x16U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x17U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x17U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x18U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x18U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x19U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x19U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x1aU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1aU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x1bU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1bU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x1cU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1cU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x1dU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1dU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x1eU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1eU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x1fU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                    = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                       >> 0x1fU);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__1130__unnamedblk2__DOT__i = 0x20U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode = 0x10U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 0;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode))) {
                        goto __Vlabel266;
                    }
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode) 
                                 >> 1U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode) 
                                 >> 2U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode) 
                                 >> 3U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode) 
                                 >> 4U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__unnamedblk1__DOT__i = 5U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1132__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1132__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1134__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1134__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1136__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1136__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1138__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1138__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 0;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata
                        [0U];
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata
                        [1U];
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 2U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata
                        [2U];
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 3U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata
                        [3U];
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 4U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__wdata
                        [4U];
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__tms_last;
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1140__unnamedblk2__DOT__i = 5U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1144__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1144__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1146__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1146__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1131__opcode;
                    __Vlabel266: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1149__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1149__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1151__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1151__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1153__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1153__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [1U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [2U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [3U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [4U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 5U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [5U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 6U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [6U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 7U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [7U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 8U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [8U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 9U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [9U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0xaU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0xaU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0xbU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0xbU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0xcU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0xcU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0xdU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0xdU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0xeU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0xeU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0xfU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0xfU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x10U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x10U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x11U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x11U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x12U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x12U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x13U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x13U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x14U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x14U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x15U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x15U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x16U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x16U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x17U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x17U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x18U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x18U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x19U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x19U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x1aU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x1aU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x1bU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x1bU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x1cU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x1cU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x1dU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x1dU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x1eU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x1eU];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x1fU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__wdata
                    [0x1fU];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__1155__unnamedblk3__DOT__i = 0x20U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1159__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1159__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1160__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1160__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1162__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1162__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1164__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1164__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__address)))) 
                           << 0x22U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 1U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 2U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 3U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 4U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 5U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 6U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 7U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 8U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 9U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xaU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xbU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xcU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xdU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xeU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xfU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x10U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x11U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x12U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x13U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x14U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x15U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x16U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x17U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x18U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x19U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1aU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1bU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1cU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1dU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1eU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1fU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x20U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x20U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x21U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x21U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x22U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x22U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x23U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x23U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x24U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x24U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x25U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x25U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x26U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x26U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x27U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x27U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x28U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x28U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk6__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode = 0x11U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode))) {
                    goto __Vlabel267;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1168__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1168__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1170__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1170__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1172__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1172__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1174__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1174__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata
                    [0U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata
                    [1U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata
                    [2U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata
                    [3U];
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1176__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1180__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1180__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1182__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1182__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1167__opcode;
                __Vlabel267: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1185__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1185__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1187__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1187__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1189__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1189__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__tms_last = 1U;
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata[__Vilp4] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [1U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [2U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [3U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [4U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [5U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [6U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [7U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [8U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [9U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0xaU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0xbU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0xcU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0xdU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0xeU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0xfU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x10U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x11U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x12U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x13U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x14U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x15U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x16U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x17U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x18U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x19U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x1aU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x1bU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x1cU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x1dU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x1eU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x1fU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x20U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x20U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x21U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x21U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x22U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x22U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x23U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x23U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x24U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x24U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x25U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x25U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x26U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x26U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x27U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x27U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x28U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__wdata
                [0x28U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1191__unnamedblk4__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1195__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1195__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1196__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1196__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1198__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1198__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1200__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1200__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1202__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1207__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1207__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1209__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1209__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1211__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1211__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__address)))) 
                   << 0x22U);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 1U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 2U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 3U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 4U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 5U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 6U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 7U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 8U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 9U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xaU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xbU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xcU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xdU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xeU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0xfU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x10U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x11U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x12U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x13U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x14U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x15U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x16U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x17U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x18U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x19U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1aU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1bU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1cU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1dU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1eU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x1fU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x20U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x20U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x21U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x21U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x22U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x22U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x23U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x23U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x24U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x24U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x25U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x25U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x26U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x26U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x27U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x27U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x28U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__write_data_packed 
                                 >> 0x28U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk7__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__tms_last = 1U;
            IData/*31:0*/ __Vilp5;
            __Vilp5 = 0U;
            while ((__Vilp5 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata[__Vilp5] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp5];
                __Vilp5 = ((IData)(1U) + __Vilp5);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [1U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [2U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [3U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [4U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [5U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [6U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [7U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [8U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [9U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0xaU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0xbU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0xcU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0xdU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0xeU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0xfU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x10U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x11U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x12U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x13U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x14U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x15U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x16U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x17U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x18U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x19U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x1aU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x1bU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x1cU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x1dU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x1eU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x1fU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x20U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x20U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x20U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x21U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x21U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x21U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x22U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x22U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x22U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x23U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x23U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x23U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x24U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x24U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x24U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x25U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x25U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x25U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x26U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x26U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x26U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x27U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x27U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x27U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x28U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__wdata
                [0x28U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata[0x28U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__unnamedblk6__DOT__i = 0x29U;
            IData/*31:0*/ __Vilp6;
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp6] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1213__rdata
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1216__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1216__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1217__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1217__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1219__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1219__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1221__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1221__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1fU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x20U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x20U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x20U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x21U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x21U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x21U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x22U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x22U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x23U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x23U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x23U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x24U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x24U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x24U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x25U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x25U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x25U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x26U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x26U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x26U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x27U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x27U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x27U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x28U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x28U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x28U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__unnamedblk8__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__1166__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__trial_idx);
        }
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__1034__data;
    }
}
