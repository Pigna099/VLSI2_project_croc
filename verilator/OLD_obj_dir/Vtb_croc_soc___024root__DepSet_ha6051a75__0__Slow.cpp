// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_static__TOP(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_static__TOP\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = 1U;
}

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_initial__TOP(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x793d2573U;
    __Vtemp_1[1U] = 0x696e6172U;
    __Vtemp_1[2U] = 0x62U;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                             vlSelfRef.tb_croc_soc__DOT__binary_path)) {
        VL_WRITEF_NX("Running program: %@\n",0,-1,&(vlSelfRef.tb_croc_soc__DOT__binary_path));
        Verilated::runFlushCallbacks();
    } else {
        VL_WRITEF_NX("No binary path provided. Running helloworld.\n",0);
        Verilated::runFlushCallbacks();
        vlSelfRef.tb_croc_soc__DOT__binary_path = std::string{"../sw/bin/helloworld.hex"};
    }
    VL_WRITEF_NX("ClkFrequency:         20MHz\nUartRealBaudRate:     125000\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_croc_soc__DOT__uart_rx_i = 1U;
    vlSelfRef.tb_croc_soc__DOT__uart_reading_byte = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x200U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__init_val[(0x1ffU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x200U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__init_val[(0x1ffU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0U] 
        = (1U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[1U] 
        = (2U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [1U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[2U] 
        = (4U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [2U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (8U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [3U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (0x10U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [4U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (0x20U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [5U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (0x40U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [6U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x80U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [7U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x100U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [8U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x200U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [9U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xaU] 
        = (0x400U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0xaU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xbU] 
        = (0x800U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0xbU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xcU] 
        = (0x1000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0xcU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xdU] 
        = (0x2000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0xdU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xeU] 
        = (0x4000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0xeU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xfU] 
        = (0x8000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0xfU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x10U] 
        = (0x10000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x10U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x11U] 
        = (0x20000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x11U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x12U] 
        = (0x40000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x12U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x13U] 
        = (0x80000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x13U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x14U] 
        = (0x100000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x14U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x15U] 
        = (0x200000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x15U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x16U] 
        = (0x400000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x16U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x17U] 
        = (0x800000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x17U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x18U] 
        = (0x1000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x18U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x19U] 
        = (0x2000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x19U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] 
        = (0x4000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x1aU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] 
        = (0x8000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x1bU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] 
        = (0x10000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x1cU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] 
        = (0x20000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x1dU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] 
        = (0x40000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x1eU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] 
        = (0x80000000U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
           [0x1fU]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
        = (0x212380ULL | (0xffffffff00000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
        = (1U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__ = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[0U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[1U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[2U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[3U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[3U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[4U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[5U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[6U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[7U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[8U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[9U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xdU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xeU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xfU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x10U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x11U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x12U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x13U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x14U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x15U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x16U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x17U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x18U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x19U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1aU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1bU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1cU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1dU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1eU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1fU] = 0ULL;
}

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_final(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_final\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__stl(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_croc_soc___024root___eval_phase__stl(Vtb_croc_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_settle(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_settle\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_croc_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tb_croc_soc.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_croc_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__stl(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___dump_triggers__stl\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_gpio.gpio_intrpt_pending)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.all_periph_obi_rsp)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_obi_demux.sbr_port_gnt)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_obi_demux.sbr_port_gnt)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.user_rom_obi_rsp)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[1].sel)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[0].gen_level[0].sel)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[1].sel)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[0].gen_level[0].sel)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<IData/*31:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h92de6a85_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hdb7a7e67_0;
extern const VlUnpacked<QData/*63:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hb3c8bb2c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h57b513f7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h8942d8dc_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h1604116e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h68df2ee3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hfee633bb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h06be223f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hc91ec702_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hb5eb2001_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hb2247317_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hbf1a08f3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h75cf98a8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hc7939e58_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h6fe4f829_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h2b2af8ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h9e4bae50_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hb57821c9_0;
extern const VlWide<16>/*511:0*/ Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h8b1810fd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h93de0041_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h812b8946_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h037ca086_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h292f89d1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h10e49fa7_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtb_croc_soc__ConstPool__TABLE_h988d7a0a_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_heb8d558f_0;

VL_ATTR_COLD void Vtb_croc_soc___024root___stl_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___stl_sequent__TOP__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hd20fb331__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hd20fb331__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hdebb0f45__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hdebb0f45__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h10fc9f5d__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h10fc9f5d__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__1;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__1 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h6c94b24e__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h6c94b24e__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hbe5a1927__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hbe5a1927__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h03ebbafb__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h03ebbafb__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hff4ccc90__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hff4ccc90__0 = 0;
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__1;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__1 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h0217daf8_1_0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h0217daf8_1_0 = 0;
    IData/*31:0*/ __Vfunc_load__13434__Vfuncout;
    __Vfunc_load__13434__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_load__13434__size;
    __Vfunc_load__13434__size = 0;
    IData/*31:0*/ __Vfunc_float_load__13435__Vfuncout;
    __Vfunc_float_load__13435__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_float_load__13435__size;
    __Vfunc_float_load__13435__size = 0;
    CData/*4:0*/ __Vfunc_float_load__13435__dest;
    __Vfunc_float_load__13435__dest = 0;
    IData/*31:0*/ __Vfunc_load__13436__Vfuncout;
    __Vfunc_load__13436__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_load__13436__size;
    __Vfunc_load__13436__size = 0;
    CData/*4:0*/ __Vfunc_load__13436__dest;
    __Vfunc_load__13436__dest = 0;
    IData/*31:0*/ __Vfunc_load__13437__Vfuncout;
    __Vfunc_load__13437__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_load__13437__size;
    __Vfunc_load__13437__size = 0;
    IData/*31:0*/ __Vfunc_csrw__13438__Vfuncout;
    __Vfunc_csrw__13438__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_csrw__13438__csr;
    __Vfunc_csrw__13438__csr = 0;
    IData/*31:0*/ __Vfunc_store__13439__Vfuncout;
    __Vfunc_store__13439__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_store__13439__size;
    __Vfunc_store__13439__size = 0;
    IData/*31:0*/ __Vfunc_float_store__13440__Vfuncout;
    __Vfunc_float_store__13440__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_float_store__13440__size;
    __Vfunc_float_store__13440__size = 0;
    CData/*4:0*/ __Vfunc_float_store__13440__src;
    __Vfunc_float_store__13440__src = 0;
    IData/*31:0*/ __Vfunc_store__13441__Vfuncout;
    __Vfunc_store__13441__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_store__13441__size;
    __Vfunc_store__13441__size = 0;
    CData/*4:0*/ __Vfunc_store__13441__src;
    __Vfunc_store__13441__src = 0;
    IData/*31:0*/ __Vfunc_csrr__13442__Vfuncout;
    __Vfunc_csrr__13442__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_csrr__13442__csr;
    __Vfunc_csrr__13442__csr = 0;
    IData/*31:0*/ __Vfunc_store__13443__Vfuncout;
    __Vfunc_store__13443__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_store__13443__size;
    __Vfunc_store__13443__size = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*4:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*4:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_12;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_d = 0U;
    if ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_d 
            = ((1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q)) 
               && (2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if ((0x10000000U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
    }
    if (((0x10000000U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
         & (0x10000800U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    if ((0x10000000U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000000U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
         & (0x10000800U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000800U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
         & (0x10001000U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR 
        = (0xffU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter) 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount 
        = (0xfU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFEIncrement 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOWrite) 
           & (0U != (7U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOD) 
                           >> 8U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_d_ex[0U] 
        = (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d
                          [0U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_d_ex[1U] 
        = (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d
                          [1U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit)) 
           & (4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RCLK__DOT__iDd)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBAUDOUTN));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR 
        = ((0xc0U & ((- (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable))) 
                     << 6U)) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable)) 
                                 << 5U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iIIR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr
        [0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr
        [1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr
        [2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr
        [3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg
        [0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg
        [1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg
        [2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg
        [3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS 
        = (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iMSRInterrupt 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
            >> 3U) & (((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                           >> 5U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS)) 
                      | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR) 
                         | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT 
        = ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
               >> 6U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_14 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY)) 
           & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL 
        = (((0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr)) 
            == (0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr))) 
           & ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr) 
                                       >> 6U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD 
        = (1U & ((IData)((0x18U == (0x18U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)))) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDCDn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI 
        = (1U & ((IData)((0x14U == (0x14U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)))) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRIn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR 
        = (1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                   >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDSRn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_DR 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY)) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOWrite)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOPE 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY)) 
                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ) 
                    >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFE 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY)) 
                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ) 
                    >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOBI 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ) 
              >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3c371931__0 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                 >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x10U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFULL 
        = (((0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iRDAddr)) 
            == (0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iWRAddr))) 
           & ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iRDAddr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iWRAddr) 
                                       >> 6U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 1U;
        }
    }
    if ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS 
        = (1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                   >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRTS)) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCTSn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge_del 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk3)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk2));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 7U));
    __Vtableidx34 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__word_addr_q) 
                      << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__we_q) 
                                 << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__req_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__rsp_data 
        = Vtb_croc_soc__ConstPool__TABLE_h92de6a85_0
        [__Vtableidx34];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__obi_err 
        = Vtb_croc_soc__ConstPool__TABLE_hdb7a7e67_0
        [__Vtableidx34];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ 
        = (IData)((2U == (6U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
        = (0x3fffffffeULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp);
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
                = (1ULL | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp);
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
        = ((1ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA)) 
              << 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ 
        = (IData)((1U == (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    __Vtableidx25 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata 
        = Vtb_croc_soc__ConstPool__TABLE_hb3c8bb2c_0
        [__Vtableidx25];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o = 0U;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_req) 
         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_wen))) {
        if ((0U == (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg;
        } else if ((4U == (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg;
        } else if ((8U == (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg;
        } else if ((0xcU == (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count_reg;
        } else if ((0x10U == (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo_reg;
        } else if ((0x14U == (0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi_reg;
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    __Vtableidx5 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vtb_croc_soc__ConstPool__TABLE_h57b513f7_0
        [__Vtableidx5];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk2)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk1));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp 
        = (0x7fULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hd20fb331__0 
        = (IData)((0x100aU == (0x103fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h0217daf8_1_0 
        = ((3U > (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x14U))) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 0x11U));
    __Vfunc_load__13434__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 0x14U));
    __Vfunc_load__13434__Vfuncout = (0x38050403U | 
                                     ((IData)(__Vfunc_load__13434__size) 
                                      << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__0 
        = __Vfunc_load__13434__Vfuncout;
    __Vfunc_load__13437__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 0x14U));
    __Vfunc_load__13437__Vfuncout = (0x38050403U | 
                                     ((IData)(__Vfunc_load__13437__size) 
                                      << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__1 
        = __Vfunc_load__13437__Vfuncout;
    __Vfunc_csrw__13438__csr = (0xfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    __Vfunc_csrw__13438__Vfuncout = (0x41073U | ((IData)(__Vfunc_csrw__13438__csr) 
                                                 << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h6c94b24e__0 
        = __Vfunc_csrw__13438__Vfuncout;
    __Vfunc_store__13439__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U));
    __Vfunc_store__13439__Vfuncout = (0x38850023U | 
                                      ((IData)(__Vfunc_store__13439__size) 
                                       << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__0 
        = __Vfunc_store__13439__Vfuncout;
    __Vfunc_csrr__13442__csr = (0xfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    __Vfunc_csrr__13442__Vfuncout = (0x2473U | ((IData)(__Vfunc_csrr__13442__csr) 
                                                << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hff4ccc90__0 
        = __Vfunc_csrr__13442__Vfuncout;
    __Vfunc_store__13443__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U));
    __Vfunc_store__13443__Vfuncout = (0x38850023U | 
                                      ((IData)(__Vfunc_store__13443__size) 
                                       << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__1 
        = __Vfunc_store__13443__Vfuncout;
    __Vfunc_float_load__13435__dest = (0x1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    __Vfunc_float_load__13435__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x14U));
    __Vfunc_float_load__13435__Vfuncout = (0x38050007U 
                                           | (((IData)(__Vfunc_float_load__13435__size) 
                                               << 0xcU) 
                                              | ((IData)(__Vfunc_float_load__13435__dest) 
                                                 << 7U)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hdebb0f45__0 
        = __Vfunc_float_load__13435__Vfuncout;
    __Vfunc_load__13436__dest = (0x1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    __Vfunc_load__13436__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 0x14U));
    __Vfunc_load__13436__Vfuncout = (0x38050003U | 
                                     (((IData)(__Vfunc_load__13436__size) 
                                       << 0xcU) | ((IData)(__Vfunc_load__13436__dest) 
                                                   << 7U)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h10fc9f5d__0 
        = __Vfunc_load__13436__Vfuncout;
    __Vfunc_float_store__13440__src = (0x1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    __Vfunc_float_store__13440__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x14U));
    __Vfunc_float_store__13440__Vfuncout = (0x38050027U 
                                            | (((IData)(__Vfunc_float_store__13440__src) 
                                                << 0x14U) 
                                               | ((IData)(__Vfunc_float_store__13440__size) 
                                                  << 0xcU)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hbe5a1927__0 
        = __Vfunc_float_store__13440__Vfuncout;
    __Vfunc_store__13441__src = (0x1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    __Vfunc_store__13441__size = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U));
    __Vfunc_store__13441__Vfuncout = (0x38050023U | 
                                      (((IData)(__Vfunc_store__13441__src) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_store__13441__size) 
                                        << 0xcU)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h03ebbafb__0 
        = __Vfunc_store__13441__Vfuncout;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_read_request 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__we_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__req_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)) || (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
        = (0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]);
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
                = (0x20U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]);
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__trigger_match 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
              == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = ((0x7fe0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                       >> 1U)) | (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
               >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0), 5U)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq = 0U;
    if ((0U >= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hbb4ccad6__0 
            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 0x1fU);
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hbc1b3be0__0 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if ((0U >= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq)) 
                   | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hbb4ccad6__0) 
                            << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq)) 
                   | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hbc1b3be0__0) 
                            << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    __Vtableidx7 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select 
        = Vtb_croc_soc__ConstPool__TABLE_h8942d8dc_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select 
        = Vtb_croc_soc__ConstPool__TABLE_h1604116e_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vtb_croc_soc__ConstPool__TABLE_h68df2ee3_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vtb_croc_soc__ConstPool__TABLE_hfee633bb_0
        [__Vtableidx7];
    __Vtableidx3 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtb_croc_soc__ConstPool__TABLE_h06be223f_0
        [__Vtableidx3];
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
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
        }
    }
    if (((2U < (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    if (((0U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                  >> 0x13U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask 
            = ((0x40000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                ? 0xfU : ((0x20000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                           ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                              | (0xfU & ((IData)(3U) 
                                         << (2U & ((IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                            >> 1U)) 
                                                   << 1U)))))
                           : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                              | (0xfU & ((IData)(1U) 
                                         << (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = 0U;
    if ((0x10000000U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = 1U;
    }
    if (((0x10000000U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
         & (0x10000800U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = 2U;
    }
    if (((0x10000800U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
         & (0x10001000U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = 3U;
    }
    if (((0x20000000U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
         & (0x80000000U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = 4U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked 
        = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & ((IData)(3U) << (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x11U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_run = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp_1[2U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp_1[3U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp_1[4U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp_1[5U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp_1[6U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp_1[7U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp_1[8U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp_1[9U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp_1[0xaU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp_1[0xbU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    __Vtemp_1[0xcU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    __Vtemp_1[0xdU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    __Vtemp_1[0xeU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    __Vtemp_1[0xfU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    __Vtemp_1[0x10U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    __Vtemp_1[0x11U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    __Vtemp_1[0x12U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    __Vtemp_1[0x13U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    __Vtemp_1[0x14U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    __Vtemp_1[0x15U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    __Vtemp_1[0x16U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    __Vtemp_1[0x17U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    __Vtemp_1[0x18U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    __Vtemp_1[0x19U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    __Vtemp_1[0x1aU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    __Vtemp_1[0x1bU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    __Vtemp_1[0x1cU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    __Vtemp_1[0x1dU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    __Vtemp_1[0x1eU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    __Vtemp_1[0x1fU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
        = (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                          (0x1fU & 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                            >> 0x14U)), 5U)))
             ? 0U : (__Vtemp_1[(((IData)(0x1fU) + (0x3ffU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                       >> 0x14U)), 5U))) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                   >> 0x14U)), 5U))))) 
           | (__Vtemp_1[(0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                (0x1fU 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                    >> 0x14U)), 5U) 
                                  >> 5U))] >> (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                   >> 0x14U)), 5U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq0 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
            >> 0x1fU) ? (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo) 
                          & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi)) 
                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                            >> 2U)) : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo) 
                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                                          >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq1 = 0U;
    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                  >> 0x1fU)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq1 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi) 
               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg 
                  >> 2U));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    __Vtableidx2 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtb_croc_soc__ConstPool__TABLE_h9e4bae50_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtb_croc_soc__ConstPool__TABLE_h9e4bae50_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtb_croc_soc__ConstPool__TABLE_h9e4bae50_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtb_croc_soc__ConstPool__TABLE_hb57821c9_0
        [__Vtableidx2];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (IData)((IData)((2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__id_q) 
                                          << 1U))) 
                         << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (IData)((IData)((2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__id_q) 
                                          << 1U))) 
                         << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
        = (0x7fULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp 
        = (0x7fULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish 
        = (((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
            & (5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
           | (((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
               & (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
              | (((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
                  & (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
                 | ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
                    & (8U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN 
        = (1U & ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR))
                  ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT)
                  : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_SIN__DOT__iD) 
                     >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR 
        = ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable) 
               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FIFOERR)) 
              << 7U) | (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning)) 
                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
                        << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY) 
                                    << 5U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_BI) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FE) 
                << 3U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_PE) 
                          << 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_OE) 
                                      << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_DR))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iPERE 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_PEDET__DOT__iDd)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOPE));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFERE 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_FEDET__DOT__iDd)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFE));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBIRE 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BIDET__DOT__iDd)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOBI));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFull 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFULL));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOTrigger 
            = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_14) 
                     | (((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)) 
                         & (IData)((0U != (0x30U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE))))) 
                        | (((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)) 
                            & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE) 
                               >> 5U)) | (((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)) 
                                           & (IData)(
                                                     (0x38U 
                                                      == 
                                                      (0x38U 
                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE))))) 
                                          | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFULL))))));
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFull 
            = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOTrigger 
            = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_14) 
                     | (((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)) 
                         & (IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE))))) 
                        | (((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)) 
                            & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE) 
                               >> 3U)) | (((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger)) 
                                           & (IData)(
                                                     (0xeU 
                                                      == 
                                                      (0xeU 
                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE))))) 
                                          | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE) 
                                             >> 4U))))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
                 & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 5U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                    >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR 
        = (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD) 
              << 7U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI) 
                        << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR) 
                                    << 5U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD) 
                << 3U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI) 
                          << 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR) 
                                      << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp 
        = ((3ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__rsp_data)) 
               << 7U) | ((QData)((IData)(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__id_q) 
                                          << 2U))) 
                         << 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp 
        = ((0x7ffffffffeULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp) 
           | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__req_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp 
        = ((0x7ffffffff7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__obi_err)) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_q_ex
                  [0U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_q_ex
                  [1U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_lo = 0U;
    if ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)) {
        if ((1U & (~ (IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))))) {
            if ((1U & (~ (IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_lo 
                    = ((1U & (~ (IData)((0xc0U == (0xc0U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg))))) 
                       || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge));
            }
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_hi = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo 
            = ((IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg))) 
               || ((IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge)
                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo)));
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_hi = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_hi = 0U;
    if ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg)) {
        if ((1U & (~ (IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg)))))) {
            if ((1U & (~ (IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg)))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_hi 
                    = ((1U & (~ (IData)((0xc0U == (0xc0U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg))))) 
                       || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge));
            }
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_hi 
            = ((IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg))) 
               || ((IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg)))
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge)
                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_hi)));
    }
    if ((IData)((0x80000001U == (0x80000001U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))) {
        if ((1U & (~ (IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))))) {
            if ((1U & (~ (IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_lo 
                    = ((1U & (~ (IData)((0xc0U == (0xc0U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg))))) 
                       || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge));
            }
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo 
            = ((IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg))) 
               || ((IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge)
                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_hi 
            = ((IData)((0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))
                ? (0xffffffffU == vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg)
                : ((IData)((0x80U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))
                    ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge_del) 
                       & (0xffffffffU == vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg))
                    : ((IData)((0xc0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg)))
                        ? (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo) 
                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge_del)) 
                           & (0xffffffffU == vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg))
                        : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo) 
                           & (0xffffffffU == vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[8U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0xbU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0xcU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0xdU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0xeU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU] 
        = Vtb_croc_soc__ConstPool__CONST_h7c8123e3_0[0xfU];
    if ((0U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x18U))) {
        if (((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h0217daf8_1_0) 
             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x10U))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0xeU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if (tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hd20fb331__0) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__0;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hdebb0f45__0
                        : tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h10fc9f5d__0);
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9b72738d__1;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h6c94b24e__0))));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h6c94b24e__0))) 
                               >> 0x20U));
            }
        } else if (((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x10U)) & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h0217daf8_1_0))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0xeU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if (tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hd20fb331__0) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__0))));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__0))) 
                               >> 0x20U));
            } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hbe5a1927__0
                        : tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h03ebbafb__0);
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hff4ccc90__0;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__1))));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf96968ca__1))) 
                               >> 0x20U));
            }
        } else if ((1U & ((3U <= (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U))) 
                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                             >> 0x13U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
        }
        if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x12U) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x13U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_rdata = 0U;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_read_request) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_rdata 
            = (((((((((0U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                              << 2U)) | (0x80U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                   << 2U))) 
                     | (0x100U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                   << 2U))) | (0x180U 
                                               == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                   << 2U))) 
                   | (0x200U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                 << 2U))) | (0x280U 
                                             == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                 << 2U))) 
                 | (0x300U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                               << 2U))) | (0x380U == 
                                           ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                            << 2U)))
                ? ((0U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                           << 2U)) ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U]
                    : ((0x80U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                  << 2U)) ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U]
                        : ((0x100U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                       << 2U)) ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[5U]
                            : ((0x180U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                           << 2U)) ? 
                               vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U]
                                : ((0x200U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                               << 2U))
                                    ? 0U : ((0x280U 
                                             == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                 << 2U))
                                             ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U]
                                             : ((0x300U 
                                                 == 
                                                 ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                  << 2U))
                                                 ? 
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U]
                                                 : 
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U])))))))
                : 0xbadcab1eU);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x3ffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
               >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1), 5U)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
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
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec 
        = (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err)) 
            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_run));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_cause = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                ? ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                         >> 0xdU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                      >> 0x1aU)))) {
                            if ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                 >> 0x1fU)) {
                                if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                              >> 0x1eU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                                 >> 0xeU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                                         >> 0xcU)))) {
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0x41U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                              >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                         >> 0x19U)))) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                                 >> 0xdU)))) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                                    >> 0xdU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                                 >> 0xcU)))) {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                 >> 0x1dU)))) {
                                if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                              >> 0x1cU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                  >> 0x1bU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                                    >> 0x1aU)))) {
                                            if ((0x2000000U 
                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x2000U 
                                                         & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = 0U;
                                                        } else {
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = 0U;
                                                        }
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = 0U;
                                                    } else {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = 0U;
                                                    }
                                                } else if (
                                                           (0x2000U 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x1000U 
                                                         & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = 0U;
                                                    } else {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = 0U;
                                                    }
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = 0U;
                                                } else {
                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = 0U;
                                                }
                                            } else {
                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x4000U 
                                                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                        ? 4U
                                                        : 3U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                        ? 9U
                                                        : 2U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                        ? 0x2cU
                                                        : 0x2bU)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                                        ? 0xaU
                                                        : 0U)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                      >> 0xeU)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                        if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)) {
                            if ((0U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                        >> 0x1bU))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                               >> 0x1bU))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                ? ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id)
                                    ? 0xaU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x302U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x7b2U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x105U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((IData)((0U != (0xf8f80U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                          >> 0xeU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0xeU))) && 
                           (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                  >> 0xdU)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                       >> 0x18U)) | 
                                (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                       >> 0xcU))))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                >> 0x1fU)) {
                        if ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x20000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x8000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x4000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x2000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac_en = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = 0x41U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else if ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                      >> 0x1dU)) || 
                               ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                       >> 0x1cU)) || 
                                ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                        >> 0x1bU)) 
                                 || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                            >> 0x1aU)) 
                                     || ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                >> 0x19U)) 
                                         || ((0x4000U 
                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)
                                              ? ((1U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                         >> 0xcU))))
                                              : ((1U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                        >> 0xcU)))))))));
                    } else if ((0x20000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x4000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                        if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                                if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                            } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        } else {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                  >> 0xcU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                   >> 0xcU)) && ((1U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                     >> 0x1aU)) 
                                                 || ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                      >> 0x1fU) 
                                                     || ((0x40000000U 
                                                          & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                          >> 0x19U))))))
                                                          : 
                                                         ((1U 
                                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                          >> 0x19U)))))))))))
                        : ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                   >> 0xcU)) && ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                  >> 0x1fU) 
                                                 || ((1U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                         >> 0x1eU)) 
                                                     || ((1U 
                                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                             >> 0x1dU)) 
                                                         || ((1U 
                                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                 >> 0x1cU)) 
                                                             || ((1U 
                                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                     >> 0x1bU)) 
                                                                 || (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                         >> 0x19U)))))))))));
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                            >> 0xeU)));
            if ((0U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                              >> 0xcU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_c_insn_id) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFEDecrement 
        = ((0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFECounter)) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY)) 
              & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iPERE) 
                 | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBIRE) 
                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFERE)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_q
        [1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                    >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
               >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2), 5U)));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__trigger_match)));
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
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[0U] 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[0U]) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[0U] 
        = ((7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[0U]) 
           | (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q), 
                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U)) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[1U] 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[1U]) 
           | (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q), 
                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U)) 
              >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[1U] 
        = ((7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
                        << 5U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be)))))) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[2U] 
        = (0xffU & (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
                               << 5U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be)))))) 
                     >> 0x1dU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we) 
                                                                << 4U) 
                                                               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be))))) 
                                           >> 0x20U)) 
                                  << 3U)));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q;
    if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q))) {
        if (((0x41U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator)) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac_en))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_d = 1U;
        }
        if ((1U & (~ ((0x41U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator)) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac_en))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_d 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_d = 2U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_d = 0U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_d = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_d 
            = ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q))
                ? 0U : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((IData)(((0U == (0xf8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)) 
                 & ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                    | (3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
           | (0U != vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3;
    __Vtemp_12[0U] = 0U;
    __Vtemp_12[1U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp_12[2U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp_12[3U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp_12[4U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp_12[5U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp_12[6U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp_12[7U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp_12[8U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp_12[9U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp_12[0xaU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp_12[0xbU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    __Vtemp_12[0xcU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    __Vtemp_12[0xdU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    __Vtemp_12[0xeU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    __Vtemp_12[0xfU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    __Vtemp_12[0x10U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    __Vtemp_12[0x11U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    __Vtemp_12[0x12U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    __Vtemp_12[0x13U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    __Vtemp_12[0x14U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    __Vtemp_12[0x15U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    __Vtemp_12[0x16U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    __Vtemp_12[0x17U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    __Vtemp_12[0x18U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    __Vtemp_12[0x19U] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    __Vtemp_12[0x1aU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    __Vtemp_12[0x1bU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    __Vtemp_12[0x1cU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    __Vtemp_12[0x1dU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    __Vtemp_12[0x1eU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    __Vtemp_12[0x1fU] = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_last_q
                : (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                  ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q)
                                                    ? 
                                                   (1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                       >> 7U))
                                                    : 
                                                   (1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                       >> 0xfU))), 5U)))
                     ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                          + (0x3ffU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q)
                                                               ? 
                                                              (1U 
                                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                  >> 7U))
                                                               : 
                                                              (1U 
                                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                  >> 0xfU))), 5U))) 
                                         >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q)
                                                                  ? 
                                                                 (1U 
                                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                     >> 7U))
                                                                  : 
                                                                 (1U 
                                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                                     >> 0xfU))), 5U))))) 
                   | (__Vtemp_12[(0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                         ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q)
                                                           ? 
                                                          (1U 
                                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                              >> 7U))
                                                           : 
                                                          (1U 
                                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                              >> 0xfU))), 5U) 
                                           >> 5U))] 
                      >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q)
                                                  ? 
                                                 (1U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                     >> 7U))
                                                  : 
                                                 (1U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                     >> 0xfU))), 5U))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : (((- (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | (((0xff000U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id) 
                                               | (0x800U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                    >> 0x14U))))))
            : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id)
                    : (((- (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xdU) 
                       | (((0x1000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                       >> 0x13U)) | 
                           (0x800U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                      << 4U))) | ((0x7e0U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                        >> 7U))))))
                : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (((- (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                                      >> 7U))))
                    : (((- (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                          >> 0x14U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op)) 
           | ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op)) 
              | (3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_store = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_load = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_store 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out = 1U;
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out = 1U;
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out = 1U;
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__div_en_dec) 
           | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex)));
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h8b1810fd_0
        [__Vtableidx1];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h93de0041_0
        [__Vtableidx1];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h812b8946_0
        [__Vtableidx1];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h037ca086_0
        [__Vtableidx1];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h292f89d1_0
        [__Vtableidx1];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtb_croc_soc__ConstPool__TABLE_h10e49fa7_0
        [__Vtableidx1];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                << 0x1fU) | (0x40000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 1U)) | (0x4000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 9U)) | (0x400U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                            >> 0x19U)) | (4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 0x1dU)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q)
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__result_ex_i_q)
            : (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req))
                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b
                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_branch = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id = 2U;
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_cause = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save = 1U;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_cause 
                        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__trigger_match)
                            ? 2U : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq)
                                     ? 3U : 4U));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save = 1U;
                }
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 2U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int 
                = ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U))) && (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 2U;
                } else if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id 
                        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 3U : 0U);
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 2U;
                } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 3U;
                } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 4U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                            }
                        }
                    }
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id = 0U;
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id = 0U;
                                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 1U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = 0U;
            }
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q)) 
            | (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q)))
            ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
               | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex)
            : (((4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q)) 
                | (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q)))
                ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex)
                : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q)) 
                                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & 
                                            ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle)
                                              ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex
                                              : (- vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                     >> 0x1bU)) | ((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 0x1dU)) 
                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x1fU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffc7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0x15U)) | ((0x10U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x17U)) 
                                      | (8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x19U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffe3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 0xfU)) | ((0x80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x13U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff1ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 9U)) | ((0x400U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0xdU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff8fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          >> 3U)) | ((0x2000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   >> 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffc7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 3U)) | ((0x10000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 1U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffe3ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 9U)) | ((0x80000U & 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 5U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff1fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0xbU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf8ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x11U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xc7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  << 0x17U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x3fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
               << 0x1fU) | (0x40000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                           << 0x1dU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx 
            = (0x1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex);
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr 
            = (0xfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex);
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                               ? (1ULL | ((QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a))) 
                                          << 2U)) : 
                              ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                ? (1ULL | ((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a))) 
                                           << 3U)) : 
                               ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                 ? (1ULL | ((QData)((IData)(
                                                            (0x1fffffffU 
                                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a))) 
                                            << 4U))
                                 : (1ULL | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a)) 
                                            << 1U))))) 
                             + (0x1ffffffffULL & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                   ? 
                                                  (~ 
                                                   ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex)) 
                                                    << 1U))
                                                   : 
                                                  ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex)) 
                                                   << 1U)))));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_we_raw 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_branch = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_raw 
                                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_raw));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x800U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x400U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
        if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr 
                            = ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                         >> 5U))) || 
                               (1U & ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                       ? ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                 >> 3U)) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                >> 2U)) 
                                              || (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))))
                                       : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                >> 2U)) 
                                              || (1U 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))
                                           : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 2U)))));
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x200U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
        if ((0x100U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
            if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (((0x3a0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
         | ((0x3a1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
            | ((0x3a2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
               | ((0x3a3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                  | ((0x3b0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                     | ((0x3b1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                        | ((0x3b2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                           | ((0x3b3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                              | ((0x3b4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                 | ((0x3b5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                    | ((0x3b6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                       | ((0x3b7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                          | ((0x3b8U 
                                              == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                             | ((0x3b9U 
                                                 == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                                | ((0x3baU 
                                                    == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                                   | ((0x3bbU 
                                                       == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                                      | ((0x3bcU 
                                                          == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                                         | ((0x3bdU 
                                                             == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                                            | ((0x3beU 
                                                                == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)) 
                                                               | (0x3bfU 
                                                                  == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))))))))))))))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if ((0x10000000U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 3U)) << 2U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
    }
    if (((0x10000000U <= ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 3U)) << 2U)) 
         & (0x10000800U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 3U)) << 2U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    if ((0x10000000U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 3U)) << 2U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000000U <= ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 3U)) << 2U)) 
         & (0x10000800U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 3U)) << 2U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    if (((0x10000800U <= ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 3U)) << 2U)) 
         & (0x10001000U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 3U)) << 2U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext)))));
    __Vtableidx4 = (((0U != (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                     >> 1U))) << 9U) 
                    | ((0x100U & ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                     ^ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex) 
                                    >> 0x1fU) ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                    : (~ (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x20U)))) 
                                  << 8U)) | (((0U == (IData)(
                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U))) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vtb_croc_soc__ConstPool__TABLE_h988d7a0a_0
        [__Vtableidx4];
    __Vtableidx6 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0xcU & ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)) 
                                        << 2U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_be 
        = Vtb_croc_soc__ConstPool__TABLE_heb8d558f_0
        [__Vtableidx6];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = 0U;
    if ((0x10000000U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 3U)) << 2U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = 1U;
    }
    if (((0x10000000U <= ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 3U)) << 2U)) 
         & (0x10000800U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 3U)) << 2U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = 2U;
    }
    if (((0x10000800U <= ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 3U)) << 2U)) 
         & (0x10001000U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 3U)) << 2U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = 3U;
    }
    if (((0x20000000U <= ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 3U)) << 2U)) 
         & (0x80000000U > ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 3U)) << 2U)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = 4U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_jump = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id = 1U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval 
                                = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id)
                                    : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id);
                        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval 
                                = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_is_compressed_id)
                                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_c_id)
                                    : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id);
                        } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval 
                                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_last_q;
                                } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval 
                                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_last_q;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_jump 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set;
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_tbranch 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr) 
              | (((3U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access)
                           ? (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex 
                                    >> 0xaU)) : 0U)) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wr)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access)
                      ? (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex 
                               >> 8U)) : 0U) > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_d 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result 
            = ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                ? ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                    ? 0U : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                             ? ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                 ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                     ? 0U : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                              ? 0U : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                        ? ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                    ? (IData)(
                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                     ? 0U
                                                     : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q))
                                                    ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)))))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[0U] 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[0U]) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[0U] 
        = ((7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[0U]) 
           | (((1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                               << 0x18U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                                 >> 8U))
                                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                               << 0x10U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                                 >> 0x10U)))
                : ((1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                  >> 1U))) ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                               << 8U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                                 >> 0x18U))
                    : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b)) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[1U] 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[1U]) 
           | (((1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                               << 0x18U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                                 >> 8U))
                                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                               << 0x10U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                                 >> 0x10U)))
                : ((1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                  >> 1U))) ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                               << 8U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b 
                                                 >> 0x18U))
                    : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b)) 
              >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[1U] 
        = ((7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[1U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & (IData)(
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 3U))))) 
                        << 7U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_be)))))) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[2U] 
        = (0xffU & (((IData)((((QData)((IData)((0x3fffffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 3U))))) 
                               << 7U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_be)))))) 
                     >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                         >> 3U))))) 
                                             << 7U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we) 
                                                                << 4U) 
                                                               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_be))))) 
                                           >> 0x20U)) 
                                  << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_we_raw) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_insn_id 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_insn_id) 
            | (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
               | ((3U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                     | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn)))))) 
           & (6U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
}

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_triggers__stl(Vtb_croc_soc___024root* vlSelf);
VL_ATTR_COLD void Vtb_croc_soc___024root___eval_stl(Vtb_croc_soc___024root* vlSelf);

