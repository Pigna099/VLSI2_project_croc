// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__30(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__30\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data_out = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8864__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8864__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8866__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8866__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8868__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8868__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8870__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8870__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8876__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8876__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8878__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8878__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8881__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8881__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8883__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8883__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8885__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8885__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8891__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8891__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8892__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8892__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8894__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8894__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8896__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8896__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8900__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8900__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8902__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8902__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8904__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8904__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8906__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8906__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8912__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8912__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8914__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8914__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8917__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8917__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8919__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8919__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8921__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8921__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8927__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8927__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8928__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8928__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8930__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8930__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8932__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8932__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8939__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8939__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8941__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8941__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8943__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8943__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8948__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8948__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8949__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8949__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8951__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8951__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8953__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8953__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8958__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8958__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8960__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8960__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8962__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8962__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8964__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8964__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8970__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8970__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8972__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8972__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8975__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8975__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8977__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8977__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8979__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8979__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8985__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8985__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8986__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8986__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8988__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8988__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8990__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8990__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8994__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8994__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8996__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8996__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8998__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8998__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9000__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9000__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9006__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9006__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9008__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9008__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9011__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9011__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9013__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9013__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9015__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9015__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9021__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9021__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9022__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9022__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9024__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9024__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9026__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9026__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9033__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9033__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9035__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9035__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9037__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9037__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9042__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9042__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9043__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9043__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9045__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9045__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9047__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9047__tms_val = 0;
    // Body
    while ((1U & (~ (vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_halt__7877__status 
                     >> 9U)))) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__address = 0x11U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__data;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                   >> 0x1fU);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8862__unnamedblk2__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode = 0x10U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode))) {
                    goto __Vlabel279;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8864__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8864__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8866__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8866__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8868__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8868__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8870__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8870__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8872__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8876__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8876__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8878__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8878__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8863__opcode;
                __Vlabel279: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8881__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8881__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8883__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8883__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8885__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8885__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__wdata
                [0x1fU];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8887__unnamedblk3__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8891__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8891__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8892__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8892__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8894__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8894__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8896__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8896__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__address)))) 
                       << 0x22U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk6__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode))) {
                goto __Vlabel280;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8900__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8900__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8902__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8902__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8904__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8904__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8906__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8906__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8908__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8912__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8912__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8914__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8914__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8899__opcode;
            __Vlabel280: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8917__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8917__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8919__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8919__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8921__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8921__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8923__unnamedblk4__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8927__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8927__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8928__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8928__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8930__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8930__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8932__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8932__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8934__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8939__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8939__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8941__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8941__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8943__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8943__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__address)))) 
               << 0x22U);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk7__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [1U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [2U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [3U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [4U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [5U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [6U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [7U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [8U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [9U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0xaU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0xbU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0xcU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0xdU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0xeU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0xfU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x10U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x11U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x12U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x13U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x14U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x15U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x16U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x17U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x18U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x19U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x1aU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x1bU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x1cU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x1dU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x1eU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x1fU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x20U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x21U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x22U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x23U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x24U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x25U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x26U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x27U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__unnamedblk6__DOT__i = 0x29U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8945__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8948__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8948__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8949__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8949__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8951__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8951__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8953__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8953__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1fU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x20U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x20U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x21U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x21U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x22U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x23U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x23U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x24U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x24U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x25U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x25U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x26U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x26U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x27U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x27U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x28U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
            = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x28U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__unnamedblk8__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8898__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__data;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                    = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 1U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 3U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 4U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 5U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 5U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 6U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 6U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 7U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 7U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 8U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 8U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 9U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 9U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0xaU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xaU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0xbU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xbU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0xcU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xcU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0xdU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xdU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0xeU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xeU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0xfU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0xfU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x10U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x10U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x11U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x11U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x12U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x12U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x13U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x13U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x14U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x14U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x15U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x15U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x16U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x16U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x17U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x17U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x18U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x18U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x19U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x19U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x1aU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1aU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x1bU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1bU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x1cU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1cU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x1dU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1dU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x1eU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> 0x1eU));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x1fU;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                    = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                       >> 0x1fU);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8956__unnamedblk2__DOT__i = 0x20U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode = 0x10U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 0;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode))) {
                        goto __Vlabel281;
                    }
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode) 
                                 >> 1U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode) 
                                 >> 2U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode) 
                                 >> 3U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                        = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode) 
                                 >> 4U));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__unnamedblk1__DOT__i = 5U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8958__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8958__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8960__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8960__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8962__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8962__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8964__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8964__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 0;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 2U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 3U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 4U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__wdata
                        [4U];
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__tms_last;
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8966__unnamedblk2__DOT__i = 5U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8970__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8970__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8972__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8972__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8957__opcode;
                    __Vlabel281: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8975__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8975__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8977__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8977__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8979__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8979__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 5U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 6U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 7U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 8U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 9U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0xaU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0xbU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0xcU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0xdU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0xeU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0xfU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x10U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x11U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x12U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x13U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x14U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x15U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x16U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x17U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x18U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x19U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x1aU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x1bU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x1cU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x1dU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x1eU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x1fU;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__wdata
                    [0x1fU];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8981__unnamedblk3__DOT__i = 0x20U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8985__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8985__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8986__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8986__tms_val;
                    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8988__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8988__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8990__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8990__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__address)))) 
                           << 0x22U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 1U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 2U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 3U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 4U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 5U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 6U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 7U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 8U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 9U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xaU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xbU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xcU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xdU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xeU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xfU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x10U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x11U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x12U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x13U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x14U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x15U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x16U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x17U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x18U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x19U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1aU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1bU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1cU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1dU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1eU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1fU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x20U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x20U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x21U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x21U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x22U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x22U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x23U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x23U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x24U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x24U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x25U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x25U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x26U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x26U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x27U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x27U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x28U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x28U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk6__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode = 0x11U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode))) {
                    goto __Vlabel282;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8994__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8994__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8996__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8996__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8998__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8998__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9000__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9000__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9002__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9006__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9006__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9008__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9008__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8993__opcode;
                __Vlabel282: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9011__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9011__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9013__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9013__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9015__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9015__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__tms_last = 1U;
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata[__Vilp4] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x20U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x21U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x22U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x23U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x24U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x25U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x26U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x27U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x28U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__wdata
                [0x28U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9017__unnamedblk4__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9021__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9021__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9022__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9022__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9024__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9024__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9026__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9026__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__9028__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9033__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9033__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9035__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9035__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9037__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9037__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__address)))) 
                   << 0x22U);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 1U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 2U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 3U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 4U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 5U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 6U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 7U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 8U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 9U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xaU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xbU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xcU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xdU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xeU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0xfU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x10U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x11U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x12U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x13U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x14U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x15U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x16U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x17U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x18U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x19U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1aU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1bU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1cU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1dU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1eU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x1fU)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x20U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x20U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x21U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x21U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x22U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x22U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x23U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x23U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x24U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x24U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x25U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x25U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x26U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x26U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x27U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x27U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x28U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__write_data_packed 
                                 >> 0x28U)));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk7__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__tms_last = 1U;
            IData/*31:0*/ __Vilp5;
            __Vilp5 = 0U;
            while ((__Vilp5 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata[__Vilp5] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp5];
                __Vilp5 = ((IData)(1U) + __Vilp5);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [1U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [2U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [3U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [4U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [5U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [6U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [7U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [8U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [9U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0xaU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0xbU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0xcU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0xdU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0xeU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0xfU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x10U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x11U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x12U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x13U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x14U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x15U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x16U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x17U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x18U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x19U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x1aU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x1bU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x1cU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x1dU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x1eU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x1fU];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x20U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x20U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x20U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x21U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x21U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x21U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x22U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x22U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x22U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x23U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x23U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x23U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x24U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x24U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x24U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x25U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x25U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x25U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x26U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x26U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x26U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x27U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x27U];
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x27U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x28U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__wdata
                [0x28U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata[0x28U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__unnamedblk6__DOT__i = 0x29U;
            IData/*31:0*/ __Vilp6;
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp6] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__9039__rdata
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9042__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9042__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9043__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9043__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9045__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9045__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9047__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9047__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x1fU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x20U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x20U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x20U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x21U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x21U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x21U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x22U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x22U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x23U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x23U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x23U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x24U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x24U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x24U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x25U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x25U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x25U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x26U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x26U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x26U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x27U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x27U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x27U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x28U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                [0x28U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out) 
                   | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                      << 0x28U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__unnamedblk8__DOT__i = 0x29U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8992__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__trial_idx);
        }
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_halt__7877__status 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8860__data;
    }
}
