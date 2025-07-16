// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__17(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__17\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                         >> 0x10U)))) 
               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if ((0x400U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U])) {
        if ((0x80000U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
            if ((0x100U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x14U))) {
                if ((0x108U != (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U))) {
                    if ((0x110U == (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                    >> 0x14U))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                               | (3U & ((IData)(1U) 
                                        << (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                  >> 0xfU)))));
                    }
                }
            }
        }
    }
    if ((2U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
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
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0xffffffffULL << (0x3fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U)))) 
                            & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                    >> 0x22U))), 5U))));
                }
            }
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_valid) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_mem_csrs;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
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
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
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
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            }
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
                    if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
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
                            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                = (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            } else {
                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                    = ((~ (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                           >> 8U)) 
                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                            }
                        } else if ((0x17U == (0x7fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            }
                        } else if ((0x1dU != (0x7fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
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
                if ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                }
            }
        }
    }
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__rst_n)
            ? (1U | (0xeU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                             << 1U))) : 0U);
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__2(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    if (vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d;
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                     >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState;
    vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished = 0U;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN)))) {
                    vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 5U;
                }
            } else {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
                    = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit)
                            ? 0U : 5U) : 4U);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
            = ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))
                ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep)
                    ? 4U : 3U) : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish)
                                   ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                                       ? 3U : 4U) : 2U));
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ)))) {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 2U;
            }
        } else {
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN)))) {
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 1U;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__4(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d;
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d;
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__tdo_oe_o 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
    vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                       ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                        ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q
                                                        : 
                                                       ((0x11U 
                                                         == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q)
                                                         : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 0U;
    if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP)
                                  ? (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS))
                                  : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS)
                                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity)
                                      : (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity)))));
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                    = (1U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))
                              ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                                 >> 7U) : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                                           >> 6U)));
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 0xcU;
                } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 0xbU;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState 
                = ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))
                    ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                        ? 0xaU : 0xbU) : ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                                           ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                                               ? 0xaU
                                               : 0xbU)
                                           : 9U));
        }
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                    = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                             >> 5U));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState 
                    = ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                            ? 0xaU : 0xbU) : 8U);
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                    = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState 
                    = ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                            ? 0xaU : 0xbU) : 7U);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 6U;
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 4U;
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 2U;
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 1U;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__8\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA 
        = ((0xffffff00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA) 
           | ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
               ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                   ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR)
                       : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR))
                   : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR)
                       : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)))
               : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                   ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR)
                       : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR))
                   : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)
                           ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM)
                           : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER))
                       : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)
                           ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL)
                           : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA 
        = (0xffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
        = ((1ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA)) 
              << 2U));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_ha135af01_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h7e9fdaa7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hf1667b45_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h8086066d_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hde1c3a48_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
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
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__1(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
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
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtb_croc_soc__ConstPool__TABLE_hbd9ad194_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__9(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__9\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    __Vtableidx31 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS) 
                      << 8U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParity 
        = Vtb_croc_soc__ConstPool__TABLE_hbd9ad194_0
        [__Vtableidx31];
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h29a2e848_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_he09e4869_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_he96ffaaa_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__10(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__10\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount 
        = (0xfU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR 
        = (0xffU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR 
        = ((0xc0U & ((- (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable))) 
                     << 6U)) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable)) 
                                 << 5U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iIIR)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIERWrite) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER 
                = ((0xf0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER)) 
                   | (0xfU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                              >> 4U)));
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER 
            = (0xfU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER));
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
             & (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
             & (3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
             & (4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR 
                = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)) 
                   | (0x3fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                               >> 4U)));
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR 
            = (0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR));
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_3) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_2) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit) {
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT = 0U;
        } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep) 
                    & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT 
                = (((~ ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount)))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT)) 
                   | (0xffU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ) 
                               << (7U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount)))));
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount)));
        }
        if ((0xaU <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = 1U;
        } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter)));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear) 
             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = 0U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL = 1U;
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = 0U;
    }
    __Vtableidx32 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount) 
                      << 3U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN) 
                                 << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no))))));
    if ((1U & Vtb_croc_soc__ConstPool__TABLE_h29a2e848_0
         [__Vtableidx32])) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount 
            = Vtb_croc_soc__ConstPool__TABLE_he09e4869_0
            [__Vtableidx32];
    }
    if ((2U & Vtb_croc_soc__ConstPool__TABLE_h29a2e848_0
         [__Vtableidx32])) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit 
            = Vtb_croc_soc__ConstPool__TABLE_he96ffaaa_0
            [__Vtableidx32];
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
        = (0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]);
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
                = (0x20U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]);
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iMSRInterrupt 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
            >> 3U) & (((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                           >> 5U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS)) 
                      | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR) 
                         | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD)))));
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
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS 
        = (1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                   >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRTS)) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCTSn)))));
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
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RCLK__DOT__iDd)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBAUDOUTN));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter) 
                 >> 4U));
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h98c0c55c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h6e77ef49_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_hd95d3aa7_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__5\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__7\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h8942d8dc_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h1604116e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h68df2ee3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_hfee633bb_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__11(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__11\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    if (vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0xc0c5db3U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q = 0ULL;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d));
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
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__12(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__12\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40 
        = (1U & VL_REDXOR_8((0x1fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50 
        = (1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                  >> 5U) ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60 
        = (1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                  >> 6U) ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70 
        = (IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                    >> 7U) ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity 
        = ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40)
            : ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50)
                : ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60)
                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__11(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__11\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__12(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__12\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__13(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__13\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                      >> 1U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit = 1U;
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear = 1U;
            }
        }
    }
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_ha654393f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h874c908c_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h755fe036_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h40e4dd6a_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__13(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__13\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__14(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__14\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__15(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__15\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT 
        = ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
               >> 6U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN 
        = (1U & ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR))
                  ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT)
                  : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_SIN__DOT__iD) 
                     >> 1U)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__16(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__16\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_ha83768be_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hb2954dbb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hc9a409a6_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__17(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__17\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__18(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__18\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__14(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__14\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS 
        = (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish 
        = (((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
            & (5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
           | (((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
               & (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
              | (((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
                  & (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
                 | ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
                    & (8U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))))));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = 0U;
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State))) {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 0U;
            } else {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished)
                        ? 3U : 2U);
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = 1U;
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 2U;
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 1U;
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 1U;
        } else {
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 0U;
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem
            [(0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr))];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = 0U;
        if (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast)) 
             & (0xbU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = 1U;
        }
    } else {
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
                 & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 5U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                    >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS)))));
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
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit)) 
           & (4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)));
    if (vlSelfRef.__VdlySet__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v0) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem[vlSelfRef.__VdlyDim0__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v0] 
            = vlSelfRef.__VdlyVal__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem__v1) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL 
        = (((0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr)) 
            == (0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr))) 
           & ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr) 
                                       >> 6U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (0xbU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState;
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__21(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__21\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__22(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__22\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__15(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__15\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState;
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__16(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__16\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                 >> 3U));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__36(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__36\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                  >> 0x1eU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp)));
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
}

