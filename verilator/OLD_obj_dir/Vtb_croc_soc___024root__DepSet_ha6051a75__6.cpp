// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__44(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__44\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12326__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12326__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12328__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12328__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12330__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12330__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12332__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12332__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12338__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12338__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12340__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12340__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12343__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12343__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12345__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12345__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12347__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12347__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12353__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12353__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12354__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12354__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12356__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12356__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12358__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12358__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12362__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12362__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12364__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12364__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12366__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12366__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12368__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12368__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12374__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12374__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12376__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12376__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12379__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12379__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12381__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12381__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12383__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12383__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12389__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12389__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12390__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12390__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12392__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12392__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12394__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12394__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12401__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12401__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12403__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12403__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12405__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12405__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12410__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12410__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12411__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12411__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12413__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12413__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12415__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12415__tms_val = 0;
    // Body
    while ((3U == (IData)(vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__op))) {
        if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__data;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                   >> 0x1fU);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12324__unnamedblk2__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode = 0x10U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode))) {
                    goto __Vlabel289;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12326__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12326__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12328__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12328__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12330__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12330__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12332__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12332__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12334__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12338__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12338__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12340__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12340__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12325__opcode;
                __Vlabel289: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12343__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12343__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12345__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12345__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12347__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12347__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__wdata
                [0x1fU];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12349__unnamedblk3__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12353__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12353__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12354__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12354__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12356__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12356__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12358__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12358__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__wait_cycles 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__address 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__address)))) 
                       << 0x22U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk6__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode))) {
                goto __Vlabel290;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12362__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12362__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12364__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12364__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12366__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12366__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12368__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12368__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12370__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12374__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12374__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12376__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12376__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12361__opcode;
            __Vlabel290: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12379__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12379__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12381__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12381__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12383__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12383__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12385__unnamedblk4__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12389__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12389__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12390__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12390__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12392__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12392__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12394__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12394__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12396__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12401__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12401__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12403__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12403__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12405__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12405__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__address)))) 
               << 0x22U);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk7__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [1U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [2U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [3U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [4U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [5U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [6U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [7U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [8U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [9U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0xaU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0xbU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0xcU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0xdU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0xeU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0xfU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x10U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x11U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x12U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x13U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x14U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x15U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x16U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x17U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x18U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x19U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x1aU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x1bU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x1cU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x1dU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x1eU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x1fU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x20U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x21U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x22U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x23U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x24U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x25U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x26U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x27U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__unnamedblk6__DOT__i = 0x29U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12407__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12410__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12410__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12411__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12411__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12413__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12413__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12415__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12415__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1fU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x20U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x20U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x21U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x21U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x22U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x23U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x23U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x24U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x24U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x25U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x25U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x26U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x26U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x27U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x27U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x28U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
            = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x28U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__unnamedblk8__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data_out 
                       >> 2U));
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__data;
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12360__op;
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles);
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx);
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data;
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                         nullptr, "../rtl/common_verification/clk_rst_gen.sv", 
                                         43);
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt)) {
        co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                                             45);
        vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt);
    }
    vlSelfRef.tb_croc_soc__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__rst_no = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xe8d578ULL, 
                                         nullptr, "../rtl/common_verification/clk_rst_gen.sv", 
                                         43);
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt)) {
        co_await vlSelfRef.__VtrigSched_h171b53e4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_rst_rtc.clk)", 
                                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                                             45);
        vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt);
    }
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__rst_no = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__rst_no = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                         nullptr, "../rtl/common_verification/clk_rst_gen.sv", 
                                         43);
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt)) {
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                                             45);
        vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt);
    }
    vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__rst_no = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             31);
        vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             35);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xe8d578ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             31);
        vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0xe8d578ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             35);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             31);
        vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "../rtl/common_verification/clk_rst_gen.sv", 
                                             35);
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h98c0c55c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h6e77ef49_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_hd95d3aa7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_ha83768be_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hb2954dbb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hc9a409a6_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*3:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    __Vtableidx20 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h98c0c55c_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h6e77ef49_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hd95d3aa7_0
        [__Vtableidx20];
    __Vtableidx18 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_ha83768be_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_hb2954dbb_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_hc9a409a6_0
        [__Vtableidx18];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h98c0c55c_0
        [__Vtableidx12];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h6e77ef49_0
        [__Vtableidx12];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hd95d3aa7_0
        [__Vtableidx12];
    __Vtableidx10 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_ha83768be_0
        [__Vtableidx10];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_hb2954dbb_0
        [__Vtableidx10];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_hc9a409a6_0
        [__Vtableidx10];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    __Vtableidx24 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h98c0c55c_0
        [__Vtableidx24];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h6e77ef49_0
        [__Vtableidx24];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hd95d3aa7_0
        [__Vtableidx24];
    __Vtableidx22 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_ha83768be_0
        [__Vtableidx22];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_hb2954dbb_0
        [__Vtableidx22];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_hc9a409a6_0
        [__Vtableidx22];
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_ha135af01_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h7e9fdaa7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hf1667b45_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h8086066d_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hde1c3a48_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_ha654393f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h874c908c_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h755fe036_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h40e4dd6a_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx17 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_ha135af01_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_h7e9fdaa7_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_hf1667b45_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h8086066d_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_hde1c3a48_0
        [__Vtableidx17];
    __Vtableidx19 = (((0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_ha654393f_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h874c908c_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h755fe036_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h40e4dd6a_0
        [__Vtableidx19];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*3:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    __Vtableidx16 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h98c0c55c_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_h6e77ef49_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_hd95d3aa7_0
        [__Vtableidx16];
    __Vtableidx14 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                       << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                                  << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_ha83768be_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_hb2954dbb_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_hc9a409a6_0
        [__Vtableidx14];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_ha135af01_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_h7e9fdaa7_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_hf1667b45_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h8086066d_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_hde1c3a48_0
        [__Vtableidx13];
    __Vtableidx15 = (((0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_ha654393f_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h874c908c_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h755fe036_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h40e4dd6a_0
        [__Vtableidx15];
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hc91ec702_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hb5eb2001_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hb2247317_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hbf1a08f3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h75cf98a8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hc7939e58_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h6fe4f829_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h2b2af8ff_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    __Vtableidx8 = (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_tms_i) 
                     << 4U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset 
        = Vtb_croc_soc__ConstPool__TABLE_hc91ec702_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr 
        = Vtb_croc_soc__ConstPool__TABLE_hb5eb2001_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr 
        = Vtb_croc_soc__ConstPool__TABLE_hb2247317_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr 
        = Vtb_croc_soc__ConstPool__TABLE_hbf1a08f3_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_ir 
        = Vtb_croc_soc__ConstPool__TABLE_h75cf98a8_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir 
        = Vtb_croc_soc__ConstPool__TABLE_hc7939e58_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_ir 
        = Vtb_croc_soc__ConstPool__TABLE_h6fe4f829_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h2b2af8ff_0
        [__Vtableidx8];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i) 
                << 4U) | (0xfU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                                  >> 1U)));
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d 
                = (0x1071U | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q) 
                              << 0xaU));
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0xc0c5db3U;
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d 
                = (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i) 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                 >> 1U));
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i) 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                                 >> 1U));
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i;
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0xc0c5db3U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) 
           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select) 
              & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr) 
                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                    >> 0x11U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)))) {
                if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d 
                        = (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
                                            >> 0x22U)));
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down 
        = ((0xe9U >= (0xffU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[
                     (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts 
        = ((0xff80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts)) 
           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
               << 2U) | ((2U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iIIR)) 
                                << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq1))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq0) 
             << 0x11U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts)) 
           & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                      ? 0U
                                                      : 0U);
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                    ? 0U
                                                    : 0x23U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0x602U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter
                                          [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx]);
                        }
                    }
                }
            }
        }
    } else if ((0x400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
        if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 2U)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                             >> 2U)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                    ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                        ? 0U : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q)
                                    : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                        ? (0x28001048U 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                              << 2U))
                                        : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                        }
                    }
                }
            }
        }
    } else if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
        if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                    ? ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 2U)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xfU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xdU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0xcU]))
                                            : (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffffff7U 
                                               & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq0) 
                                                  << 7U));
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffff7ffU 
                                               & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffU 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts) 
                                                  << 0x10U));
                                    }
                                }
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : ((0x80000000U 
                                                & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                   << 0x19U)) 
                                               | (0x3fU 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))))
                                        : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
                        [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
                        [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
                        [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
                            [vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = (0xfffffff8U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q));
                }
            } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xfU)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0xaU)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 5U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                              << 0x10U));
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40100104U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 2U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       << 3U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x1800U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         << 9U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x20000U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          << 0x10U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x200000U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           << 0x15U)));
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ctrl_busy = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xfU;
    }
    if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xeU;
    }
    if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xdU;
    }
    if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xcU;
    }
    if ((0x800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xbU;
    }
    if ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xaU;
    }
    if ((0x200U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x100U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x40U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x10U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
              & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                  >> 5U) & (0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op))
                ? ((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_id 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result)
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_if = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ ((((0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs) 
                                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq)) 
                                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ctrl_busy = 0U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ctrl_busy = 0U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause 
                            = ((0U != (0xffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs))
                                ? (0x50U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
                                : ((0x10000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)
                                    ? 0x4bU : ((0x40000U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs)
                                                ? 0x43U
                                                : 0x47U)));
                    }
                } else if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = 1U;
                    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = 2U;
                    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause 
                            = ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q))
                                ? 0xbU : 8U);
                    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = 3U;
                        }
                    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = 7U;
                    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = 5U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 0U;
    if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_if = 1U;
                }
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = 1U;
                }
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_if = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
                }
            } else if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                     | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 0U;
                                }
                            }
                        }
                    }
                }
            } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
            } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 1U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__wb_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_id;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstack_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n 
        = ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id))
            ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id))
                ? (0xffffff00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootaddr__q)
                : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id))
                    ? (0xffffff00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootaddr__q)
                    : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
            : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id))
                ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id))
                    ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                    : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id))
                        ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id))
                            ? 0x810U : 0x800U) : ((1U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | (0xfcU 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause) 
                                                         << 2U)))
                                                   : 
                                                  (0xffffff00U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q))))
                : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id))
                    ? (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                               >> 1U)) : (0xffffff00U 
                                          & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootaddr__q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_d 
        = ((0x40U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 0x19U)) | (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstack_en = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_d 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_d 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause;
            }
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_if) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc 
                = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id;
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_d 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc;
        }
    } else {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id)))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_d 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_d 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_q) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int) 
           & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                  >> 1U)) & ((~ (IData)((3U == (3U 
                                                & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                    >> 1U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                            >> 1U)))))))) 
                             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)
                ? (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n)
                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_6 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if ((0x10000000U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
    }
    if (((0x10000000U <= (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)) 
         & (0x10000800U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    if ((0x10000000U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000000U <= (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)) 
         & (0x10000800U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000800U <= (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)) 
         & (0x10001000U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = 0U;
    if ((0x10000000U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = 1U;
    }
    if (((0x10000000U <= (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)) 
         & (0x10000800U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = 2U;
    }
    if (((0x10000800U <= (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)) 
         & (0x10001000U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = 3U;
    }
    if (((0x20000000U <= (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)) 
         & (0x80000000U > (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = 4U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)
             ? (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n)
             : (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_6) 
              << 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[0U] 
        = (IData)((0x7800000000ULL | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[1U] 
        = ((0xfffffc00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                           << 8U)) | (IData)(((0x7800000000ULL 
                                               | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                              >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[2U] 
        = (0x3ffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                     >> 0x18U));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_sequent__TOP__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[0U] 
        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[1U] 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp) 
            << 7U) | (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp 
                              >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[2U] 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp) 
            >> 0x19U) | ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp 
                                  >> 0x20U)) << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down 
        = ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[
                     (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__1(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop 
        = ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req)) 
           & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d = 0U;
    } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req)))) {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d 
                = ((0x43U >= (0x7fU & ((IData)(0x22U) 
                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                    ? (0x3ffffffffULL & (((QData)((IData)(
                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[
                                                          (((IData)(0x21U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x22U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x22U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x22U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x22U) 
                                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[
                                                               (3U 
                                                                & (((IData)(0x22U) 
                                                                    * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))))
                    : 0ULL);
        }
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid) 
                & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req)) 
                   & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_read_valid = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbaddress_write_valid = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_write_valid = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x100000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | (0x1dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                           >> 0x22U)))))) {
            if (((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)) 
                                             - (IData)(4U)))));
                }
            }
        } else if ((((((((((0x20U <= (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U)))) 
                           && (0x27U >= (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                          | (0x40U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x13U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x34U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x35U == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x38U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) 
                     | (0x39U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) 
                    | (0x3aU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                  >> 0x22U)))))) {
            if (((0x20U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                 && (0x27U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = ((0x1fU >= ((IData)(0x10U) 
                                      + (0x1fU & ((0x10U 
                                                   | (0xfU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                 >> 0x22U)))) 
                                                  - (IData)(0x10U))))) 
                           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                     >> ((IData)(0x10U) 
                                         + (0x1fU & 
                                            ((0x10U 
                                              | (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U)))) 
                                             - (IData)(0x10U)))))));
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack = 0U;
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x1dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | (0x18U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                           >> 0x22U)))))) {
            if (((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)) 
                                             - (IData)(4U)))));
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U != (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x17U == (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))) 
                          && (5U >= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))))))) {
                if ((0x10U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                            = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                                    }
                                }
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((0x1dU != (0x7fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xfffff000U 
                                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (3U 
                                                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)));
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xffffU 
                                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (0xff0000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                  >> 0x10U)) 
                                                         << 0x10U)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x10U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                    if ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                    }
                }
            }
        } else if (((0x20U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U)))) 
                    && (0x27U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                    = ((0x1fU >= ((IData)(0x10U) + 
                                  (0x1fU & ((0x10U 
                                             | (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                           >> 0x22U)))) 
                                            - (IData)(0x10U))))) 
                       && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> ((IData)(0x10U) 
                                     + (0x1fU & ((0x10U 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x22U)))) 
                                                 - (IData)(0x10U)))))));
            }
        }
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             && (5U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x1dU == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x18U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U)))))))) {
            if (((0x20U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                 && (0x27U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    VL_ASSIGNSEL_WI(256,32,(0xffU & 
                                            VL_SHIFTL_III(8,32,32, 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                      >> 0x22U))), 5U)), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q));
                }
            }
            if ((1U & (~ ((0x20U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                          && (0x27U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U)))))))) {
                if ((0x38U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x39U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbaddress_write_valid 
                                = (0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                >> 0xcU)));
                        }
                    }
                    if ((0x39U != (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x3aU != (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x3cU == (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x16U))))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_write_valid 
                                        = (0U == (7U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0xcU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x1eU)) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                 >> 0x1eU)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack = 1U;
    }
    if (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x1eU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfc00003fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x80U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff1ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0x80000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                            >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                           << 0x13U)) | ((0x40000U 
                                          & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                                              >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                             << 0x12U)) 
                                         | (0x20000U 
                                            & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                                                >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                               << 0x11U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x10000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff0fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0xc000U & ((- (IData)((0U < ((0xffc00U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                               << 4U)) 
                                           | (0x3ffU 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 0x10U)))))) 
                         << 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x200U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 9U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x100U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x800U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x400U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x8000000U | (0xe0ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) 
              << 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0ULL;
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x100000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             && (5U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x1dU == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U)))))))) {
            if ((1U & (~ (((((((((0x20U <= (0x7fU & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U)))) 
                                 && (0x27U >= (0x7fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                                | (0x40U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                               | (0x13U == (0x7fU & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U))))) 
                              | (0x34U == (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) 
                             | (0x35U == (0x7fU & (IData)(
                                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                           >> 0x22U))))) 
                            | (0x38U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x39U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x3aU == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U)))))))) {
                if ((0x3cU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_read_valid 
                            = (0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xcU)));
                    }
                }
            }
        }
        if ((((((((((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | (0x1dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                           >> 0x22U)))))) {
            if (((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                   >> 
                                                   (0x3fU 
                                                    & VL_SHIFTL_III(6,32,32, 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                                >> 0x22U))), 5U)))))) 
                          << 2U));
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(((0x10U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))
                                            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q
                                            : ((0x11U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus
                                                : (
                                                   (0x12U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x22U))))
                                                    ? (IData)(
                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart), 5U))))
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                 >> 0x22U))))
                                                     ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                  >> 0x22U))))
                                                      ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q
                                                      : 0U))))))) 
                          << 2U));
            }
        } else if ((((((((((0x20U <= (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U)))) 
                           && (0x27U >= (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                          | (0x40U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x13U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x34U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x35U == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x38U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) 
                     | (0x39U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) 
                    | (0x3aU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                  >> 0x22U)))))) {
            if (((0x20U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                 && (0x27U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U)))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                          >> 0x22U))), 5U)))
                                             ? 0U : 
                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U))))) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                          >> 0x22U))), 5U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U)))))) 
                          << 2U));
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(((0x40U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))
                                            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0
                                            : ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1
                                                : (
                                                   (0x34U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x22U))))
                                                    ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2
                                                    : 
                                                   ((0x35U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                 >> 0x22U))))
                                                     ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                  >> 0x22U))))
                                                      ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                   >> 0x22U))))
                                                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)
                                                       : (IData)(
                                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                                  >> 0x20U)))))))))) 
                          << 2U));
            }
        } else if ((0x3cU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                = ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x16U))) ? (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp)
                    : ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                          << 2U)));
        } else if ((0x3dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                = ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x16U))) ? (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp)
                    : ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                                   >> 0x20U)))) 
                          << 2U)));
        }
    }
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x1dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | (0x18U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                           >> 0x22U)))))) {
            if (((4U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 && (5U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if ((0x17U == (0x7fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if ((0x1dU != (0x7fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        }
                    }
                }
            }
        } else if (((0x20U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U)))) 
                    && (0x27U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x38U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x39U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3aU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3cU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[2U];
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound_h5bd2a4ad__0 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
        if ((0x43U >= (0x7fU & ((IData)(0x22U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(68,34,(0x7fU & ((IData)(0x22U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound_h5bd2a4ad__0);
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h1031a8db_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_hd219ae05_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h5ee36012_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h7e1965de_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h6139b37e_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx9 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear) 
                      << 7U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h1031a8db_0
        [__Vtableidx9];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_hd219ae05_0
        [__Vtableidx9];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h5ee36012_0
        [__Vtableidx9];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h7e1965de_0
        [__Vtableidx9];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_h6139b37e_0
        [__Vtableidx9];
    __Vtableidx11 = (((0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_ha654393f_0
        [__Vtableidx11];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h874c908c_0
        [__Vtableidx11];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h755fe036_0
        [__Vtableidx11];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h40e4dd6a_0
        [__Vtableidx11];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    __Vtableidx21 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear) 
                       << 7U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h1031a8db_0
        [__Vtableidx21];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_hd219ae05_0
        [__Vtableidx21];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h5ee36012_0
        [__Vtableidx21];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h7e1965de_0
        [__Vtableidx21];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_h6139b37e_0
        [__Vtableidx21];
    __Vtableidx23 = (((0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                              << 4U))) 
                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                         << 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_ha654393f_0
        [__Vtableidx23];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h874c908c_0
        [__Vtableidx23];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h755fe036_0
        [__Vtableidx23];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h40e4dd6a_0
        [__Vtableidx23];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
        = ((((0xe9U >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))))
              ? (0x1fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[
                                                     (((IData)(0x26U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q))))))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & ((IData)(2U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))))))) 
                                    | (((0U == (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q))))))
                                         ? 0ULL : ((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))))))) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[
                                                          (((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))) 
                                                           >> 5U)])) 
                                          >> (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)))))))))
              : 0ULL) << 2U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down)))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
        = ((((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))))
              ? (0x1fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[
                                                     (((IData)(0x26U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q))))))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & ((IData)(2U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))))))) 
                                    | (((0U == (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q))))))
                                         ? 0ULL : ((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))))))) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[
                                                          (((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))) 
                                                           >> 5U)])) 
                                          >> (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)))))))))
              : 0ULL) << 2U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down)))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop)) 
          & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_ready 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d = 0U;
    } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req)))) {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d 
                = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q)) 
                    << 0x22U) | (((QData)((IData)((
                                                   (3U 
                                                    == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))
                                                    ? 2U
                                                    : 1U))) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q))));
        }
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__9(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__9\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid) 
                & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_op_failed = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d = 0ULL;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d 
                            = ((0U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))
                                ? (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
                                           >> 2U)) : 
                               ((2U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))
                                 ? 0xdeadbeefU : ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))
                                                   ? 0xb051b051U
                                                   : 0xbaadc0deU)));
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)))) {
                if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d 
                        = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
                                   >> 2U));
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
                        if ((2U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_op_failed = 1U;
                        } else if ((3U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = 1U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
                    if ((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                        if ((2U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_op_failed = 1U;
                        } else if ((3U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = 1U;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr) 
             & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr) 
             & ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q)) 
                | (2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy) 
             & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d = 3U;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_op_failed) 
             & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d = 2U;
        }
        if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr) 
              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                 >> 0x10U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d = 0U;
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select) {
                if (((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)) 
                     & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d 
                        = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q)) 
                            << 0x22U) | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q)) 
                                         << 2U));
                } else if (((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q)) 
                                    << 0x22U) | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q)) 
                                                 << 2U)));
                }
            }
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d 
                    = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i)) 
                        << 0x28U) | (0xffffffffffULL 
                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
                                        >> 1U)));
            }
        }
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__10(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__10\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 0U;
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_ready) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 4U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_ready) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 2U;
        }
    } else if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select) 
                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q)))) {
        if ((1U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 1U;
        } else if ((2U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = 3U;
        }
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__12(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__12\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             && (5U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x1dU == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x18U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U)))))))) {
            if ((1U & (~ ((0x20U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                          && (0x27U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U)))))))) {
                if ((0x38U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x39U != (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x3aU != (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x3cU == (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x16U))))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                        = ((0xffffffff00000000ULL 
                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                           | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)));
                                }
                            } else if ((0x3dU == (0x7fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U))))) {
                                if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x16U))))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                        = ((0xffffffffULL 
                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                           | ((QData)((IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
                                              << 0x20U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(VL_SHIFTR_III(32,32,32, (IData)(
                                                              (vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 
                                                               >> 3U)), 
                                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                           + ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                               ? ((IData)(1U) << (7U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U)))
                               : 0U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__sbr_port_gnt) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__sbr_port_gnt) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 3U;
        }
    } else {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbaddress_write_valid) 
             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0x14U))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_write_valid) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_read_valid) 
             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0xfU))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
    }
    if (((2U < (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    if (((0U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x100000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             && (5U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x1dU == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U)))))))) {
            if ((1U & (~ (((((((((0x20U <= (0x7fU & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U)))) 
                                 && (0x27U >= (0x7fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                                | (0x40U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                               | (0x13U == (0x7fU & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U))))) 
                              | (0x34U == (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) 
                             | (0x35U == (0x7fU & (IData)(
                                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                           >> 0x22U))))) 
                            | (0x38U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x39U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x3aU == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U)))))))) {
                if ((0x3cU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                } else if ((0x3dU == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             && (5U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x1dU == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x18U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U)))))))) {
            if ((1U & (~ ((0x20U <= (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                          && (0x27U >= (0x7fU & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U)))))))) {
                if ((0x38U != (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x39U == (0x7fU & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                                = ((0xffffffff00000000ULL 
                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                                   | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)));
                        }
                    } else if ((0x3aU == (0x7fU & (IData)(
                                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                           >> 0x22U))))) {
                        if ((1U & (~ ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                                = ((0xffffffffULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                                   | ((QData)((IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
                                      << 0x20U));
                        }
                    }
                }
                if ((0x38U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                            = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                               | (0x400000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               & ((~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                    >> 0x16U)) 
                                                  << 0x16U))));
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = ((0xffff8fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                               | (((0U != (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                 >> 0xcU)))
                                    ? 0U : (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                  >> 0xcU))) 
                                  << 0xcU));
                    }
                } else if ((0x39U == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                } else if ((0x3aU == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                } else if ((0x3cU == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                } else if ((0x3dU == (0x7fU & (IData)(
                                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror) 
                  << 0xcU));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
              << 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x407U | (0xfffff000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
}

extern const VlWide<12>/*383:0*/ Vtb_croc_soc__ConstPool__CONST_hc3736b80_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__13(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__13\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_3;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_3 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_4;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_4 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__sbr_port_gnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[1U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[7U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[8U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[8U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xbU];
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o) 
                     == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__sbr_port_gnt 
                = ((0xb8U >= ((IData)(1U) + (0xffU 
                                             & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o))))) 
                   && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[
                             (((IData)(1U) + (0xffU 
                                              & ((IData)(0x25U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))) 
                              >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x25U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o))))))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 
                = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[0U]);
            if ((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x48U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o))))) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[
                        (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)) 
                                 >> 5U))]) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[0U] 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[1U] 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[0U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[1U] 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[2U] 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[1U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[2U] 
                = (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req[2U] 
                            >> 1U));
            if ((0x167U >= ((IData)(1U) + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))))) {
                VL_ASSIGNSEL_WW(360,71,((IData)(1U) 
                                        + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
            }
        }
    }
    if ((((0x167U >= (0x1ffU & ((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))) 
          && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[
                    (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x48U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))))) 
         & ((0xb8U >= ((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o))))) 
            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[
                      (((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o)))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_wb 
        = (((- (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id))) 
            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_id) 
           | ((- (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu))) 
              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_rdata_ext));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)
                           ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n 
                              >> 1U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtvec_en 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtvec_init;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_we_int) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            (((0x20U 
                                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                  << 2U)) 
                                                              | (0x10U 
                                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U))) 
                                                             | ((0xcU 
                                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 9U)) 
                                                                | ((2U 
                                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                       >> 0x10U)) 
                                                                   | (1U 
                                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                         >> 0x15U)))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0xcU 
                                                                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (3U 
                                                                 | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffe7U 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff9ffU 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d);
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_en = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_en = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_cause) 
                      << 6U));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_en = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_en = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_en = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | ((0x10U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 1U)) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q) 
                                               << 2U)));
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id)))) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_en = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x1fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (0x20U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                               << 1U)));
            if ((3U != (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                              >> 2U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
                    = (0x3dU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x23U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)
                        ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q)
                        : 4U) << 2U));
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (5U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) 
                      | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                        | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if ((1U & (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
                            & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                           & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            } else {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
        }
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_3 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__sbr_port_gnt));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[5U] 
            << 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                         >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
            << 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                         >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[2U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
             << 0x18U) | (0xffff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                       >> 8U))) | (0xffU 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                      >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[3U] 
        = ((0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                     >> 8U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                 << 0x18U) | (0xffff00U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                                 >> 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[4U] 
        = ((0xffff0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U]) 
           | ((0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                        >> 8U)) | (0xff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                              >> 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[5U] 
        = ((0xffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[5U]) 
           | (0xffff0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[5U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | ((0xffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U]) 
              | (0xff0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | (0xff000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                             << 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[7U] 
        = (((0xffff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                          << 8U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                     >> 0x18U)) | (0xff000000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                                      << 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[8U] 
        = (((0xffff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                          << 8U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                     >> 0x18U)) | (0xff000000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                      << 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[7U] 
            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                      >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[8U] 
            << 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                      >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[2U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
             << 0x10U) | (0xff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                     >> 0x10U))) | 
           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[8U] 
            >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[3U] 
        = ((0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                     >> 0x10U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                    << 0x10U) | (0xff00U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                                                    >> 0x10U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[4U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
             << 0x18U) | (0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                       >> 8U))) | (
                                                   (0xffU 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                                       >> 0x10U)) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                                         >> 0x10U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[5U] 
        = ((0xffffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                       >> 8U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                   << 0x18U) | (0xff0000U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                                                   >> 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | ((0xffffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                          >> 8U)) | (0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                                  >> 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | (0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[7U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[7U]) 
           | (0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[7U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[8U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[8U]) 
           | (0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[8U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[2U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
            << 8U) | (0xffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[3U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
            >> 0x18U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                         << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[4U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
            << 0x10U) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                          >> 0x18U) | (0xff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                  << 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[5U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
            >> 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                         << 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[1U] 
               >> 0x10U) | (0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                         << 0x10U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
              << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[7U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
            >> 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                      << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[8U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[1U] 
            >> 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                      << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[2U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
            << 8U) | (0xffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xbU]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[3U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
            >> 0x18U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                         << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[4U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
            << 0x10U) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                          >> 0x18U) | (0xff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                                  << 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[5U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
            >> 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                         << 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
               >> 0x10U) | (0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                         << 0x10U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
              << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[7U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
            >> 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                      << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[8U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
            >> 8U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                      << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[3U] 
            << 0x18U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                         >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
            << 0x18U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                         >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[2U] 
        = ((0xffffff00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U]) 
           | (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                       >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[3U] 
        = ((0xffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[3U]) 
           | (0xffffff00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[3U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[4U] 
        = ((0xffff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                           << 8U)) | ((0xffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U]) 
                                      | (0xff00U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[5U] 
        = (((0xff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                        << 8U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                   >> 0x18U)) | (0xffff0000U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                                    << 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xff000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | (((0xff00U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                           << 8U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                      >> 0x18U)) | 
              (0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                            << 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U] 
        = ((0xffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U]) 
           | (0xff000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                             << 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[7U] 
        = (((0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                          << 0x10U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                        >> 0x10U)) 
           | (0xff000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                             << 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[8U] 
        = (((0xff0000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                          << 0x10U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                        >> 0x10U)) 
           | (0xff000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                             << 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
                 & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if) 
                       | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__retain_id)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & ((((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_3) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
           | (1U & ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_3) 
                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_4 
        = ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_3) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                        }
                    }
                }
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                     & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
            }
            if ((1U & (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
                        & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                       & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                }
            }
        } else {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
            }
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & ((((0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs) 
                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq)) 
                        | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                          >> 2U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
    } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_fetchen__q) 
                | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_ext_intr_sync__DOT__reg_q) 
                   >> 1U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_6 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | ((0xffffffe0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
                 | ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready)) 
                     << 4U) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec) 
                                 & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid)) 
                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec))) 
                                << 3U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_instr_ret_wb) 
                                          << 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffe1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_branch) 
                << 8U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_jump) 
                          << 7U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_store) 
                                      << 6U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_load) 
                                                << 5U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffe1ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__div_en_dec) 
                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_multdiv)) 
                << 0xcU) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__wfi_insn_dec) 
                            << 0xbU)) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_instr_ret_wb) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_is_compressed_id)) 
                                          << 0xaU) 
                                         | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_tbranch) 
                                            << 9U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & ((((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_4) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set) 
                                              << 1U) 
                                             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q))))) 
           | (1U & ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_4) 
                    | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                       | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_d 
        = (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)) 
            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_d)) 
           | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_valid_clear)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_6) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr))
                ? (1ULL + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 2U)) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 2U))) ? (1ULL 
                                                 + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_9)));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__;
    }
}