VL_ATTR_COLD bool Vtb_croc_soc___024root___eval_phase__stl(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__stl\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_croc_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_croc_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___dump_triggers__act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_gpio.gpio_intrpt_pending)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.all_periph_obi_rsp)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_obi_demux.sbr_port_gnt)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_obi_demux.sbr_port_gnt)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.user_rom_obi_rsp)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[1].sel)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[0].gen_level[0].sel)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[1].sel)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[0].gen_level[0].sel)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(posedge tb_croc_soc.i_clk_rst_sys.clk)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(negedge tb_croc_soc.rst_n)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(negedge tb_croc_soc.i_croc_soc.i_rstgen.init_no)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(negedge tb_croc_soc.jtag_trst_ni)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(negedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.__Vcellinp__i_apb_uart__PADDR)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLL)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLM)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIER)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIIR)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_DLAB)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLSR)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMCR)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMSR)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iRBR)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSCR)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.CState)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.iParity)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_EPS)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_PEN)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_SP)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_STB)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_WLS)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTSR)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTXStart)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDOUT)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.CState)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.RX_MVF.iQ)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudCount)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudStep)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDataCountFinish)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iFStopBit)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSIN)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @(posedge tb_croc_soc.fetch_en_i)\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @(negedge tb_croc_soc.uart_tx_o)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @(posedge tb_croc_soc.i_clk_rst_rtc.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__nba(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___dump_triggers__nba\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_gpio.gpio_intrpt_pending)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.all_periph_obi_rsp)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_obi_demux.sbr_port_gnt)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_obi_demux.sbr_port_gnt)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.user_rom_obi_rsp)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[1].sel)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[0].gen_level[0].sel)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.req_d)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[1].sel)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[0].gen_level[0].sel)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(posedge tb_croc_soc.i_clk_rst_sys.clk)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(negedge tb_croc_soc.rst_n)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(negedge tb_croc_soc.i_croc_soc.i_rstgen.init_no)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(negedge tb_croc_soc.jtag_trst_ni)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(negedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.__Vcellinp__i_apb_uart__PADDR)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLL)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLM)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIER)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIIR)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_DLAB)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLSR)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMCR)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMSR)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iRBR)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSCR)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.CState)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.iParity)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_EPS)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_PEN)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_SP)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_STB)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_WLS)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTSR)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTXStart)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDOUT)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.CState)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.RX_MVF.iQ)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudCount)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudStep)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDataCountFinish)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iFStopBit)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @( tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSIN)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @(posedge tb_croc_soc.fetch_en_i)\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @(negedge tb_croc_soc.uart_tx_o)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @(posedge tb_croc_soc.i_clk_rst_rtc.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_croc_soc___024root____Vm_traceActivitySetAll(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____Vm_traceActivitySetAll\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x45U)) {
        vlSelfRef.__Vm_traceActivity[__Vilp1] = 1U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtb_croc_soc___024root___ctor_var_reset(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___ctor_var_reset\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_croc_soc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_trst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_tms_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_tdi_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_tdo_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__uart_rx_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__uart_tx_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__fetch_en_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__gpio_o = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__file = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__status = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__addr = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__data = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__byte_data = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__byte_count = 0;
    vlSelf->tb_croc_soc__DOT__uart_reading_byte = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__tb_data = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.atDefault() = 0;
    vlSelf->tb_croc_soc__DOT__unnamedblk7__DOT__bite = 0;
    vlSelf->tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt = 0;
    vlSelf->tb_croc_soc__DOT__i_clk_rst_rtc__DOT__rst_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt = 0;
    vlSelf->tb_croc_soc__DOT__i_clk_jtag__DOT__rst_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_jtag__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dtmcs__Vstatic__read_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dtmcs__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed = VL_RAND_RESET_Q(41);
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__Vstatic__write_data_packed = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__sba_read_double__Vstatic__op = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__sba_read_double__Vstatic__read_sbcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_ext_intr_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(72, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req);
    VL_RAND_RESET_W(72, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req);
    VL_RAND_RESET_W(72, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp = VL_RAND_RESET_Q(39);
    VL_RAND_RESET_W(234, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(444, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__soc_ctrl_reg_rsp = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_id_o = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__bank_single_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__bank_single_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_c_id = VL_RAND_RESET_I(16);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_is_compressed_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_d_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_q_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_valid_clear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_id = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__en_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs = VL_RAND_RESET_I(19);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_if = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtvec_init = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_cause = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__trigger_match = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_instr_ret_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_tbranch = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_load = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_store = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_insn_id = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__result_ex_i_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_run = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_multdiv = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multicycle_done = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_wdata_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_we_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_alu = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__div_en_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_sign_ext = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__csr_pipe_flush = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__unused_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__unused_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__unused_data_req_done_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_d = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__alu_operator_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mac___05Fcontroller_i__DOT__mac_en_2_cycles_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_RAND_RESET_Q(34);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__multdiv_imd_val_we = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_last_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_update = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(24);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_be = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__wb_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(992, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(31);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mie_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mscratch_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_d = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtvec_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch0_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch1_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstack_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(19);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__tdo_oe_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_op_failed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__core_clear_pending_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__core_dmi_rst_nq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rid_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_mem_csrs = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbaddress_write_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_read_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_write_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 = VL_RAND_RESET_I(15);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 = VL_RAND_RESET_I(10);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hbb4ccad6__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hbc1b3be0__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(68, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n);
    VL_RAND_RESET_W(68, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound_h5bd2a4ad__0 = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3c371931__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__ = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o);
    VL_RAND_RESET_W(288, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i);
    VL_RAND_RESET_W(288, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i);
    VL_RAND_RESET_W(288, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i);
    VL_RAND_RESET_W(288, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i);
    VL_RAND_RESET_W(288, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__sbr_port_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__sbr_port_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__sbr_port_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h98646f67__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h057117e8__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_id_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_opc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_error = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootaddr__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_fetchen__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_corestatus__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootmode__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_sram_dly__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootaddr__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootaddr__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_fetchen__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_fetchen__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_corestatus__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_corestatus__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootmode__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootmode__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_sram_dly__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_sram_dly__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_id_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_opc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__out1_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__out2_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__rts_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__dtr_no = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBRRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIERWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCRWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSRRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSRRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXFIFOReset = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_TXFIFOReset = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_DMAMode = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_DR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_OE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_PE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_BI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FIFOERR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCTSn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDSRn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDCDn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRIn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBaudtick16x = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBAUDOUTN = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOClear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFull = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOD = VL_RAND_RESET_I(11);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ = VL_RAND_RESET_I(11);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOTrigger = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOPE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOBI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXPE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFERE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iPERE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBIRE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFECounter = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFEIncrement = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFEDecrement = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTimeoutCount = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCharTimeout = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRInterrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRTS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__rx_State = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_SIN__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_CTS__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_DSR__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_DCD__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_RI__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_CTS__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_DSR__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_DCD__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_RI__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iMSRInterrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iIIR = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC_THRE_ED__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_PEDET__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_FEDET__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BIDET__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_CTS__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DSR__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_RI__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DCD__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BG16__DOT__iCounter = VL_RAND_RESET_I(16);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BG2__DOT__iQ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BG2__DOT__iCounter = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RCLK__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__init = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iUSAGE = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFULL = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iWRAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iRDAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__init = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFIFOMem[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iTx2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParity = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParityReceived = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(160, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__31__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__30__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__29__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__28__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__27__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__26__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__25__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__24__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__23__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__22__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__21__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__20__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__19__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__18__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__17__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__16__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__15__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__14__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__13__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__12__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__11__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__10__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__9__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__8__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__5__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__31__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__30__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__29__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__28__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__27__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__26__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__25__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__24__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__23__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__22__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__21__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__20__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__19__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__18__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__17__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__16__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__15__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__14__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__13__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__12__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__11__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__10__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__9__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__8__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__5__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(224, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q = VL_RAND_RESET_I(12);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__id_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_read_request = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_write_request = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_wen = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk3 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge_del = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_counter_val_lo = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_counter_val_hi = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_clear_reset_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_clear_reset_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__CS = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__NS = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__id_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__r_addr_q = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__init_val[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__i_tc_sram__DOT____Vlvbound_h4dcffa78__0 = VL_RAND_RESET_I(9);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__id_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__r_addr_q = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__init_val[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT__genblk2__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__i_tc_sram__DOT____Vlvbound_h4dcffa78__0 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(78, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(148, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_hdc205493__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h5cdf5202__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__rsp_data = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__obi_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__word_addr_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_rom__DOT__id_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0 = VL_RAND_RESET_I(3);
    vlSelf->__VdfgRegularize_hd87f99a1_2_0 = VL_RAND_RESET_I(4);
    vlSelf->__VdfgRegularize_hd87f99a1_4_4 = VL_RAND_RESET_Q(35);
    vlSelf->__VdfgRegularize_hd87f99a1_4_5 = VL_RAND_RESET_Q(35);
    vlSelf->__VdfgRegularize_hd87f99a1_4_6 = VL_RAND_RESET_Q(35);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__52__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__52__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__check_write = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__idle_cycles = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__unnamedblk3__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_halt__7877__status = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__address = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__op = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__trial_idx = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__8671__wait_cycles = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__address = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__op = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles = 0;
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v0 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v0 = 0;
    vlSelf->__VdlySet__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(234, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp__0 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(234, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp__1 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__fetch_en_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__uart_tx_o__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 70; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