void Vtb_croc_soc___024root___timing_resume(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___timing_resume\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcc0dc21d__0.resume(
                                                   "@(posedge tb_croc_soc.i_clk_jtag.clk)");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hae0d1e8b__0.resume(
                                                   "@(posedge tb_croc_soc.fetch_en_i)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_ha7b28ad8__0.resume(
                                                   "@(negedge tb_croc_soc.uart_tx_o)");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h348173d4__0.resume(
                                                   "@(posedge tb_croc_soc.i_clk_rst_sys.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_h171b53e4__0.resume(
                                                   "@(posedge tb_croc_soc.i_clk_rst_rtc.clk)");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_croc_soc___024root___timing_commit(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___timing_commit\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x40000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcc0dc21d__0.commit(
                                                   "@(posedge tb_croc_soc.i_clk_jtag.clk)");
    }
    if ((! (0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hae0d1e8b__0.commit(
                                                   "@(posedge tb_croc_soc.fetch_en_i)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_ha7b28ad8__0.commit(
                                                   "@(negedge tb_croc_soc.uart_tx_o)");
    }
    if ((! (0x8000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h348173d4__0.commit(
                                                   "@(posedge tb_croc_soc.i_clk_rst_sys.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_h171b53e4__0.commit(
                                                   "@(posedge tb_croc_soc.i_clk_rst_rtc.clk)");
    }
}

void Vtb_croc_soc___024root___eval_triggers__act(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___eval_act(Vtb_croc_soc___024root* vlSelf);

bool Vtb_croc_soc___024root___eval_phase__act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<66> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_croc_soc___024root___eval_triggers__act(vlSelf);
    Vtb_croc_soc___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_croc_soc___024root___timing_resume(vlSelf);
        Vtb_croc_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_croc_soc___024root___eval_nba(Vtb_croc_soc___024root* vlSelf);

bool Vtb_croc_soc___024root___eval_phase__nba(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__nba\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_croc_soc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__nba(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_croc_soc___024root___eval(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_croc_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tb_croc_soc.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_croc_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/tb_croc_soc.sv", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_croc_soc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_croc_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_croc_soc___024root___eval_debug_assertions(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_debug_assertions\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
