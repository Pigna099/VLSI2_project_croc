// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__46(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__46\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("@%t | [JTAG] Simulation finished: return code 0x%0x\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code);
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("../rtl/tb_croc_soc.sv", 298, "");
    vlSelfRef.tb_croc_soc__DOT__tb_data = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code;
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                         "../rtl/tb_croc_soc.sv", 
                                                         477);
    VL_FINISH_MT("../rtl/tb_croc_soc.sv", 481, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_croc_soc___024root___eval_triggers__act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_triggers__act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setWord(0U, (((QData)((IData)(
                                                            ((((((((IData)(vlSelfRef.tb_croc_soc__DOT__fetch_en_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__fetch_en_i__0))) 
                                                                  << 0x1fU) 
                                                                 | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                    << 0x1eU)) 
                                                                | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN__0)) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit__0)) 
                                                                      << 0x1cU))) 
                                                               | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish__0)) 
                                                                    << 0x1bU) 
                                                                   | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep__0)) 
                                                                      << 0x1aU)) 
                                                                  | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount__0)) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ__0)) 
                                                                        << 0x18U)))) 
                                                              | ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState__0)) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT__0)) 
                                                                      << 0x16U)) 
                                                                  | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart__0)) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR__0)) 
                                                                        << 0x14U))) 
                                                                 | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS__0)) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB__0)) 
                                                                        << 0x12U)) 
                                                                    | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP__0)) 
                                                                        << 0x11U) 
                                                                       | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN__0)) 
                                                                          << 0x10U))))) 
                                                             | (((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS__0)) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity__0)) 
                                                                      << 0xeU)) 
                                                                  | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState__0)) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR__0)) 
                                                                        << 0xcU))) 
                                                                 | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR__0)) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR__0)) 
                                                                        << 0xaU)) 
                                                                    | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR__0)) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR__0)) 
                                                                          << 8U)))) 
                                                                | ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB__0)) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR__0)) 
                                                                        << 6U)) 
                                                                    | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR__0)) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER__0)) 
                                                                          << 4U))) 
                                                                   | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM__0)) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL__0)) 
                                                                          << 2U)) 
                                                                      | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR__0)) 
                                                                          << 1U) 
                                                                         | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk)) 
                                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0))))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_ni__0)) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0))) 
                                                                     << 0x1eU)) 
                                                                 | ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no__0)) 
                                                                     << 0x1dU) 
                                                                    | (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__rst_n)) 
                                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0)) 
                                                                       << 0x1cU))) 
                                                                | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk__0))) 
                                                                     << 0x1bU) 
                                                                    | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1)) 
                                                                       << 0x1aU)) 
                                                                   | ((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1)) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__1)) 
                                                                         << 0x18U)))) 
                                                               | ((((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1)) 
                                                                       << 0x16U)) 
                                                                   | ((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1)) 
                                                                         << 0x14U))) 
                                                                  | (((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1)) 
                                                                         << 0x12U)) 
                                                                     | ((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1)) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__1)) 
                                                                           << 0x10U))))) 
                                                              | (((((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1)) 
                                                                       << 0xeU)) 
                                                                   | ((((IData)(vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)) 
                                                                       << 0xdU) 
                                                                      | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp 
                                                                          != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp__1) 
                                                                         << 0xcU))) 
                                                                  | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt__1)) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt__1)) 
                                                                         << 0xaU)) 
                                                                     | ((((IData)(
                                                                                (0U 
                                                                                != 
                                                                                ((((((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[0U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[0U]) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[1U])) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[2U])) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[3U])) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[4U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[4U])) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[5U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[5U])) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[6U])) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[7U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[7U])))) 
                                                                          << 1U) 
                                                                         | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1))) 
                                                                        << 8U))) 
                                                                 | ((((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1)) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1)) 
                                                                         << 6U)) 
                                                                     | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1)) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1)) 
                                                                           << 4U))) 
                                                                    | (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1)) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1)) 
                                                                           << 2U)) 
                                                                       | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1)) 
                                                                           << 1U) 
                                                                          | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__1)))))))))));
    vlSelfRef.__VactTriggered.setBit(0x40U, ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__uart_tx_o__0)));
    vlSelfRef.__VactTriggered.setBit(0x41U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[5U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[6U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[7U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[7U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux____PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 
        = vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0 
        = vlSelfRef.tb_croc_soc__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_ni__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__fetch_en_i__0 
        = vlSelfRef.tb_croc_soc__DOT__fetch_en_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__uart_tx_o__0 
        = vlSelfRef.tb_croc_soc__DOT__uart_tx_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xcU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xdU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xeU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xfU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x10U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x11U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x12U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x13U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x14U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x15U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x16U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x17U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x18U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x19U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x21U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x22U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x23U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x24U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x25U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x26U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x27U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x28U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x29U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x30U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x31U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x32U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x33U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x34U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x35U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x36U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x37U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x38U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x39U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3dU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_croc_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__7(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__8(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__10(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__11(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__12(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__3(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__3(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__4(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__4(Vtb_croc_soc_obi_mux__pi10* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__17(Vtb_croc_soc___024root* vlSelf);

void Vtb_croc_soc___024root___eval_act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x78000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x7800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x4000000048000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x60ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x18ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x4000000048000002ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x4000000048000080ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x180000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux));
    }
    if ((0x600000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux));
    }
    if ((0x6000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux));
    }
    if ((0x600ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux));
    }
    if ((0x1800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__0((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux));
    }
    if ((0x78ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x4000000048000006ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x4000000048000180ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x40600ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__1((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux));
    }
    if ((0x4001800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__1((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux));
    }
    if ((0x4000000048000186ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x70600ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__2((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x7001800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__2((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x7575e00ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__11(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
    }
    if ((0x7575e18ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x7575e01ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__13(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__1((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux));
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__1((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux));
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__1((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux));
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__3((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux));
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__3((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux));
    }
    if ((0x75f5e01ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__2((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0x7775e01ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__2((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x7577e01ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__2((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
        Vtb_croc_soc___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x7d75e01ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__4((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x1eU] = 1U;
        Vtb_croc_soc___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x757de01ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__4((&vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux));
        vlSelfRef.__Vm_traceActivity[0x1fU] = 1U;
        Vtb_croc_soc___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x757de19ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__17(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x20U] = 1U;
    }
}

extern const VlWide<12>/*383:0*/ Vtb_croc_soc__ConstPool__CONST_hc3736b80_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__11(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__11\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[0U] 
        = (IData)((0x1fffffffffULL & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[1U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
            << 5U) | (IData)(((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))) 
                              >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[2U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
            << 0xaU) | (((IData)((0x1fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
                         >> 0x1bU) | ((IData)(((0x1fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))) 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0xffff8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
               >> 0x16U) | ((IData)(((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))) 
                                     >> 0x20U)) << 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0x7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | ((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
              << 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[4U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
            >> 0x11U) | (((IData)((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
                          << 0x14U) | ((IData)(((0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[5U] 
        = (0x1ffffffU & (((0x7fffU & ((IData)((0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
                                      >> 0xcU)) | ((IData)(
                                                           ((0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)) 
                         | ((0xf8000U & ((IData)((0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[0U]))))) 
                                         >> 0xcU)) 
                            | ((IData)(((0x1fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[0U])))) 
                                        >> 0x20U)) 
                               << 0x14U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[0U] 
        = (IData)((0x1fffffffffULL & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                       << 0x1bU) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                       >> 5U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[1U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                         << 0x1bU) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                           >> 5U)))) 
            << 5U) | (IData)(((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                     >> 5U))) 
                              >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[2U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                         << 0x1bU) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                           >> 5U)))) 
            << 0xaU) | (((IData)((0x1fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                 >> 5U)))) 
                         >> 0x1bU) | ((IData)(((0x1fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                      >> 5U))) 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0xffff8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                            << 0x1bU) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                              >> 5U)))) 
               >> 0x16U) | ((IData)(((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                          << 0x1bU) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                            >> 5U))) 
                                     >> 0x20U)) << 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0x7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | ((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                           << 0x1bU) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                             >> 5U)))) 
              << 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[4U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                         << 0x1bU) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                           >> 5U)))) 
            >> 0x11U) | (((IData)((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                       << 0x1bU) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                       >> 5U)))) << 0x14U) 
                         | ((IData)(((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                          << 0x1bU) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                            >> 5U))) 
                                     >> 0x20U)) << 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[5U] 
        = (0x1ffffffU & (((0x7fffU & ((IData)((0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                     >> 5U)))) 
                                      >> 0xcU)) | ((IData)(
                                                           ((0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                                 << 0x1bU) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                                   >> 5U))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)) 
                         | ((0xf8000U & ((IData)((0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                                        >> 5U)))) 
                                         >> 0xcU)) 
                            | ((IData)(((0x1fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[1U])) 
                                               >> 5U))) 
                                        >> 0x20U)) 
                               << 0x14U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[0U] 
        = (IData)((0x1fffffffffULL & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                       << 0x11U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                       >> 0xfU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[1U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                           >> 0xfU)))) 
            << 5U) | (IData)(((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                     >> 0xfU))) 
                              >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[2U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                           >> 0xfU)))) 
            << 0xaU) | (((IData)((0x1fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                    << 0x11U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                 >> 0xfU)))) 
                         >> 0x1bU) | ((IData)(((0x1fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                      >> 0xfU))) 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0xffff8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                              >> 0xfU)))) 
               >> 0x16U) | ((IData)(((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                          << 0x11U) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                            >> 0xfU))) 
                                     >> 0x20U)) << 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0x7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | ((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                           << 0x11U) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                             >> 0xfU)))) 
              << 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[4U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                           >> 0xfU)))) 
            >> 0x11U) | (((IData)((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                       << 0x11U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                       >> 0xfU)))) 
                          << 0x14U) | ((IData)(((0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                                     << 0x11U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                       >> 0xfU))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[5U] 
        = (0x1ffffffU & (((0x7fffU & ((IData)((0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                     >> 0xfU)))) 
                                      >> 0xcU)) | ((IData)(
                                                           ((0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                                                 << 0x11U) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                                   >> 0xfU))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)) 
                         | ((0xf8000U & ((IData)((0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                                      << 0x11U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                        >> 0xfU)))) 
                                         >> 0xcU)) 
                            | ((IData)(((0x1fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[4U])) 
                                             << 0x11U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                               >> 0xfU))) 
                                        >> 0x20U)) 
                               << 0x14U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[0U] 
        = (IData)((0x1fffffffffULL & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                       << 0x16U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                       >> 0xaU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[1U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                           >> 0xaU)))) 
            << 5U) | (IData)(((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                     >> 0xaU))) 
                              >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[2U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                           >> 0xaU)))) 
            << 0xaU) | (((IData)((0x1fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                    << 0x16U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                 >> 0xaU)))) 
                         >> 0x1bU) | ((IData)(((0x1fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                      >> 0xaU))) 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0xffff8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                              >> 0xaU)))) 
               >> 0x16U) | ((IData)(((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                            >> 0xaU))) 
                                     >> 0x20U)) << 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[3U] 
        = ((0x7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[3U]) 
           | ((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                           << 0x16U) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                             >> 0xaU)))) 
              << 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[4U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                           >> 0xaU)))) 
            >> 0x11U) | (((IData)((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                       << 0x16U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                       >> 0xaU)))) 
                          << 0x14U) | ((IData)(((0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                     << 0x16U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                       >> 0xaU))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[5U] 
        = (0x1ffffffU & (((0x7fffU & ((IData)((0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                     >> 0xaU)))) 
                                      >> 0xcU)) | ((IData)(
                                                           ((0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                                 << 0x16U) 
                                                                | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                                   >> 0xaU))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)) 
                         | ((0xf8000U & ((IData)((0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                                      << 0x16U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                                        >> 0xaU)))) 
                                         >> 0xcU)) 
                            | ((IData)(((0x1fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[3U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.sbr_ports_rsp_o[2U])) 
                                               >> 0xaU))) 
                                        >> 0x20U)) 
                               << 0x14U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_down 
        = ((0xb8U >= (0xffU & ((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                     (7U & (((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 = ((0xb8U 
                                                 >= 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x25U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))))
                                                 ? 
                                                (0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                     (((IData)(0x24U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x25U) 
                                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x25U) 
                                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x25U) 
                                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x25U) 
                                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x25U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x25U) 
                                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))))))))
                                                 : 0ULL);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down 
        = ((0xb8U >= (0xffU & ((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[
                     (7U & (((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 = ((0xb8U 
                                                 >= 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x25U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))))
                                                 ? 
                                                (0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                     (((IData)(0x24U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x25U) 
                                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x25U) 
                                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x25U) 
                                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x25U) 
                                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x25U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x25U) 
                                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))))))))
                                                 : 0ULL);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down 
        = ((0xb8U >= (0xffU & ((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i[
                     (7U & (((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 = ((0xb8U 
                                                 >= 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x25U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))))
                                                 ? 
                                                (0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                     (((IData)(0x24U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x25U) 
                                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x25U) 
                                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x25U) 
                                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x25U) 
                                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x25U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x25U) 
                                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))))))))
                                                 : 0ULL);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down 
        = ((0xb8U >= (0xffU & ((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[
                     (7U & (((IData)(0x25U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__sbr_port_gnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[1U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[3U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[5U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[7U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[8U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[8U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[9U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xbU];
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__) 
                     == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_down))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__sbr_port_gnt 
                = ((0xb8U >= ((IData)(1U) + (0xffU 
                                             & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__))))) 
                   && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                             (((IData)(1U) + (0xffU 
                                              & ((IData)(0x25U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))) 
                              >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x25U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__))))))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 = 0U;
            if ((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x48U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__))))) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[
                        (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)) 
                                 >> 5U))]) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[0U] = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[1U] = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[2U] = 0U;
            if ((0x167U >= ((IData)(1U) + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))))) {
                VL_ASSIGNSEL_WW(360,71,((IData)(1U) 
                                        + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
            }
        }
    }
    if ((((0x167U >= (0x1ffU & ((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))) 
          && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[
                    (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x48U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))))) 
         & ((0xb8U >= ((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__))))) 
            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                      (((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__)))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__sbr_port_select__BRA__2__03a0__KET__;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__sbr_port_gnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = 0U;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                 >> 0x10U));
                    if ((1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 
                                       >> 1U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = 2U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x10U));
                if ((1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 
                                   >> 1U)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = 2U;
                }
            }
        }
    }
    if (((2U < (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = 4U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = 0U;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
                    if ((1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 
                                       >> 1U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down) {
                if ((1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 
                                   >> 1U)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
                }
            }
        }
    }
    if (((2U < (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
    }
    if (((0U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = 3U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[1U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[3U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[8U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xbU];
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o) 
                     == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__sbr_port_gnt 
                = ((0xb8U >= ((IData)(1U) + (0xffU 
                                             & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o))))) 
                   && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[
                             (((IData)(1U) + (0xffU 
                                              & ((IData)(0x25U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))) 
                              >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x25U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o))))))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 
                = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[0U]);
            if ((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x48U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o))))) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[
                        (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)) 
                                 >> 5U))]) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[0U] 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[1U] 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[0U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[1U] 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[2U] 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[1U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[2U] 
                = (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req[2U] 
                            >> 1U));
            if ((0x167U >= ((IData)(1U) + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))))) {
                VL_ASSIGNSEL_WW(360,71,((IData)(1U) 
                                        + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
            }
        }
    }
    if ((((0x167U >= (0x1ffU & ((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))) 
          && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[
                    (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x48U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))))) 
         & ((0xb8U >= ((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o))))) 
            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i[
                      (((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o)))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_up = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__));
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
            = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                       >> 3U));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ 
            = (1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                             >> 1U)));
    }
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__));
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
            = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                       >> 3U));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ 
            = (1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                             >> 1U)));
    }
    if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U];
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = (1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                             >> 1U)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                       >> 3U));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                      >> 0x22U))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                       >> 0x1bU))))
                        : (0xffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                            >> 0x1bU))))
                    : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                      >> 0x1aU))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                       >> 0x13U))))
                        : (0xffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                            >> 0x13U)))))
                : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                      >> 0x12U))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                       >> 0xbU))))
                        : (0xffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                            >> 0xbU))))
                    : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                      >> 0xaU))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                       >> 3U))))
                        : (0xffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                            >> 3U))))))
            : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                          >> 0xaU))))) 
                                << 0x10U) | ((0xff00U 
                                              & ((IData)(
                                                         (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                          >> 3U)) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U))))
                            : ((0xff00U & ((IData)(
                                                   (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                    >> 3U)) 
                                           << 8U)) 
                               | (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x10U))))
                        : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                          >> 0x22U))))) 
                                << 0x10U) | (0xffffU 
                                             & (IData)(
                                                       (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                        >> 0x13U))))
                            : (0xffffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                  >> 0x13U)))))
                    : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                          >> 0x1aU))))) 
                                << 0x10U) | (0xffffU 
                                             & (IData)(
                                                       (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                        >> 0xbU))))
                            : (0xffffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                  >> 0xbU))))
                        : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                          >> 0x12U))))) 
                                << 0x10U) | (0xffffU 
                                             & (IData)(
                                                       (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                        >> 3U))))
                            : (0xffffU & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                  >> 3U))))))
                : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? (((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                     >> 3U)) << 8U) 
                           | (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x10U))) : 
                       (((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                  >> 3U)) << 0x10U) 
                        | (0xffffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 8U)))) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? 
                                                   (((IData)(
                                                             (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                              >> 3U)) 
                                                     << 0x18U) 
                                                    | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q)
                                                    : (IData)(
                                                              (vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                                               >> 3U))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_q) 
                 | ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                             >> 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) 
            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[1U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[5U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[8U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
        = Vtb_croc_soc__ConstPool__CONST_hc3736b80_0[0xbU];
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o) 
                     == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt 
                = ((0xb8U >= ((IData)(1U) + (0xffU 
                                             & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o))))) 
                   && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[
                             (((IData)(1U) + (0xffU 
                                              & ((IData)(0x25U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))) 
                              >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x25U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o))))))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0 
                = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[0U]);
            if ((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x48U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o))))) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[
                        (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)) 
                                 >> 5U))]) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_haf9b6025__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[0U] 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[1U] 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[0U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[1U] 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[2U] 
                    << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[1U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0[2U] 
                = (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req[2U] 
                            >> 1U));
            if ((0x167U >= ((IData)(1U) + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))))) {
                VL_ASSIGNSEL_WW(360,71,((IData)(1U) 
                                        + (0x1ffU & 
                                           ((IData)(0x48U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_h310a5811__0);
            }
        }
    }
    if ((((0x167U >= (0x1ffU & ((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))) 
          && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[
                    (0xfU & (((IData)(0x48U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x48U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))))) 
         & ((0xb8U >= ((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o))))) 
            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i[
                      (((IData)(1U) + (0xffU & ((IData)(0x25U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o)))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_down))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_9 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    if ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_err 
                = (1U & (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                          & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)));
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                = (((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                             >> 3U)) << 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                  >> 0x10U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_err 
                = (1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                         | ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                                     >> 1U)) & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))))));
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw 
                = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw 
                = (1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid))));
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_err 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw 
            = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__wb_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu 
        = ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) 
              & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                 & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) 
                     | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) 
                        | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt)));
            } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = (1U & (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                         >> 1U)));
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                            >> 1U))));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q)));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = (1U & ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                      >> 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q)));
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_q)));
            }
        } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down) 
                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_5 
                                         >> 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))));
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update = 0U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update = 1U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__sbr_port_gnt) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update = 1U;
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multicycle_done 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                           | (0xe00U 
                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                    if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                    if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
                if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x1013U | ((0x1f00000U & 
                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))));
                }
                if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | (((0x1000U 
                                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 1U)) 
                                                           | (0xc00U 
                                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) 
                                                          | ((0x300U 
                                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                                   >> 5U)))))))));
            } else if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((0x80000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))));
            } else if ((0x800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 0xcU)))) 
                                          << 0x1aU) 
                                         | (0x2000000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU))) 
                                        | (0x1f00000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U))) 
                                       | ((0x38000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 8U)) 
                                          | (0x380U 
                                             & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | (((0x1f00000U 
                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x12U)) 
                                       | (0x38000U 
                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U))) 
                                      | (0x380U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))));
            }
            if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       (((0x18000000U 
                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x18U)) 
                                         | (0x4000000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U))) 
                                        | ((0x2000000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x17U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U))))));
                }
                if ((0U == ((0x20U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((0x80000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))))
                    : (0x13U | ((((- (IData)((1U & 
                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               >> 0xcU)))) 
                                  << 0x1aU) | ((0x2000000U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                | ((0xf8000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 8U)) 
                                   | (0xf80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((((0x4000000U & 
                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x2000000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU))) 
                                     | (0x700000U & 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 0x12U))) 
                                    | ((0x38000U & 
                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 8U)) | 
                                       ((0xc00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata) 
                                        | (0x200U & 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 3U))))));
            }
            if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x10413U | ((0x3c000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata 
                                    >> 5U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ 
        = (IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_9) 
                 | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((8U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((9U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0xaU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0xbU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0xcU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0xdU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0xeU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0xfU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x10U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x11U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x12U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x13U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x14U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x15U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x16U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x17U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x18U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7f7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x19U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7effffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x1aU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7dffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x1bU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7bffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x1cU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x77ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x1dU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x6fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x1eU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x5fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0 
        = ((0x1fU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_waddr_id)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu) 
              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h28dd929e__0) 
              << 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_err 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d) 
           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_branch = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_jump = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multicycle_done) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_branch 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_jump 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec;
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec)
                        ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                        : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec));
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_branch 
                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_jump = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec) 
               & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid)) 
                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle)))) 
           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_jump) 
              | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_multdiv) 
                 | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_alu) 
                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_branch)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__en_wb 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_instr_ret_wb 
        = (((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ebrk_insn) 
                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ecall_insn_dec))) 
            & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
               & ((~ ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__dret_insn_dec))) 
                  & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id)) 
                     & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err)))))) 
           & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_err) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid))) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__en_wb)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op_en 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__en_wb)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wr) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op_en)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__csr_pipe_flush = 0U;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op_en) 
         & ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op)) 
            | (2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op))))) {
        if (((((0x300U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                           >> 0x14U)) | (0x304U == 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                          >> 0x14U))) 
              | (0x747U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                            >> 0x14U))) | (0x1dU == 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                            >> 0x19U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op_en) 
                & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op)))) {
        if (((((0x7b0U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                           >> 0x14U)) | (0x7b1U == 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                          >> 0x14U))) 
              | (0x7b2U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                            >> 0x14U))) | (0x7b3U == 
                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id 
                                            >> 0x14U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mie_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_we_int) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_0 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
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
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x20U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
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
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
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
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mscratch_en = 1U;
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
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
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
        if ((0x800U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
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
                                    if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    }
                                }
                            }
                        }
                        if ((0x80U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr)))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_0 = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
            | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
               | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_err)))) 
           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__csr_pipe_flush) 
                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_1 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_0));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__retain_id) 
                     | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall))) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_valid_clear)) 
           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_q) 
              | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_raw))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__14(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__14\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.mgr_port_req_o[0U] 
                 & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0 
            = (7U & (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux.mgr_port_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__15(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__15\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx = 0U;
    if (((0x20000000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[2U] 
                           << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                        >> 0xaU))) 
         & (0x20001000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[2U] 
                            << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx) 
                     == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__sbr_port_gnt 
                = ((0x4dU >= ((IData)(1U) + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx))))) 
                   && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[
                             (((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))) 
                              >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx))))))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_hdc205493__0 
                = (1U & vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[0U]);
            if ((0x93U >= (0xffU & ((IData)(0x4aU) 
                                    * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[(7U 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx))))) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                        (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)) 
                               >> 5U))]) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_hdc205493__0) 
                                            << (0x1fU 
                                                & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h5cdf5202__0[0U] 
                = ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[1U] 
                    << 0x1fU) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[0U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h5cdf5202__0[1U] 
                = ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[2U] 
                    << 0x1fU) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h5cdf5202__0[2U] 
                = (0x1ffU & (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux.mgr_port_req_o[2U] 
                             >> 1U));
            if ((0x93U >= ((IData)(1U) + (0xffU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))))) {
                VL_ASSIGNSEL_WW(148,73,((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h5cdf5202__0);
            }
        }
    }
    if ((((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))) 
          && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))))) 
         & ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx))))) 
            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[
                      (((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx)))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp 
        = ((0x7ffffffffdULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_rom_obi_rsp) 
           | ((QData)((IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xaU)))) << 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0 
            = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

extern const VlWide<14>/*447:0*/ Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_croc_soc__ConstPool__TABLE_h96a345cc_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_croc_soc__ConstPool__TABLE_h5e2dec9c_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtb_croc_soc__ConstPool__TABLE_h6e1fdae4_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__16(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__16\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_15;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_15 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 = 0;
    CData/*3:0*/ __VdfgRegularize_hd87f99a1_2_2;
    __VdfgRegularize_hd87f99a1_2_2 = 0;
    CData/*2:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if (((0x300a000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x300b000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    if (((0x3005000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3006000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    if (((0x300a000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x300b000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
    }
    if (((0x3005000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3006000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
    }
    if (((0x3002000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3003000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    if (((0x300a000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x300b000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    }
    if (((0x3005000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3006000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    }
    if (((0x3002000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3003000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    }
    if (((0x3000000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3001000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 0U;
    if (((0x300a000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x300b000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 5U;
    }
    if (((0x3005000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3006000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 4U;
    }
    if (((0x3002000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3003000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 3U;
    }
    if (((0x3000000U <= ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                          << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                       >> 0xaU))) & 
         (0x3001000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                         << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                      >> 0xaU))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 2U;
    }
    if ((0x40000U > ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                      << 0x16U) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                   >> 0xaU)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (0x10U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[7U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[8U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[9U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[0xbU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[0xcU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
        = Vtb_croc_soc__ConstPool__CONST_h8aaf1534_0[0xdU];
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx) 
                     == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt 
                = ((0xe9U >= ((IData)(1U) + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx))))) 
                   && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[
                             (((IData)(1U) + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))) 
                              >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx))))))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h98646f67__0 
                = (1U & vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[0U]);
            if ((0x1bbU >= (0x1ffU & ((IData)(0x4aU) 
                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx))))) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                        (0xfU & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)) 
                                 >> 5U))]) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h98646f67__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x4aU) 
                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h057117e8__0[0U] 
                = ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                    << 0x1fU) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[0U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h057117e8__0[1U] 
                = ((vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                    << 0x1fU) | (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[1U] 
                                 >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h057117e8__0[2U] 
                = (0x1ffU & (vlSymsp->TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux.mgr_port_req_o[2U] 
                             >> 1U));
            if ((0x1bbU >= ((IData)(1U) + (0x1ffU & 
                                           ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))))) {
                VL_ASSIGNSEL_WW(444,73,((IData)(1U) 
                                        + (0x1ffU & 
                                           ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h057117e8__0);
            }
        }
    }
    if ((((0x1bbU >= (0x1ffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))) 
          && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (0xfU & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))))) 
         & ((0xe9U >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx))))) 
            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[
                      (((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx)))))))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_d = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_d = 0U;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_d = 0U;
        if ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U])) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_d = 1U;
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi_reg;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo_reg;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
    if ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U])) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d 
            = (0x1fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                         << 9U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                   >> 0x17U)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_hi = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_lo = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_valid = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
        if ((0x80000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
            if ((0x100U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x14U))) {
                if ((0x108U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U))) {
                    if ((0x110U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U))) {
                        if ((0x118U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                        >> 0x14U))) {
                            if (((0x380U <= (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                             >> 0x14U)) 
                                 && (0x387U >= (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                >> 0x14U)))) {
                                if ((0U == ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                             >> 0x16U) 
                                            - (IData)(0xe0U)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
                                    if ((0x8000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffffffff00ULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | (IData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                                     >> 0xfU)))));
                                    }
                                    if ((0x10000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffffff00ffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                                      >> 0x17U)))) 
                                                  << 8U));
                                    }
                                    if ((0x20000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffff00ffffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                       << 1U) 
                                                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                                         >> 0x1fU))))) 
                                                  << 0x10U));
                                    }
                                    if ((0x40000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffff00ffffffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                      >> 7U)))) 
                                                  << 0x18U));
                                    }
                                }
                                if ((1U == ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                             >> 0x16U) 
                                            - (IData)(0xe0U)))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
                                    if ((0x8000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffff00ffffffffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                                      >> 0xfU)))) 
                                                  << 0x20U));
                                    }
                                    if ((0x10000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffff00ffffffffffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                                      >> 0x17U)))) 
                                                  << 0x28U));
                                    }
                                    if ((0x20000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xff00ffffffffffffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                       << 1U) 
                                                                      | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                                         >> 0x1fU))))) 
                                                  << 0x30U));
                                    }
                                    if ((0x40000U & 
                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = ((0xffffffffffffffULL 
                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                      >> 7U)))) 
                                                  << 0x38U));
                                    }
                                }
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 2U;
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_valid = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x100U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x14U))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                   >> 0xfU)))));
            } else if ((0x108U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                   >> 0x14U))) {
                if ((0x110U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                        = ((~ ((IData)(1U) << (1U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                >> 0xfU)))) 
                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                }
            }
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d 
            = (0x1fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_hi = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_lo = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_valid = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_mem_csrs 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                  >> 0x1eU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp 
                            >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    if ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U])) {
        if ((1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                      >> 0x13U)))) {
            if ((0x300U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x14U))) {
                if ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq) 
                           >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xfU))))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x5080006fULL;
                }
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((IData)((0x40000U == (0xff060000U 
                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)))
                            ? 0x600006fULL : 0x380006fULL);
                }
            } else if (((0x380U <= (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U)) && (0x387U 
                                                   >= 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                    >> 0x14U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,32,32, 
                                                             (1U 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, 
                                                                                (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U)), 1U)))), 5U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_SHIFTL_III(6,32,32, 
                                                                      (1U 
                                                                       & VL_SHIFTL_III(9,9,32, 
                                                                                (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                                >> 0x17U)) 
                                                                                - (IData)(0x70U)), 1U)), 5U))))));
            } else if (((0x360U <= (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U)) && (0x37fU 
                                                   >= 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                    >> 0x14U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                        (((IData)(0x3fU) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                   << 9U) 
                                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                     >> 0x17U)) 
                                                                 - (IData)(4U))), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                          (7U 
                                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                << 9U) 
                                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                  >> 0x17U)) 
                                                              - (IData)(4U))), 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                               << 9U) 
                                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                 >> 0x17U)) 
                                                             - (IData)(4U))), 6U))))) 
                       | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                               << 9U) 
                                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                 >> 0x17U)) 
                                                             - (IData)(4U))), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0xffU 
                                                         & VL_SHIFTL_III(8,32,32, 
                                                                         (7U 
                                                                          & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                               << 9U) 
                                                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                                >> 0x17U)) 
                                                                             - (IData)(4U))), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                   << 9U) 
                                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                     >> 0x17U)) 
                                                                 - (IData)(4U))), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                             (7U & 
                                              (VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                   << 9U) 
                                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                     >> 0x17U)) 
                                                                 - (IData)(4U))), 6U) 
                                               >> 5U))])) 
                             >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                       (7U 
                                                        & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                             << 9U) 
                                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                               >> 0x17U)) 
                                                           - (IData)(4U))), 6U)))));
            } else if (((0x338U <= (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U)) && (0x35fU 
                                                   >= 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                    >> 0x14U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                   << 9U) 
                                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                     >> 0x17U)) 
                                                                 - (IData)(7U))), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (7U 
                                                           & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                << 9U) 
                                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                  >> 0x17U)) 
                                                              - (IData)(7U))), 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(9,32,32, 
                                                         (7U 
                                                          & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                               << 9U) 
                                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                 >> 0x17U)) 
                                                             - (IData)(7U))), 6U))))) 
                       | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                         (7U 
                                                          & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                               << 9U) 
                                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                 >> 0x17U)) 
                                                             - (IData)(7U))), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & VL_SHIFTL_III(9,32,32, 
                                                                         (7U 
                                                                          & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                               << 9U) 
                                                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                                >> 0x17U)) 
                                                                             - (IData)(7U))), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                   << 9U) 
                                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                     >> 0x17U)) 
                                                                 - (IData)(7U))), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                                       >> 0x17U)) 
                                                                   - (IData)(7U))), 6U) 
                                                 >> 5U))])) 
                             >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                       (7U 
                                                        & (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                             << 9U) 
                                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                               >> 0x17U)) 
                                                           - (IData)(7U))), 6U)))));
            } else if (((0x400U <= (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U)) && (0x7ffU 
                                                   >= 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                    >> 0x14U)))) {
                if ((0U == (0xfffU & ((0xff8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                 >> 0x14U)) 
                                      - (IData)(0x400U))))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                        = (((~ (0xffULL << (0x3fU & 
                                            VL_SHIFTL_III(6,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                              >> 0x10U)), 3U)))) 
                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata) 
                           | ((QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go)))) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                        (1U 
                                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                            >> 0x10U)), 3U))));
                }
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata;
            }
        }
        if ((0x80000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
            if ((0x100U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x14U))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                   >> 0xfU)))));
            }
            if ((0x100U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x14U))) {
                if ((0x108U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = 1U;
                }
                if ((0x108U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U))) {
                    if ((0x110U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U))) {
                        if ((0x118U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                        >> 0x14U))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_lo = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_hi = 0U;
    __Vtableidx33 = ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                            >> 0x10U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__CS));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o 
        = Vtb_croc_soc__ConstPool__TABLE_h96a345cc_0
        [__Vtableidx33];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o 
        = Vtb_croc_soc__ConstPool__TABLE_h5e2dec9c_0
        [__Vtableidx33];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__NS 
        = Vtb_croc_soc__ConstPool__TABLE_h6e1fdae4_0
        [__Vtableidx33];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_we 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                  >> 0x1dU) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                               >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit 
        = ((((0x10U == (0x1fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                  << 2U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                            >> 0x1eU)))) 
             << 4U) | (((0xcU == (0x1fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                            << 2U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                              >> 0x1eU)))) 
                        << 3U) | ((8U == (0x1fU & (
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                                    << 2U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                      >> 0x1eU)))) 
                                  << 2U))) | (((4U 
                                                == 
                                                (0x1fU 
                                                 & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                       >> 0x1eU)))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                                      << 2U) 
                                                     | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                        >> 0x1eU))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
        = (IData)((((QData)((IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                           >> 7U)))) 
                    << 0x24U) | (((QData)((IData)((
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                    << 0x1dU) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[7U] 
                                                      >> 3U)))) 
                                  << 4U) | (QData)((IData)(
                                                           (0xfU 
                                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                               >> 3U)))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
        = ((0xffffffe0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]) 
           | (IData)(((((QData)((IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                               >> 7U)))) 
                        << 0x24U) | (((QData)((IData)(
                                                      ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                        << 0x1dU) 
                                                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[7U] 
                                                          >> 3U)))) 
                                      << 4U) | (QData)((IData)(
                                                               (0xfU 
                                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                                   >> 3U)))))) 
                      >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
        = ((0x3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                          << 0x18U) 
                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                            >> 8U)))) 
                        << 4U) | (QData)((IData)((4U 
                                                  | (1U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                                        >> 0x1eU))))))) 
              << 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[2U] 
        = (0x3ffU & (((IData)((((QData)((IData)(((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                    >> 8U)))) 
                                << 4U) | (QData)((IData)(
                                                         (4U 
                                                          | (1U 
                                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                                                >> 0x1eU))))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                                                << 0x18U) 
                                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                                  >> 8U)))) 
                                              << 4U) 
                                             | (QData)((IData)(
                                                               (4U 
                                                                | (1U 
                                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                                                      >> 0x1eU)))))) 
                                            >> 0x20U)) 
                                   << 6U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
        = ((((- (IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                               >> 0x10U)))) << 0x18U) 
            | (0xff0000U & ((- (IData)((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                              >> 0xfU)))) 
                            << 0x10U))) | ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                                              >> 0xeU)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                                               >> 0xdU)))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_write_request 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                  >> 8U) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                            >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                 >> 0x10U))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3c371931__0) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
        }
    } else {
        if ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
              & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                 >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x10U)))) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3c371931__0)) 
                   & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq) 
                       >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                 >> 0x10U))) & ((~ 
                                                 ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq) 
                                                  >> 
                                                  (1U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                      >> 0x10U)))) 
                                                & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                                   >> 
                                                   (1U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                       >> 0x10U)))))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
        }
    }
    if ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0 
            = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT____Vlvbound_hfe5b4724__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                        >> 0x10U)))) 
                          & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                        >> 0x10U)))) 
                          & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror = 4U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror = 2U;
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror = 3U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_lo = 0U;
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                >> 0x12U) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                             >> 0x1bU)))) {
        if (((((((((0U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                     << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU)))) 
                   | (4U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                       << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                  | (8U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                      << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) 
                 | (0xcU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                       << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                | (0x10U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                       << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
               | (0x14U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                      << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) 
              | (0x18U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                     << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) 
             | (0x1cU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                    << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                              >> 0x1cU)))))) {
            if ((0U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                  << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                            >> 0x1cU))))) {
                if ((4U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                      << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) {
                    if ((8U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                          << 4U) | 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                          >> 0x1cU))))) {
                        if ((0xcU != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) {
                            if ((0x10U != (0x3fU & 
                                           ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                             << 4U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) {
                                if ((0x14U == (0x3fU 
                                               & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                   << 4U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                     >> 0x1cU))))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi 
                                        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                            << 9U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                                              >> 0x17U));
                                }
                            }
                            if ((0x10U == (0x3fU & 
                                           ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                             << 4U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo 
                                    = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                        << 9U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                                                  >> 0x17U));
                            }
                        }
                        if ((0xcU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) {
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_hi = 1U;
                        }
                    }
                    if ((8U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                          << 4U) | 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                          >> 0x1cU))))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_lo = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((((((((0U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                              << 4U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU)))) 
                            | (4U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) 
                           | (8U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                               << 4U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                          | (0xcU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) 
                         | (0x10U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) 
                        | (0x14U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                               << 4U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                       | (0x18U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                              << 4U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) 
                      | (0x1cU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                             << 4U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU)))))))) {
            if ((0x20U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                     << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_lo = 1U;
            }
        }
    }
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                >> 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_lo)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_lo = 1U;
    }
    if (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
          >> 6U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_lo = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo = 0U;
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                >> 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_lo)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo = 1U;
    } else if ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                >> 0x1fU)) {
        if ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
               >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo)) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo = 1U;
        }
    } else if (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                 >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_hi = 0U;
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                >> 0x12U) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                             >> 0x1bU)))) {
        if ((1U & (~ ((((((((0U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                              << 4U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU)))) 
                            | (4U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) 
                           | (8U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                               << 4U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                          | (0xcU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) 
                         | (0x10U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                << 4U) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) 
                        | (0x14U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                               << 4U) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                       | (0x18U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                              << 4U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) 
                      | (0x1cU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                             << 4U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU)))))))) {
            if ((0x20U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                     << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) {
                if ((0x24U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                         << 4U) | (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                   >> 0x1cU))))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_hi = 1U;
                }
            }
        }
    }
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg 
                >> 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_hi)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_hi = 1U;
    }
    if (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg 
          >> 6U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_hi))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_hi = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi = 0U;
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg 
                >> 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_hi)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi = 1U;
    } else if ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                >> 0x1fU)) {
        if ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
               >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo)) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi = 1U;
        }
    } else if (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg 
                 >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next 
        = ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit))
            ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootaddr__q
            : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit))
                ? ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_fetchen__q))
                : ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit))
                    ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_corestatus__q
                    : ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit))
                        ? ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootmode__q))
                        : ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit))
                            ? ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_sram_dly__q))
                            : 0xffffffffU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_error 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_we) 
           & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
               & (0U != (0xfU & (~ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                     << 7U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                               >> 0x19U)))))) 
              | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
                   >> 1U) & (0U != (1U & (~ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                              << 7U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                >> 0x19U)))))) 
                 | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
                      >> 2U) & (0U != (0xfU & (~ ((
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                   << 7U) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                     >> 0x19U)))))) 
                    | ((IData)((0U != (0x18U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit)))) 
                       & (0U != (1U & (~ ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                           << 7U) | 
                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                           >> 0x19U))))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR 
        = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
                 >> 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_15 
        = (IData)((0x60U == (0x60U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_d = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_write_request) {
        if ((0U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                              >> 0x12U)))) {
            if ((0x80U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                     >> 0x12U)))) {
                if ((0x180U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                          >> 0x12U)))) {
                    if ((0x200U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                              >> 0x12U)))) {
                        if ((0x280U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                                  >> 0x12U)))) {
                            if ((0x380U != (0xffcU 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                               >> 0x12U)))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_d = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count_reg;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_lo) 
         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count = 0U;
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_lo) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count_reg);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count_reg;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_hi) 
         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_hi))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count = 0U;
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_hi) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count_reg);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count_reg;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_lo = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_hi = 0U;
    if ((1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                >> 0x12U) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                             >> 0x1bU)))) {
        if (((((((((0U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                     << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU)))) 
                   | (4U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                       << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                  | (8U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                      << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) 
                 | (0xcU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                       << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
                | (0x10U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                       << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                 >> 0x1cU))))) 
               | (0x14U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                      << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                >> 0x1cU))))) 
              | (0x18U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                     << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) 
             | (0x1cU == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                    << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                              >> 0x1cU)))))) {
            if ((0U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                  << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                            >> 0x1cU))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
                    = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                        << 9U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                                  >> 0x17U));
            } else if ((4U == (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                         << 4U) | (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                   >> 0x1cU))))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
                    = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                        << 9U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                                  >> 0x17U));
            } else if ((8U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                         << 4U) | (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                   >> 0x1cU))))) {
                if ((0xcU != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                        << 4U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                  >> 0x1cU))))) {
                    if ((0x10U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                             << 4U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) {
                        if ((0x14U != (0x3fU & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                                 << 4U) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                                   >> 0x1cU))))) {
                            if ((0x18U == (0x3fU & 
                                           ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xdU] 
                                             << 4U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                                               >> 0x1cU))))) {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_lo = 1U;
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_hi = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_lo) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
            = (1U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo);
    } else if ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg 
                >> 0x1fU)) {
        if ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
               >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo)) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
                = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo);
        }
    } else if (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
                 >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
            = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo);
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_hi) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
            = (1U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi);
    } else if ((((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg 
                     >> 0x1fU)) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
                                   >> 5U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
            = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi);
    } else if ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
                  >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo)) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
            = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi);
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi 
            = (0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi);
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_hi) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count 
            = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                << 9U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                          >> 0x17U));
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_hi) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count_reg);
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo 
            = (0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo);
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_lo) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count 
            = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xcU] 
                << 9U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xbU] 
                          >> 0x17U));
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__soc_ctrl_reg_rsp 
        = (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next)) 
            << 2U) | (QData)((IData)((1U | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_error) 
                                            << 1U)))));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_error)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_we));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRead 
        = ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
               >> 4U)) & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_15));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite 
        = ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_15) 
           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
              >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp = 0ULL;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_read_request) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err = 0U;
        if ((1U & (~ ((((((((0U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                    << 2U)) | (0x80U 
                                               == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                   << 2U))) 
                           | (0x100U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                         << 2U))) | 
                          (0x180U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                      << 2U))) | (0x200U 
                                                  == 
                                                  ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                   << 2U))) 
                        | (0x280U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                      << 2U))) | (0x300U 
                                                  == 
                                                  ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                   << 2U))) 
                      | (0x380U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                    << 2U)))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err = 1U;
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_rdata)) 
               << 7U) | ((QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__id_q) 
                                           << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err)))) 
                         << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp) 
           | (IData)((IData)(((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                     >> 7U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__valid_q)))));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 4U));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_write_request) {
        if ((0U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                              >> 0x12U)))) {
            if ((0x80U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                     >> 0x12U)))) {
                if ((0x180U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                          >> 0x12U)))) {
                    if ((0x200U == (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                              >> 0x12U)))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
                               & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                   << 0x13U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                                >> 0xdU)));
                    }
                }
            }
        }
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e73c8dd__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e94cac8__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70af801__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf70eb430__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hf7228bdb__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e650756__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h8add8f85__0) 
              << 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootaddr__DOT__wr_en 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
           & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_fetchen__DOT__wr_en 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
            >> 1U) & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_corestatus__DOT__wr_en 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
            >> 2U) & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootmode__DOT__wr_en 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
            >> 3U) & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_sram_dly__DOT__wr_en 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit) 
            >> 4U) & (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____VdfgRegularize_h1fcc718e_0_10));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSRRead 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRead) 
           & (5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSRRead 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRead) 
           & (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBRRead 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRead) 
           & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)) 
              & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCRWrite 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
           & (2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_3 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
           & (1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_2 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
           & (0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[0U] 
        = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U] 
        = ((0xffffff80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U]) 
           | (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp 
                      >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U] 
        = ((0xffffc07fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U]) 
           | (0xffffff80U & (0x100U | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rid_q) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rvalid_q) 
                                        << 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U] 
        = ((0x3fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U]) 
           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                ? (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                           >> 0x20U)) : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux)) 
              << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U] 
        = ((0xffffc000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U]) 
           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                ? (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                           >> 0x20U)) : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux)) 
              >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U] 
        = ((0xffe03fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U]) 
           | (0xffffc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_id_q) 
                              << 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_opc_q) 
                                            << 0x11U) 
                                           | ((0x8000U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                                  >> 5U)) 
                                              | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_valid_q) 
                                                 << 0xeU))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U] 
        = ((0x1fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U]) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q 
              << 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U] 
        = ((0xffe00000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U]) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q 
              >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U] 
        = ((0xf01fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U]) 
           | (0xffe00000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_id_q) 
                              << 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_opc_q) 
                                            << 0x18U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o) 
                                               << 0x16U) 
                                              | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q) 
                                                 << 0x15U))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U] 
        = ((0xfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U]) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q 
              << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[4U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q 
            >> 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp) 
                      << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[5U] 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp) 
            >> 4U) | ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U] 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U]) 
           | ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp 
                       >> 0x20U)) >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U] 
        = ((0xfffffc07U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U]) 
           | (0xfffffff8U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_id_o) 
                              << 7U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o) 
                                         << 4U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o) 
                                                   << 3U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U] 
        = ((0x3ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U]) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
              << 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[7U] 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o 
           >> 0x16U);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                    >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                    >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                    >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                    >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                    >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                    >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                    >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                    >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                    >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                    >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                    >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                    >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                    >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                    >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                    >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                    >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
              >> 0x1fU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                    >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                    >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                    >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                    >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                    >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                    >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                    >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                    >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                    >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                    >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                    >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                    >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                    >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__0__KET__ 
        = (1U & ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__31__KET__ 
        = (1U & ((0x2000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__30__KET__ 
        = (1U & ((0x40000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__29__KET__ 
        = (1U & ((0x800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__28__KET__ 
        = (1U & ((0x10U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__27__KET__ 
        = (1U & ((0x20000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__26__KET__ 
        = (1U & ((0x400000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__25__KET__ 
        = (1U & ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__24__KET__ 
        = (1U & ((0x100U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__23__KET__ 
        = (1U & ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__22__KET__ 
        = (1U & ((0x4000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__21__KET__ 
        = (1U & ((0x80000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__20__KET__ 
        = (1U & ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__19__KET__ 
        = (1U & ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__18__KET__ 
        = (1U & ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__17__KET__ 
        = (1U & ((0x800000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__16__KET__ 
        = (1U & ((0x10000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__15__KET__ 
        = (1U & ((0x200U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__14__KET__ 
        = (1U & ((4U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__13__KET__ 
        = (1U & ((0x8000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__12__KET__ 
        = (1U & ((0x100000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__11__KET__ 
        = (1U & ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__10__KET__ 
        = (1U & ((0x40U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__9__KET__ 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                  >> 0x1fU) ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__serial_q)) 
                               & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__i_sync__DOT__reg_q) 
                                  >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__i_sync__DOT__reg_q) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__8__KET__ 
        = (1U & ((0x1000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__7__KET__ 
        = (1U & ((0x20000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__6__KET__ 
        = (1U & ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__5__KET__ 
        = (1U & ((8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__4__KET__ 
        = (1U & ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__3__KET__ 
        = (1U & ((0x200000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__2__KET__ 
        = (1U & ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__1__KET__ 
        = (1U & ((0x80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])
                  ? ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__serial_q)) 
                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                        >> 1U)) : ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__i_sync__DOT__reg_q) 
                                       >> 1U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__serial_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_output 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_output 
        = (IData)((0x1800000U == (0x1800000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_output 
        = (IData)((0x30000U == (0x30000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_output 
        = (IData)((0x600U == (0x600U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_output 
        = (IData)((0xcU == (0xcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_output 
        = (IData)((0x18000000U == (0x18000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_output 
        = (IData)((0x300000U == (0x300000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_output 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_output 
        = (IData)((0xc0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_output 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 0x1fU) & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_output 
        = (IData)((0x3000000U == (0x3000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_output 
        = (IData)((0x60000U == (0x60000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_output 
        = (IData)((0xc00U == (0xc00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_output 
        = (IData)((0x18U == (0x18U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_output 
        = (IData)((0x30000000U == (0x30000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_output 
        = (IData)((0x600000U == (0x600000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_output 
        = (IData)((0xc000U == (0xc000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_output 
        = (IData)((0x180U == (0x180U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_output 
        = (IData)((3U == (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_output 
        = (IData)((0x6000000U == (0x6000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_output 
        = (IData)((0xc0000U == (0xc0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_output 
        = (IData)((0x1800U == (0x1800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_output 
        = (IData)((0x30U == (0x30U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_output 
        = (IData)((0x60000000U == (0x60000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_output 
        = (IData)((0xc00000U == (0xc00000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_output 
        = (IData)((0x18000U == (0x18000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_output 
        = (IData)((0x300U == (0x300U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_output 
        = (IData)((6U == (6U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_output 
        = (IData)((0xc000000U == (0xc000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_output 
        = (IData)((0x180000U == (0x180000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_output 
        = (IData)((0x3000U == (0x3000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_output 
        = (IData)((0x60U == (0x60U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_input 
        = (IData)((0x20U == (0x60U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_input 
        = (IData)((0x40000000U == (0xc0000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_input 
        = (IData)((0x800000U == (0x1800000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_input 
        = (IData)((0x10000U == (0x30000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_input 
        = (IData)((0x200U == (0x600U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_input 
        = (IData)((4U == (0xcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_input 
        = (IData)((0x8000000U == (0x18000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_input 
        = (IData)((0x100000U == (0x300000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_input 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_input 
        = (IData)((0x40U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_input 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 0x1fU) & (~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_input 
        = (IData)((0x1000000U == (0x3000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_input 
        = (IData)((0x20000U == (0x60000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_input 
        = (IData)((0x400U == (0xc00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_input 
        = (IData)((8U == (0x18U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_input 
        = (IData)((0x10000000U == (0x30000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_input 
        = (IData)((0x200000U == (0x600000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_input 
        = (IData)((0x4000U == (0xc000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_input 
        = (IData)((0x80U == (0x180U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_input 
        = (IData)((1U == (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_input 
        = (IData)((0x2000000U == (0x6000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_input 
        = (IData)((0x40000U == (0xc0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_input 
        = (IData)((0x800U == (0x1800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_input 
        = (IData)((0x10U == (0x30U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_input 
        = (IData)((0x20000000U == (0x60000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_input 
        = (IData)((0x400000U == (0xc00000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_input 
        = (IData)((0x8000U == (0x18000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_input 
        = (IData)((0x100U == (0x300U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_input 
        = (IData)((2U == (6U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_input 
        = (IData)((0x4000000U == (0xc000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_input 
        = (IData)((0x80000U == (0x180000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_input 
        = (IData)((0x1000U == (0x3000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U])));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIERWrite 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_3));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRWrite 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_2));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0x9fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
            >> 0x1cU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0x9fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (0xe0000000U & (0x20000000U | (0x40000000U 
                                                & ((~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                     >> 0x1dU)) 
                                                   << 0x1eU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0xfcffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
            >> 0x15U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0xfcffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (0xff000000U & (0x1000000U | (0x2000000U 
                                               & ((~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                    >> 0x16U)) 
                                                  << 0x19U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0xffe7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
            >> 0xeU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0xffe7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (0xfff80000U & (0x80000U | (0x100000U 
                                             & ((~ 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                  >> 0xfU)) 
                                                << 0x14U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0xffff3fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
            >> 7U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0xffff3fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (0xffffc000U & (0x4000U | (0x8000U 
                                            & ((~ (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                   >> 8U)) 
                                               << 0xfU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0xfffff9ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_output) 
         & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U])) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0xfffff9ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (0xfffffe00U & (0x200U | (0x400U & 
                                           ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                >> 1U)) 
                                            << 0xaU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0xffffffcfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
            >> 0x19U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0xffffffcfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (0xfffffff0U & (0x10U | (0x20U & (
                                                   (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                     >> 0x1aU)) 
                                                   << 5U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
            >> 0x12U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = (0x80000000U | (0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
            = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
               | (1U & (~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                           >> 0x13U))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0xf3ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
            >> 0xbU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = ((0xf3ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
               | (0xfc000000U & (0x4000000U | (0x8000000U 
                                               & ((~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                    >> 0xcU)) 
                                                  << 0x1bU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0xff9fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
            >> 4U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = ((0xff9fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
               | (0xffe00000U & (0x200000U | (0x400000U 
                                              & ((~ 
                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                   >> 5U)) 
                                                 << 0x16U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0xfffcffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 0x1dU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = ((0xfffcffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
               | (0xffff0000U & (0x10000U | (0x20000U 
                                             & ((~ 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                  >> 0x1eU)) 
                                                << 0x11U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0xffffe7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 0x16U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = ((0xffffe7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
               | (0xfffff800U & (0x800U | (0x1000U 
                                           & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                  >> 0x17U)) 
                                              << 0xcU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0xffffff3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 0xfU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = ((0xffffff3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
               | (0xffffffc0U & (0x40U | (0x80U & (
                                                   (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                     >> 0x10U)) 
                                                   << 7U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = (0xfffffff9U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 8U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
            = ((0xfffffff9U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
               | (0xfffffffeU & (2U | (4U & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                 >> 9U)) 
                                             << 2U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = (0xcfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
            >> 1U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
            = ((0xcfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
               | (0xf0000000U & (0x10000000U | (0x20000000U 
                                                & ((~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                     >> 2U)) 
                                                   << 0x1dU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = (0xfe7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
            >> 0x1aU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
            = ((0xfe7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
               | (0xff800000U & (0x800000U | (0x1000000U 
                                              & ((~ 
                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                   >> 0x1bU)) 
                                                 << 0x18U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = (0xfff3ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
            >> 0x13U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
            = ((0xfff3ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
               | (0xfffc0000U & (0x40000U | (0x80000U 
                                             & ((~ 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                  >> 0x14U)) 
                                                << 0x13U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = (0xffff9fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
            >> 0xcU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
            = ((0xffff9fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
               | (0xffffe000U & (0x2000U | (0x4000U 
                                            & ((~ (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                   >> 0xdU)) 
                                               << 0xeU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = (0xfffffcffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
            >> 5U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
            = ((0xfffffcffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
               | (0xffffff00U & (0x100U | (0x200U & 
                                           ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                >> 6U)) 
                                            << 9U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = (0xffffffe7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
            >> 0x1eU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
            = ((0xffffffe7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
               | (0xfffffff8U & (8U | (0x10U & ((~ 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                  >> 0x1fU)) 
                                                << 4U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0x3fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
            >> 0x17U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = ((0x3fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
               | (0xc0000000U & (0x40000000U | ((~ 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                  >> 0x18U)) 
                                                << 0x1fU))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0xf9ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
            >> 0x10U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = ((0xf9ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
               | (0xfe000000U & (0x2000000U | (0x4000000U 
                                               & ((~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                    >> 0x11U)) 
                                                  << 0x1aU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0xffcfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
            >> 9U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = ((0xffcfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
               | (0xfff00000U & (0x100000U | (0x200000U 
                                              & ((~ 
                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                   >> 0xaU)) 
                                                 << 0x15U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0xfffe7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
            >> 2U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = ((0xfffe7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
               | (0xffff8000U & (0x8000U | (0x10000U 
                                            & ((~ (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                   >> 3U)) 
                                               << 0x10U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0xfffff3ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
            >> 0x1bU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = ((0xfffff3ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
               | (0xfffffc00U & (0x400U | (0x800U & 
                                           ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                >> 0x1cU)) 
                                            << 0xbU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0xffffff9fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
            >> 0x14U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = ((0xffffff9fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
               | (0xffffffe0U & (0x20U | (0x40U & (
                                                   (~ 
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                     >> 0x15U)) 
                                                   << 6U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = (0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
            >> 0xdU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
            = (1U | ((0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
                     | (2U & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                  >> 0xeU)) << 1U))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = (0xe7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
            >> 6U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
            = ((0xe7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
               | (0xf8000000U & (0x8000000U | (0x10000000U 
                                               & ((~ 
                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                    >> 7U)) 
                                                  << 0x1cU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = (0xff3fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
            >> 0x1fU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
            = ((0xff3fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
               | (0xffc00000U & (0x400000U | (0x800000U 
                                              & ((~ 
                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U]) 
                                                 << 0x17U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = (0xfff9ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
            >> 0x18U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
            = ((0xfff9ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
               | (0xfffe0000U & (0x20000U | (0x40000U 
                                             & ((~ 
                                                 (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                                  >> 0x19U)) 
                                                << 0x12U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = (0xffffcfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
            >> 0x11U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
            = ((0xffffcfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
               | (0xfffff000U & (0x1000U | (0x2000U 
                                            & ((~ (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                                   >> 0x12U)) 
                                               << 0xdU)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = (0xfffffe7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
            >> 0xaU))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
            = ((0xfffffe7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
               | (0xffffff80U & (0x80U | (0x100U & 
                                          ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                               >> 0xbU)) 
                                           << 8U)))));
    }
    __VdfgRegularize_hd87f99a1_2_2 = (((0x3f8U & ((
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                                   >> 0x16U) 
                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_output) 
                                                     << 3U))) 
                                       | (0xfffcU & 
                                          ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                            >> 0x10U) 
                                           & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_output) 
                                              << 2U)))) 
                                      | ((0x3ffffeU 
                                          & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                              >> 0xaU) 
                                             & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_output) 
                                                << 1U))) 
                                         | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                             >> 4U) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_output))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = (0xfffffff3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]);
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_output) 
         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
            >> 3U))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
            = ((0xfffffff3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
               | (0xfffffffcU & (4U | (8U & ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
                                                 >> 4U)) 
                                             << 3U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__0__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
               >> 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__serial_q) 
               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_input)) 
              << 0x1fU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__31__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__31__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
               >> 0x1bU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__30__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__30__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
               >> 0x14U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__29__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__29__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
               >> 0xdU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__28__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__28__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
               >> 6U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__27__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__27__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
               >> 0x1fU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__26__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__26__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
               >> 0x18U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__25__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__25__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
               >> 0x11U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__24__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__24__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
               >> 0xaU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__23__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__23__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
               >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__22__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__22__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
               >> 0x1cU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__21__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__21__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
               >> 0x15U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__20__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__20__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
               >> 0xeU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__19__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__19__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
               >> 7U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__18__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__18__KET__) 
           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__17__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__17__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
               >> 0x19U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__16__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__16__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
               >> 0x12U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__15__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__15__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
               >> 0xbU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__14__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__14__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
               >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__13__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__13__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
               >> 0x1dU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__12__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__12__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
               >> 0x16U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__11__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__11__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
               >> 0xfU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__10__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__10__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
               >> 8U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__9__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__9__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
               >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__8__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__8__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
               >> 0x1aU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__7__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__7__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
               >> 0x13U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__6__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__6__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
               >> 0xcU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__5__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__5__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
               >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__4__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__4__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
               >> 0x1eU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__3__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__3__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
               >> 0x17U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__2__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
               >> 0x10U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__1__KET__ 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_edge__BRA__1__KET__) 
           & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[0U] 
               >> 9U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_input)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOWrite 
        = ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable)) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
            | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E)
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL)
                    : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iUSAGE) 
                       >> 4U))) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable))) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRWrite));
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_0 = (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_output) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_output) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_output) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_output))) 
                                                & (IData)(__VdfgRegularize_hd87f99a1_2_2));
    vlSelfRef.tb_croc_soc__DOT__gpio_o = ((((((0x80000000U 
                                               & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                   << 2U) 
                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_output) 
                                                     << 0x1fU))) 
                                              | (0xc0000000U 
                                                 & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                     << 8U) 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_output) 
                                                       << 0x1eU)))) 
                                             | ((0xe0000000U 
                                                 & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                     << 0xeU) 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_output) 
                                                       << 0x1dU))) 
                                                | (0xf0000000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                       << 0x14U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_output) 
                                                         << 0x1cU))))) 
                                            | (((0xf8000000U 
                                                 & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[6U] 
                                                     << 0x1aU) 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_output) 
                                                       << 0x1bU))) 
                                                | (0xfc000000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_output) 
                                                         << 0x1aU)))) 
                                               | ((0xfe000000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                       << 6U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_output) 
                                                         << 0x19U))) 
                                                  | (0xff000000U 
                                                     & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                         << 0xcU) 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_output) 
                                                           << 0x18U)))))) 
                                           | ((((0xff800000U 
                                                 & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[5U] 
                                                     << 0x12U) 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_output) 
                                                       << 0x17U))) 
                                                | (0xc00000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                       >> 8U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_output) 
                                                         << 0x16U)))) 
                                               | ((0x3fe00000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                       >> 2U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_output) 
                                                         << 0x15U))) 
                                                  | (0xfff00000U 
                                                     & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                         << 4U) 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_output) 
                                                           << 0x14U))))) 
                                              | (((0xfff80000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_output) 
                                                         << 0x13U))) 
                                                  | (0xfffc0000U 
                                                     & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[4U] 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_output) 
                                                           << 0x12U)))) 
                                                 | ((0x3e0000U 
                                                     & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                         >> 0xaU) 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_output) 
                                                           << 0x11U))) 
                                                    | (0xfff0000U 
                                                       & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                           >> 4U) 
                                                          & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_output) 
                                                             << 0x10U))))))) 
                                          | (((((0xffff8000U 
                                                 & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                     << 2U) 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_output) 
                                                       << 0xfU))) 
                                                | (0xffffc000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[3U] 
                                                       << 8U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_output) 
                                                         << 0xeU)))) 
                                               | ((0x2000U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                       >> 0x12U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_output) 
                                                         << 0xdU))) 
                                                  | (0xff000U 
                                                     & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                         >> 0xcU) 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_output) 
                                                           << 0xcU))))) 
                                              | (((0x3fff800U 
                                                   & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                       >> 6U) 
                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_output) 
                                                         << 0xbU))) 
                                                  | (0xfffffc00U 
                                                     & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_output) 
                                                           << 0xaU)))) 
                                                 | ((0xfffffe00U 
                                                     & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[2U] 
                                                         << 6U) 
                                                        & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_output) 
                                                           << 9U))) 
                                                    | (0xf00U 
                                                       & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                           >> 0x14U) 
                                                          & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_output) 
                                                             << 8U)))))) 
                                             | (((0x3ff80U 
                                                  & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_output) 
                                                        << 7U))) 
                                                 | (0xffffc0U 
                                                    & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                        >> 8U) 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_output) 
                                                          << 6U)))) 
                                                | ((0x3fffffe0U 
                                                    & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                        >> 2U) 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_output) 
                                                          << 5U))) 
                                                   | (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw[1U] 
                                                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_output)) 
                                                       << 4U) 
                                                      | (IData)(__VdfgRegularize_hd87f99a1_2_2))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (3U & (- (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__0__KET__)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0xe3ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (0xfc000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__31__KET__) 
                              << 0x1cU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__31__KET__) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_input)) 
                                              << 0x1aU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0xff1fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (0xffe00000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__30__KET__) 
                              << 0x17U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__30__KET__) 
                                            << 0x16U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_input)) 
                                              << 0x15U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0xfff8ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (0xffff0000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__29__KET__) 
                              << 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__29__KET__) 
                                            << 0x11U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_input)) 
                                              << 0x10U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0xffffc7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (0xfffff800U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__28__KET__) 
                              << 0xdU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__28__KET__) 
                                           << 0xcU) 
                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__serial_q) 
                                              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_input)) 
                                             << 0xbU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0xfffffe3fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (0xffffffc0U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__27__KET__) 
                              << 8U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__27__KET__) 
                                         << 7U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_input)) 
                                                   << 6U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
        = ((0xfffffff1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]) 
           | (0xfffffffeU & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__26__KET__) 
                              << 3U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__26__KET__) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_input)) 
                                                   << 1U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0x8fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0xf0000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__25__KET__) 
                              << 0x1eU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__25__KET__) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_input)) 
                                              << 0x1cU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0xfc7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0xff800000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__24__KET__) 
                              << 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__24__KET__) 
                                            << 0x18U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_input)) 
                                              << 0x17U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0xffe3ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0xfffc0000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__23__KET__) 
                              << 0x14U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__23__KET__) 
                                            << 0x13U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_input)) 
                                              << 0x12U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0xffff1fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0xffffe000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__22__KET__) 
                              << 0xfU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__22__KET__) 
                                           << 0xeU) 
                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__serial_q) 
                                              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_input)) 
                                             << 0xdU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0xfffff8ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0xffffff00U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__21__KET__) 
                              << 0xaU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__21__KET__) 
                                           << 9U) | 
                                          (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__serial_q) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_input)) 
                                           << 8U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0xffffffc7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0xfffffff8U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__20__KET__) 
                              << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__20__KET__) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_input)) 
                                                   << 3U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0x3fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (0xc0000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__19__KET__) 
                              << 0x1fU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__serial_q) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_input)) 
                                           << 0x1eU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]) 
           | (0x3fffffffU & ((0x3fffffffU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__19__KET__)) 
                             | ((0x3fffffffU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__19__KET__) 
                                                >> 1U)) 
                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__serial_q) 
                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_input)) 
                                   >> 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0xf1ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (0xfe000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__18__KET__) 
                              << 0x1bU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__18__KET__) 
                                            << 0x1aU) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_input)) 
                                              << 0x19U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0xff8fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (0xfff00000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__17__KET__) 
                              << 0x16U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__17__KET__) 
                                            << 0x15U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_input)) 
                                              << 0x14U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0xfffc7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (0xffff8000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__16__KET__) 
                              << 0x11U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__16__KET__) 
                                            << 0x10U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_input)) 
                                              << 0xfU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0xffffe3ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (0xfffffc00U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__15__KET__) 
                              << 0xcU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__15__KET__) 
                                           << 0xbU) 
                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__serial_q) 
                                              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_input)) 
                                             << 0xaU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0xffffff1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (0xffffffe0U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__14__KET__) 
                              << 7U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__14__KET__) 
                                         << 6U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_input)) 
                                                   << 5U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]) 
           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__13__KET__) 
               << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__13__KET__) 
                          << 1U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__serial_q) 
                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_input)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = ((0xc7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
           | (0xf8000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__12__KET__) 
                              << 0x1dU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__12__KET__) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_input)) 
                                              << 0x1bU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = ((0xfe3fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
           | (0xffc00000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__11__KET__) 
                              << 0x18U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__11__KET__) 
                                            << 0x17U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_input)) 
                                              << 0x16U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = ((0xfff1ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
           | (0xfffe0000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__10__KET__) 
                              << 0x13U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__10__KET__) 
                                            << 0x12U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_input)) 
                                              << 0x11U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = ((0xffff8fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
           | (0xfffff000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__9__KET__) 
                              << 0xeU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__9__KET__) 
                                           << 0xdU) 
                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__serial_q) 
                                              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_input)) 
                                             << 0xcU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = ((0xfffffc7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
           | (0xffffff80U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__8__KET__) 
                              << 9U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__8__KET__) 
                                         << 8U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_input)) 
                                                   << 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
        = ((0xffffffe3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]) 
           | (0xfffffffcU & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__7__KET__) 
                              << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__7__KET__) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_input)) 
                                                   << 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0x1fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (0xe0000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__6__KET__) 
                              << 0x1fU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__6__KET__) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_input)) 
                                              << 0x1dU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0xf8ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (0xff000000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__5__KET__) 
                              << 0x1aU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__5__KET__) 
                                            << 0x19U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_input)) 
                                              << 0x18U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0xffc7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (0xfff80000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__4__KET__) 
                              << 0x15U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__4__KET__) 
                                            << 0x14U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_input)) 
                                              << 0x13U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0xfffe3fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (0xffffc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__3__KET__) 
                              << 0x10U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__3__KET__) 
                                            << 0xfU) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__serial_q) 
                                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_input)) 
                                              << 0xeU)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0xfffff1ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (0xfffffe00U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__2__KET__) 
                              << 0xbU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__2__KET__) 
                                           << 0xaU) 
                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__serial_q) 
                                              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_input)) 
                                             << 9U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
        = ((0xffffff8fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]) 
           | (0xfffffff0U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__1__KET__) 
                              << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt__BRA__1__KET__) 
                                         << 5U) | (
                                                   ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__serial_q) 
                                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_input)) 
                                                   << 4U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[6U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[7U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[7U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt = 0U;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((4U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 3U) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 1U) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U]));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | (IData)((3U == (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                 >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 8U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 6U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffffdU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x60U == (0x60U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))) 
              << 1U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                 >> 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0xdU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                 >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0xbU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                 >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffffbU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc00U == (0xc00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))) 
              << 2U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                 >> 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x20000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x12U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x10U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffff7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x18000U == (0x18000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))) 
              << 3U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                 >> 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x400000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x17U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x100000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x15U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffffefU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x300000U == (0x300000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))) 
              << 4U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                 >> 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x8000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x1cU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x2000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x1aU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x6000000U == (0x6000000U & 
                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))) 
              << 5U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 1U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U] 
                     >> 0x1fU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffffbfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc0000000U == (0xc0000000U 
                                       & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[0U]))) 
              << 6U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x20U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 6U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 4U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffff7fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x18U == (0x18U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]))) 
              << 7U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                 >> 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0xbU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                 >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x100U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 9U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffeffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x300U == (0x300U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]))) 
              << 8U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                 >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x8000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x10U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0xeU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                 >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffdffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x6000U == (0x6000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]))) 
              << 9U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                 >> 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x100000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x15U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x40000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x13U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffffbffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc0000U == (0xc0000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]))) 
              << 0xaU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                 >> 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x2000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x1aU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x800000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x18U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffff7ffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x1800000U == (0x1800000U & 
                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]))) 
              << 0xbU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x40000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x1fU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U] 
                     >> 0x1dU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0xcU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffefffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x30000000U == (0x30000000U 
                                       & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[1U]))) 
              << 0xcU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((8U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 4U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 2U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffdfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((6U == (6U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]))) 
              << 0xdU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                 >> 0xaU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x100U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 9U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x40U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 7U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffffbfffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc0U == (0xc0U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]))) 
              << 0xeU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                 >> 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x2000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0xeU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                 >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0xcU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                 >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0xfU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffff7fffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x1800U == (0x1800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]))) 
              << 0xfU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                 >> 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x40000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0x13U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x10000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0x11U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffeffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x30000U == (0x30000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]))) 
              << 0x10U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                 >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x800000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0x18U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x200000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0x16U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffdffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x600000U == (0x600000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]))) 
              << 0x11U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                 >> 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x10000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0x1dU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x4000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                     >> 0x1bU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfffbffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc000000U == (0xc000000U & 
                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U]))) 
              << 0x12U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 2U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x13U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                  >> 0x1fU) ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]
                  : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                     >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x13U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfff7ffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | (0x80000U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[2U] 
                           >> 0xcU) & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                                       << 0x13U))));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                 >> 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x40U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 7U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x10U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 5U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffefffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x30U == (0x30U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]))) 
              << 0x14U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                 >> 0xdU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x800U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0xcU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                 >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x200U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0xaU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                 >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffdfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x600U == (0x600U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]))) 
              << 0x15U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                 >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x10000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0x11U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0xfU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                 >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x16U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xffbfffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc000U == (0xc000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]))) 
              << 0x16U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                 >> 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x200000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0x16U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x80000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0x14U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x17U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xff7fffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x180000U == (0x180000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]))) 
              << 0x17U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                 >> 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x4000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0x1bU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x1000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0x19U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x18U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfeffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x3000000U == (0x3000000U & 
                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]))) 
              << 0x18U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                 >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                  >> 0x1fU) ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]
                  : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                     >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x20000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U] 
                     >> 0x1eU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfdffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x60000000U == (0x60000000U 
                                       & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[3U]))) 
              << 0x19U));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                 >> 6U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x10U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 5U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                               >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((4U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 3U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xfbffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xcU == (0xcU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]))) 
              << 0x1aU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                 >> 0xbU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x200U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0xaU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                 >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x80U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 8U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                               >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x1bU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xf7ffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x180U == (0x180U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]))) 
              << 0x1bU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                 >> 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x4000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0xfU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                 >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x1000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0xdU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                 >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xefffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x3000U == (0x3000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]))) 
              << 0x1cU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                 >> 0x15U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x80000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0x14U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x20000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0x12U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x1dU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xdfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x60000U == (0x60000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]))) 
              << 0x1dU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                 >> 0x1aU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x1000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0x19U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x400000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0x17U) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x1eU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0xbfffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0xc00000U == (0xc00000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]))) 
              << 0x1eU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0 
        = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
           >> 0x1fU);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h505317b1__0) 
              << 0x1fU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U] 
        = (0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U]);
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0 
        = (1U & ((0x20000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0x1eU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[4U] 
                                  >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h56d80ae3__0) 
              << 0x1fU));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0 
        = (1U & ((0x8000000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U])
                  ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U] 
                     >> 0x1cU) : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q[1U] 
                                  >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U] 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U]) 
           | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h4e8ef49f__0) 
              << 0x1fU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt 
        = ((0x7fffffffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt) 
           | ((IData)((0x18000000U == (0x18000000U 
                                       & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg[4U]))) 
              << 0x1fU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[0U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[5U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[6U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[6U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[7U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[7U];
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_write_request) {
        if ((0U == (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                              >> 0x12U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[7U] 
                = (((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask) 
                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[7U]) 
                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
                      & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                          << 0x13U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                       >> 0xdU))));
        } else if ((0x80U == (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                        >> 0x12U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[6U] 
                = (((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask) 
                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[6U]) 
                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
                      & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                          << 0x13U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                       >> 0xdU))));
        } else if ((0x180U == (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                         >> 0x12U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[4U] 
                = (((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask) 
                    & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[4U]) 
                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
                      & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                          << 0x13U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                       >> 0xdU))));
        } else if ((0x200U != (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                         >> 0x12U)))) {
            if ((0x280U == (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                      >> 0x12U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[2U] 
                    = (((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[2U]) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
                          & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                              << 0x13U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                           >> 0xdU))));
            } else if ((0x380U == (0xffcU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                                             >> 0x12U)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[0U] 
                    = (((~ vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask) 
                        & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg[0U]) 
                       | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask 
                          & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0xaU] 
                              << 0x13U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                           >> 0xdU))));
            }
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_read_request) {
        if (((((((((0U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                           << 2U)) | (0x80U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                << 2U))) 
                  | (0x100U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                << 2U))) | (0x180U 
                                            == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                << 2U))) 
                | (0x200U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                              << 2U))) | (0x280U == 
                                          ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                           << 2U))) 
              | (0x300U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                            << 2U))) | (0x380U == ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                   << 2U)))) {
            if ((0U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                        << 2U))) {
                if ((0x80U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                               << 2U))) {
                    if ((0x100U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                    << 2U))) {
                        if ((0x180U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                        << 2U))) {
                            if ((0x200U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                            << 2U))) {
                                if ((0x280U != ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                                << 2U))) {
                                    if ((0x300U == 
                                         ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q) 
                                          << 2U))) {
                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d[1U] 
                                            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt;
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
