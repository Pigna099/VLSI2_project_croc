// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc_obi_mux__pi10.h"

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (IData)((0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__mgr_port_req = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                     | (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xfffffffeU & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                       & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
           & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i));
    vlSelfRef.sbr_ports_rsp_o[0U] = ((0xfffffffcU & 
                                      vlSelfRef.sbr_ports_rsp_o[0U]) 
                                     | ((((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                         << 1U) | (1U 
                                                   & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid))));
    vlSelfRef.sbr_ports_rsp_o[0U] = ((3U & vlSelfRef.sbr_ports_rsp_o[0U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                   & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                         >> 1U)))) 
                                                     << 0x23U) 
                                                    | (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[0U]))))))) 
                                        << 2U));
    vlSelfRef.sbr_ports_rsp_o[1U] = ((0xffffff80U & 
                                      vlSelfRef.sbr_ports_rsp_o[1U]) 
                                     | (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                    & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                          >> 1U)))) 
                                                      << 0x23U) 
                                                     | (0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.__PVT__sbr_rsp_r[0U]))))))) 
                                         >> 0x1eU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                       & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                             >> 1U)))) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[0U])))))) 
                                                    >> 0x20U)) 
                                           << 2U)));
    vlSelfRef.sbr_ports_rsp_o[1U] = ((0x7fU & vlSelfRef.sbr_ports_rsp_o[1U]) 
                                     | ((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                       >> 3U)))) 
                                        << 7U));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffffc00U & 
                                      vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | (((IData)((0x7ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                      << 0x1dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                        >> 3U)))) 
                                         >> 0x19U) 
                                        | ((IData)(
                                                   ((0x7ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                         << 0x1dU) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                           >> 3U))) 
                                                    >> 0x20U)) 
                                           << 7U)));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffff3ffU & 
                                      vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | (0xfffffc00U 
                                        & ((((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                             & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__)) 
                                            << 0xbU) 
                                           | (0x400U 
                                              & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                 << 8U)))));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffU & vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                   & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                         >> 3U)))) 
                                                     << 0x23U) 
                                                    | (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                             >> 6U)))))) 
                                        << 0xcU));
    vlSelfRef.sbr_ports_rsp_o[3U] = ((0xfffe0000U & 
                                      vlSelfRef.sbr_ports_rsp_o[3U]) 
                                     | (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                    & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                          >> 3U)))) 
                                                      << 0x23U) 
                                                     | (0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                            << 0x1aU) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                              >> 6U)))))) 
                                         >> 0x14U) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                       & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                             >> 3U)))) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                               << 0x1aU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                                 >> 6U))))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
    vlSelfRef.sbr_ports_rsp_o[3U] = ((0x1ffffU & vlSelfRef.sbr_ports_rsp_o[3U]) 
                                     | ((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                       >> 9U)))) 
                                        << 0x11U));
    vlSelfRef.sbr_ports_rsp_o[4U] = (0xfffffU & (((IData)(
                                                          (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                               << 0x17U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                                 >> 9U)))) 
                                                  >> 0xfU) 
                                                 | ((IData)(
                                                            ((0x7ffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                                  << 0x17U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                                    >> 9U))) 
                                                             >> 0x20U)) 
                                                    << 0x11U)));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___nba_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___nba_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.sbr_ports_rsp_o[0U] = ((0xfffffffcU & 
                                      vlSelfRef.sbr_ports_rsp_o[0U]) 
                                     | ((((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                         << 1U) | (1U 
                                                   & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid))));
    vlSelfRef.sbr_ports_rsp_o[0U] = ((3U & vlSelfRef.sbr_ports_rsp_o[0U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                   & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                         >> 1U)))) 
                                                     << 0x23U) 
                                                    | (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[0U]))))))) 
                                        << 2U));
    vlSelfRef.sbr_ports_rsp_o[1U] = ((0xffffff80U & 
                                      vlSelfRef.sbr_ports_rsp_o[1U]) 
                                     | (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                    & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                          >> 1U)))) 
                                                      << 0x23U) 
                                                     | (0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.__PVT__sbr_rsp_r[0U]))))))) 
                                         >> 0x1eU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                       & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                             >> 1U)))) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[0U])))))) 
                                                    >> 0x20U)) 
                                           << 2U)));
    vlSelfRef.sbr_ports_rsp_o[1U] = ((0x7fU & vlSelfRef.sbr_ports_rsp_o[1U]) 
                                     | ((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                       >> 3U)))) 
                                        << 7U));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffffc00U & 
                                      vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | (((IData)((0x7ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                      << 0x1dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                        >> 3U)))) 
                                         >> 0x19U) 
                                        | ((IData)(
                                                   ((0x7ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                         << 0x1dU) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                           >> 3U))) 
                                                    >> 0x20U)) 
                                           << 7U)));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffff3ffU & 
                                      vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | (0xfffffc00U 
                                        & ((((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                             & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__)) 
                                            << 0xbU) 
                                           | (0x400U 
                                              & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                 << 8U)))));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffU & vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                   & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                         >> 3U)))) 
                                                     << 0x23U) 
                                                    | (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                             >> 6U)))))) 
                                        << 0xcU));
    vlSelfRef.sbr_ports_rsp_o[3U] = ((0xfffe0000U & 
                                      vlSelfRef.sbr_ports_rsp_o[3U]) 
                                     | (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                    & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                          >> 3U)))) 
                                                      << 0x23U) 
                                                     | (0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                            << 0x1aU) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                              >> 6U)))))) 
                                         >> 0x14U) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                       & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                             >> 3U)))) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                               << 0x1aU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                                 >> 6U))))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
    vlSelfRef.sbr_ports_rsp_o[3U] = ((0x1ffffU & vlSelfRef.sbr_ports_rsp_o[3U]) 
                                     | ((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                       >> 9U)))) 
                                        << 0x11U));
    vlSelfRef.sbr_ports_rsp_o[4U] = (0xfffffU & (((IData)(
                                                          (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                               << 0x17U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                                 >> 9U)))) 
                                                  >> 0xfU) 
                                                 | ((IData)(
                                                            ((0x7ffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                                  << 0x17U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                                    >> 9U))) 
                                                             >> 0x20U)) 
                                                    << 0x11U)));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
           & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sbr_ports_rsp_o[0U] = ((0xfffffffcU & 
                                      vlSelfRef.sbr_ports_rsp_o[0U]) 
                                     | ((((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                         << 1U) | (1U 
                                                   & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid))));
    vlSelfRef.sbr_ports_rsp_o[0U] = ((3U & vlSelfRef.sbr_ports_rsp_o[0U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                   & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                         >> 1U)))) 
                                                     << 0x23U) 
                                                    | (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[0U]))))))) 
                                        << 2U));
    vlSelfRef.sbr_ports_rsp_o[1U] = ((0xffffff80U & 
                                      vlSelfRef.sbr_ports_rsp_o[1U]) 
                                     | (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                    & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                          >> 1U)))) 
                                                      << 0x23U) 
                                                     | (0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.__PVT__sbr_rsp_r[0U]))))))) 
                                         >> 0x1eU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                                       & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                             >> 1U)))) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[0U])))))) 
                                                    >> 0x20U)) 
                                           << 2U)));
    vlSelfRef.sbr_ports_rsp_o[1U] = ((0x7fU & vlSelfRef.sbr_ports_rsp_o[1U]) 
                                     | ((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                       >> 3U)))) 
                                        << 7U));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffffc00U & 
                                      vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | (((IData)((0x7ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                      << 0x1dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                        >> 3U)))) 
                                         >> 0x19U) 
                                        | ((IData)(
                                                   ((0x7ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                         << 0x1dU) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[1U])) 
                                                           >> 3U))) 
                                                    >> 0x20U)) 
                                           << 7U)));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffff3ffU & 
                                      vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | (0xfffffc00U 
                                        & ((((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                             & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__)) 
                                            << 0xbU) 
                                           | (0x400U 
                                              & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                 << 8U)))));
    vlSelfRef.sbr_ports_rsp_o[2U] = ((0xfffU & vlSelfRef.sbr_ports_rsp_o[2U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                   & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                         >> 3U)))) 
                                                     << 0x23U) 
                                                    | (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                             >> 6U)))))) 
                                        << 0xcU));
    vlSelfRef.sbr_ports_rsp_o[3U] = ((0xfffe0000U & 
                                      vlSelfRef.sbr_ports_rsp_o[3U]) 
                                     | (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                    & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                          >> 3U)))) 
                                                      << 0x23U) 
                                                     | (0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                            << 0x1aU) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                              >> 6U)))))) 
                                         >> 0x14U) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__) 
                                                                       & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.__PVT__sbr_rsp_rvalid) 
                                                                             >> 3U)))) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                               << 0x1aU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[2U])) 
                                                                 >> 6U))))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
    vlSelfRef.sbr_ports_rsp_o[3U] = ((0x1ffffU & vlSelfRef.sbr_ports_rsp_o[3U]) 
                                     | ((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                       >> 9U)))) 
                                        << 0x11U));
    vlSelfRef.sbr_ports_rsp_o[4U] = (0xfffffU & (((IData)(
                                                          (0x7ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                               << 0x17U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                                 >> 9U)))) 
                                                  >> 0xfU) 
                                                 | ((IData)(
                                                            ((0x7ffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[4U])) 
                                                                  << 0x17U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__sbr_rsp_r[3U])) 
                                                                    >> 9U))) 
                                                             >> 0x20U)) 
                                                    << 0x11U)));
}
