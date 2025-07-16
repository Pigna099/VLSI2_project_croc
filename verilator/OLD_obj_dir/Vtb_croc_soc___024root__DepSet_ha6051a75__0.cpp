// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_initial__TOP(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__1(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__3(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__4(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__5(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__6(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__7(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__8(Vtb_croc_soc___024root* vlSelf);

void Vtb_croc_soc___024root___eval_initial(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_croc_soc___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__8(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__1__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__1__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                         nullptr, "../rtl/tb_croc_soc.sv", 
                                         115);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__1__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         30);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__1__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__reset_master__1__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         35);
    vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         42);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__soft_reset__8__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         46);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__1(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
    tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite;
    __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 0;
    std::string __Vtemp_3;
    // Body
    co_await vlSelfRef.__VtrigSched_hae0d1e8b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.fetch_en_i)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         371);
    vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.clear();
    while (1U) {
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 0;
        co_await vlSelfRef.__VtrigSched_ha7b28ad8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_croc_soc.uart_tx_o)", 
                                                             "../rtl/tb_croc_soc.sv", 
                                                             332);
        vlSelfRef.tb_croc_soc__DOT__uart_reading_byte = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3d0900ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             334);
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xfeU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | (IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xfdU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 1U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xfbU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 2U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xf7U & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 3U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xefU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 4U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xdfU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 5U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0xbfU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 6U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             337);
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite 
            = ((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite)) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o) 
                  << 7U));
        __Vtask_tb_croc_soc__DOT__uart_read_byte__15__unnamedblk4__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                             nullptr, 
                                             "../rtl/tb_croc_soc.sv", 
                                             347);
        vlSelfRef.tb_croc_soc__DOT__uart_reading_byte = 0U;
        vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__bite 
            = __Vtask_tb_croc_soc__DOT__uart_read_byte__15__bite;
        if (((0xaU == (IData)(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__bite)) 
             | VL_LTS_III(32, 0x50U, vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.size()))) {
            if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.size())))) {
                vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str = 
                    std::string{};
                tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
                while (VL_LTS_III(32, tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i, vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.size())) {
                    vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str 
                        = VL_CONCATN_NNN(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str, 
                                         VL_CVT_PACK_STR_NI(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.at(tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)));
                    tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                VL_WRITEF_NX("@%t | [UART] %@\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,-1,&(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__unnamedblk8__DOT__uart_str));
                Verilated::runFlushCallbacks();
                vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.push_back(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__bite);
                __Vtemp_3 = VL_TO_STRING(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf);
                VL_WRITEF_NX("@%t | [UART] raw: %@\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,-1,&(__Vtemp_3));
                Verilated::runFlushCallbacks();
            } else {
                VL_WRITEF_NX("@%t | [UART] ???\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
                Verilated::runFlushCallbacks();
            }
            vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.clear();
        } else {
            vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.push_back(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__bite);
        }
    }
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__0(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__1(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__2(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__3(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__4(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__5(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__6(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__7(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__8(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__9(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__10(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__11(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__12(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__13(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__14(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__15(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__16(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__17(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__18(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__19(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__20(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__21(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__22(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__23(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__24(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__25(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__26(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__27(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__28(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__29(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__30(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__31(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__32(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__33(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__34(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__35(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__36(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__37(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__38(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__39(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__40(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__41(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__42(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__43(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__44(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__45(Vtb_croc_soc___024root* vlSelf);
VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__46(Vtb_croc_soc___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__0(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__1(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__2(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__3(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__4(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__5(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__6(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__7(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__8(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__9(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__10(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__11(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__12(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__13(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__14(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__15(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__16(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__17(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__18(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__19(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__20(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__21(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__22(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__23(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__24(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__25(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__26(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__27(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__28(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__29(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__30(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__31(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__32(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__33(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__34(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__35(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__36(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__37(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__38(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__39(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__40(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__41(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__42(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__43(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__44(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__45(vlSelf);
    co_await Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__46(vlSelf);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data_out = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address = 0x10U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data_out = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data_out = 0ULL;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op = VL_RAND_RESET_I(2);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op = 0U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx = 0U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles = 8U;
    if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
            = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
            = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
               >> 0x1fU);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0x20U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode = 0x10U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode))) {
                goto __Vlabel260;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode;
            __Vlabel260: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
            [0x1fU];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0x20U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out = 0ULL;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
        = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address)))) 
                   << 0x22U));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode))) {
            goto __Vlabel261;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode;
        __Vlabel261: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
        = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address)))) 
           << 0x22U);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last = 1U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata[__Vilp2] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0x29U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x28U)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [1U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 1U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [2U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 2U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [3U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 3U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [4U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 4U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [5U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 5U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [6U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 6U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [7U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 7U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [8U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 8U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [9U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 9U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xaU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xaU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xbU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xbU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xcU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xcU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xdU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xdU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xeU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xeU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xfU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xfU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x10U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x10U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x11U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x11U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x12U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x12U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x13U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x13U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x14U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x14U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x15U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x15U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x16U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x16U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x17U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x17U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x18U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x18U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x19U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x19U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1aU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1aU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1bU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1bU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1cU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1cU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1dU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1dU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1eU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1eU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1fU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1fU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x20U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x20U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x21U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x21U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x22U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x22U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x23U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x23U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x24U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x24U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x25U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x25U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x26U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x26U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x27U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x27U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x28U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
        = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x28U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op 
        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data 
        = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
                   >> 2U));
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles 
        = VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val = 0;
    // Body
    while ((3U == (IData)(vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op))) {
        if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
                = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 1U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 3U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 4U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 5U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 5U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 6U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 6U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 7U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 7U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 8U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 8U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 9U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 9U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0xaU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xaU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0xbU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xbU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0xcU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xcU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0xdU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xdU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0xeU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xeU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0xfU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0xfU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x10U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x10U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x11U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x11U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x12U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x12U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x13U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x13U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x14U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x14U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x15U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x15U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x16U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x16U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x17U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x17U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x18U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x18U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x19U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x19U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x1aU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1aU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x1bU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1bU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x1cU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1cU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x1dU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1dU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x1eU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> 0x1eU));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x1fU;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
                = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                   >> 0x1fU);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode = 0x10U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 0;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode))) {
                    goto __Vlabel262;
                }
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode) 
                             >> 1U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 2U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode) 
                             >> 2U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 3U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode) 
                             >> 3U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 4U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                    = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 0;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 2U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 3U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 4U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata
                    [4U];
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last;
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 5U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode;
                __Vlabel262: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 5U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 6U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 7U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 8U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 9U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0xaU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0xbU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0xcU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0xdU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0xeU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0xfU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x10U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x11U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x12U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x13U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x14U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x15U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x16U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x17U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x18U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x19U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x1aU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x1bU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x1cU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x1dU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x1eU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x1fU;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
                [0x1fU];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0x20U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val;
                co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address 
            = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address)))) 
                       << 0x22U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode = 0x11U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode))) {
                goto __Vlabel263;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode;
            __Vlabel263: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address)))) 
               << 0x22U);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 2U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 3U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 4U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 5U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 6U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 7U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 8U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 9U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xaU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xbU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xcU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xdU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xeU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0xfU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x10U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x11U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x12U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x13U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x14U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x15U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x16U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x18U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x19U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1aU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1bU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1cU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1dU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1eU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x1fU)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x20U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x21U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x22U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x23U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x24U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x25U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x26U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x27U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                             >> 0x28U)));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [1U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [2U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [3U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [4U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [5U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [6U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [7U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [8U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [9U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0xaU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0xbU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0xcU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0xdU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0xeU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0xfU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x10U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x11U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x12U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x13U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x14U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x15U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x16U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x17U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x18U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x19U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x1aU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x1bU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x1cU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x1dU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x1eU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x1fU];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x20U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x20U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x20U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x21U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x21U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x21U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x22U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x22U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x22U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x23U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x23U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x23U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x24U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x24U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x24U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x25U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x25U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x25U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x26U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x26U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x26U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x27U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x27U];
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x27U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x28U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
            [0x28U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[0x28U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0x29U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x1fU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x20U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x20U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x20U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x21U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x21U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x21U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x22U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x22U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x23U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x23U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x23U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x24U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x24U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x24U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x25U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x25U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x25U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x26U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x26U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x26U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x27U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x27U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x27U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x28U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
            [0x28U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
            = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
               | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
                  << 0x28U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0x29U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
                       >> 2U));
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data;
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op;
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles);
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx);
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data;
}
