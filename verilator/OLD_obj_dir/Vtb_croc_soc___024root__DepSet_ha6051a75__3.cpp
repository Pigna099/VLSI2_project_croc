// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__28(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__28\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data_out = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8675__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8675__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8677__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8677__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8679__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8679__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8681__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8681__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8687__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8687__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8689__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8689__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8692__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8692__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8694__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8694__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8696__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8696__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8702__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8702__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8703__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8703__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8705__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8705__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8707__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8707__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8711__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8711__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8713__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8713__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8715__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8715__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8717__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8717__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8723__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8723__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8725__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8725__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8728__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8728__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8730__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8730__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8732__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8732__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8738__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8738__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8739__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8739__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8741__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8741__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8743__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8743__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8750__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8750__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8752__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8752__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8754__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8754__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8759__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8759__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8760__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8760__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8762__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8762__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8764__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8764__tms_val = 0;
    // Body
    VL_WRITEF_NX("@%t | [JTAG] Halting hart 0... \n",0,
                 64,VL_TIME_UNITED_Q(1),-12);
    Verilated::runFlushCallbacks();
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__address = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data_out = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data_out = 0ULL;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__op = VL_RAND_RESET_I(2);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__op = 0U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx = 0U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles = 8U;
    if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__data 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__data;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
            = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
            = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
               >> 0x1fU);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8673__unnamedblk2__DOT__i = 0x20U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode = 0x10U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode))) {
                goto __Vlabel275;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8675__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8675__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8677__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8677__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8679__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8679__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8681__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8681__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8683__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8687__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8687__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8689__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8689__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8674__opcode;
            __Vlabel275: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8692__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8692__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8694__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8694__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8696__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8696__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__wdata
            [0x1fU];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8698__unnamedblk3__DOT__i = 0x20U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8702__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8702__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8703__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8703__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8705__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8705__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8707__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8707__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__wait_cycles 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__address 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out = 0ULL;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
        = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__address)))) 
                   << 0x22U));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk6__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode))) {
            goto __Vlabel276;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8711__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8711__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8713__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8713__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8715__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8715__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8717__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8717__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8719__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8723__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8723__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8725__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8725__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8710__opcode;
        __Vlabel276: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8728__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8728__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8730__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8730__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8732__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8732__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8734__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8738__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8738__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8739__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8739__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8741__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8741__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8743__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8743__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8745__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8750__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8750__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8752__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8752__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8754__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8754__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
        = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__address)))) 
           << 0x22U);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk7__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__tms_last = 1U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata[__Vilp2] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__unnamedblk6__DOT__i = 0x29U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x28U)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8756__rdata
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8759__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8759__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8760__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8760__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8762__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8762__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8764__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8764__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [1U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 1U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [2U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 2U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [3U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 3U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [4U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 4U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [5U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 5U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [6U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 6U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [7U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 7U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [8U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 8U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [9U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 9U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xaU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xaU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xbU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xbU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xcU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xcU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xdU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xdU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xeU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xeU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xfU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xfU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x10U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x10U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x11U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x11U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x12U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x12U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x13U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x13U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x14U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x14U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x15U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x15U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x16U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x16U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x17U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x17U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x18U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x18U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x19U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x19U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1aU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1aU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1bU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1bU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1cU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1cU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1dU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1dU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1eU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1eU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1fU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1fU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x20U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x20U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x21U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x21U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x22U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x22U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x23U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x23U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x24U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x24U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x25U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x25U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x26U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x26U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x27U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x27U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x28U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
        = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x28U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__unnamedblk8__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__op 
        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data 
        = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data_out 
                   >> 2U));
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__data;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__op 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8709__op;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles 
        = VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__29(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__29\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8769__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8769__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8771__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8771__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8773__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8773__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8775__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8775__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8781__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8781__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8783__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8783__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8786__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8786__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8788__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8788__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8790__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8790__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8796__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8796__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8797__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8797__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8799__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8799__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8801__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8801__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8805__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8805__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8807__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8807__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8809__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8809__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8811__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8811__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8817__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8817__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8819__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8819__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8822__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8822__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8824__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8824__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8826__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8826__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8832__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8832__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8833__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8833__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8835__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8835__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8837__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8837__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8844__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8844__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8846__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8846__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8848__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8848__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8853__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8853__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8854__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8854__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8856__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8856__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8858__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8858__tms_val = 0;
    // Body
    while ((3U == (IData)(vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__op))) {
        if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__data;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                   >> 0x1fU);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__8767__unnamedblk2__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode = 0x10U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode))) {
                    goto __Vlabel277;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8769__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8769__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8771__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8771__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8773__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8773__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8775__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8775__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8777__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8781__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8781__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8783__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8783__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8768__opcode;
                __Vlabel277: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8786__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8786__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8788__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8788__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8790__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8790__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__wdata
                [0x1fU];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__8792__unnamedblk3__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8796__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8796__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8797__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8797__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8799__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8799__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8801__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8801__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__wait_cycles 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__address 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__address)))) 
                       << 0x22U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk6__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode))) {
                goto __Vlabel278;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8805__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8805__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8807__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8807__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8809__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8809__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8811__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8811__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__8813__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8817__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8817__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8819__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8819__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__8804__opcode;
            __Vlabel278: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8822__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8822__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8824__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8824__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8826__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8826__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__8828__unnamedblk4__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8832__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8832__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8833__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8833__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8835__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8835__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8837__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8837__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__8839__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8844__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8844__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8846__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8846__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8848__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8848__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__address)))) 
               << 0x22U);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk7__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [1U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [2U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [3U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [4U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [5U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [6U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [7U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [8U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [9U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0xaU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0xbU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0xcU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0xdU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0xeU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0xfU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x10U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x11U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x12U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x13U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x14U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x15U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x16U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x17U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x18U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x19U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x1aU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x1bU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x1cU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x1dU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x1eU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x1fU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x20U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x21U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x22U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x23U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x24U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x25U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x26U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x27U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__unnamedblk6__DOT__i = 0x29U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__8850__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8853__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__8853__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8854__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8854__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8856__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8856__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8858__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__8858__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1fU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x20U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x20U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x21U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x21U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x22U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x23U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x23U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x24U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x24U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x25U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x25U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x26U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x26U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x27U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x27U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x28U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
            = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x28U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__unnamedblk8__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data_out 
                       >> 2U));
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__data;
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__8803__op;
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles);
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx);
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_halt__7877__status 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data;
}
