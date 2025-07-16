// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc_obi_mux__pi10.h"

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                            >> 0x19U));
        } else {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                             << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                         >> 0x11U)));
        }
    } else if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                                      << 0x17U) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                        >> 9U)));
    } else {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[0U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                      << 0x1fU) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                        >> 1U)));
    }
    vlSelfRef.__PVT__sbr_ports_req = (((8U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                              >> 0x15U)) 
                                       | (4U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                >> 0xeU))) 
                                      | ((2U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                >> 7U)) 
                                         | (1U & vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__0__KET____DOT__i_mux__sbr_ports_req_i[0U])));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__sbr_ports_req));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = (((0xfffffff8U & (((3U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((0xfffffff8U & (((3U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
            & (IData)(vlSelfRef.__PVT__mgr_port_req))
            ? (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))))
                ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mgr_port_req_o[0U] = (0xffffffe3U & vlSelfRef.mgr_port_req_o[0U]);
    vlSelfRef.mgr_port_req_o[0U] = ((3U & vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((0xffffffe0U 
                                        & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           << 3U)) 
                                       | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                << 1U))));
    vlSelfRef.mgr_port_req_o[1U] = ((3U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           >> 0x1dU)) 
                                    | (((0x18U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                  << 3U)) 
                                        | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                 >> 0x1dU))) 
                                       | (0xffffffe0U 
                                          & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                             << 3U))));
    vlSelfRef.mgr_port_req_o[2U] = (0x3ffU & ((3U & 
                                               (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                >> 0x1dU)) 
                                              | (((0x18U 
                                                   & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                      << 3U)) 
                                                  | (4U 
                                                     & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                        >> 0x1dU))) 
                                                 | (0x3e0U 
                                                    & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                       << 3U)))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xffffffe1U & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | (0xfffffffeU 
                                       & ((0x18U & 
                                           ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            << 3U)) 
                                          | (6U & (
                                                   vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                   << 1U)))));
    vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i 
        = (1U & (vlSelfRef.mgr_port_req_o[0U] & (IData)(
                                                        (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                                                         >> 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp)) 
          & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_hf6ba3faa__0;
    __Vlvbound_hf6ba3faa__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7dde85a__0;
    __Vlvbound_hc7dde85a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7da1147__0;
    __Vlvbound_hc7da1147__0 = 0;
    CData/*0:0*/ __Vlvbound_h70697e10__0;
    __Vlvbound_h70697e10__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n;
        }
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && ((~ (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i)) 
               & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n));
    vlSelfRef.__PVT__response_id = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q), 1U))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xfffffffeU & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                       & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                                                        >> 1U)));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__sbr_rsp_rvalid = 0U;
    vlSelfRef.__PVT__sbr_rsp_rvalid = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.__PVT__response_id))) 
                                        & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid)) 
                                       | (0xfU & ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp)) 
                                                  << (IData)(vlSelfRef.__PVT__response_id))));
    vlSelfRef.__PVT__sbr_rsp_r[0U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[1U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[2U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[3U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[4U] = 0U;
    __Vlvbound_hf6ba3faa__0 = (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                                       >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.__PVT__response_id)))), vlSelfRef.__PVT__sbr_rsp_r, __Vlvbound_hf6ba3faa__0);
    }
    __Vlvbound_hc7dde85a__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                                             >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(2U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7dde85a__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_hc7da1147__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                                             >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(1U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7da1147__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_h70697e10__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                                             >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(7U & (((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)) 
                                          >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.__PVT__response_id))))) 
                & vlSelfRef.__PVT__sbr_rsp_r[(7U & 
                                              (((IData)(0x23U) 
                                                * (IData)(vlSelfRef.__PVT__response_id)) 
                                               >> 5U))]) 
               | ((IData)(__Vlvbound_h70697e10__0) 
                  << (0x1fU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id)))));
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
           & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_hf6ba3faa__0;
    __Vlvbound_hf6ba3faa__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7dde85a__0;
    __Vlvbound_hc7dde85a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7da1147__0;
    __Vlvbound_hc7da1147__0 = 0;
    CData/*0:0*/ __Vlvbound_h70697e10__0;
    __Vlvbound_h70697e10__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.__PVT__sbr_rsp_rvalid = 0U;
    vlSelfRef.__PVT__sbr_rsp_rvalid = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.__PVT__response_id))) 
                                        & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid)) 
                                       | (0xfU & ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp)) 
                                                  << (IData)(vlSelfRef.__PVT__response_id))));
    vlSelfRef.__PVT__sbr_rsp_r[0U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[1U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[2U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[3U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[4U] = 0U;
    __Vlvbound_hf6ba3faa__0 = (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
                                       >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.__PVT__response_id)))), vlSelfRef.__PVT__sbr_rsp_r, __Vlvbound_hf6ba3faa__0);
    }
    __Vlvbound_hc7dde85a__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
                                             >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(2U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7dde85a__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_hc7da1147__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
                                             >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(1U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7da1147__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_h70697e10__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
                                             >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(7U & (((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)) 
                                          >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.__PVT__response_id))))) 
                & vlSelfRef.__PVT__sbr_rsp_r[(7U & 
                                              (((IData)(0x23U) 
                                                * (IData)(vlSelfRef.__PVT__response_id)) 
                                               >> 5U))]) 
               | ((IData)(__Vlvbound_h70697e10__0) 
                  << (0x1fU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id)))));
    }
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
                                                        >> 1U)));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__3(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                            >> 0x19U));
        } else {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                             << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                         >> 0x11U)));
        }
    } else if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                                      << 0x17U) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                        >> 9U)));
    } else {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[0U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                      << 0x1fU) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                        >> 1U)));
    }
    vlSelfRef.__PVT__sbr_ports_req = (((8U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                              >> 0x15U)) 
                                       | (4U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                >> 0xeU))) 
                                      | ((2U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                >> 7U)) 
                                         | (1U & vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__1__KET____DOT__i_mux__sbr_ports_req_i[0U])));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__sbr_ports_req));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = (((0xfffffff8U & (((3U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((0xfffffff8U & (((3U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (IData)((0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__mgr_port_req = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                     | (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                               ? 2U : 3U));
    vlSelfRef.mgr_port_req_o[0U] = ((0xfffffffeU & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                       & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
            & (IData)(vlSelfRef.__PVT__mgr_port_req))
            ? (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))))
                ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__4(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mgr_port_req_o[0U] = (0xffffffe3U & vlSelfRef.mgr_port_req_o[0U]);
    vlSelfRef.mgr_port_req_o[0U] = ((3U & vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((0xffffffe0U 
                                        & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           << 3U)) 
                                       | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                << 1U))));
    vlSelfRef.mgr_port_req_o[1U] = ((3U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           >> 0x1dU)) 
                                    | (((0x18U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                  << 3U)) 
                                        | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                 >> 0x1dU))) 
                                       | (0xffffffe0U 
                                          & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                             << 3U))));
    vlSelfRef.mgr_port_req_o[2U] = (0x3ffU & ((3U & 
                                               (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                >> 0x1dU)) 
                                              | (((0x18U 
                                                   & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                      << 3U)) 
                                                  | (4U 
                                                     & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                        >> 0x1dU))) 
                                                 | (0x3e0U 
                                                    & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                       << 3U)))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xffffffe1U & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | (0xfffffffeU 
                                       & ((0x18U & 
                                           ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            << 3U)) 
                                          | (6U & (
                                                   vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                   << 1U)))));
    vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i 
        = (1U & (vlSelfRef.mgr_port_req_o[0U] & (IData)(
                                                        (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp 
                                                         >> 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp)) 
          & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n;
        }
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n;
    } else {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = 0U;
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && ((~ (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i)) 
               & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n));
    vlSelfRef.__PVT__response_id = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q), 1U))));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                            >> 0x19U));
        } else {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                             << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                         >> 0x11U)));
        }
    } else if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                                      << 0x17U) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                        >> 9U)));
    } else {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[0U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                      << 0x1fU) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                        >> 1U)));
    }
    vlSelfRef.__PVT__sbr_ports_req = (((8U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                              >> 0x15U)) 
                                       | (4U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                >> 0xeU))) 
                                      | ((2U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                >> 7U)) 
                                         | (1U & vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__2__KET____DOT__i_mux__sbr_ports_req_i[0U])));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__sbr_ports_req));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = (((0xfffffff8U & (((3U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((0xfffffff8U & (((3U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
            & (IData)(vlSelfRef.__PVT__mgr_port_req))
            ? (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))))
                ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mgr_port_req_o[0U] = (0xffffffe3U & vlSelfRef.mgr_port_req_o[0U]);
    vlSelfRef.mgr_port_req_o[0U] = ((3U & vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((0xffffffe0U 
                                        & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           << 3U)) 
                                       | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                << 1U))));
    vlSelfRef.mgr_port_req_o[1U] = ((3U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           >> 0x1dU)) 
                                    | (((0x18U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                  << 3U)) 
                                        | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                 >> 0x1dU))) 
                                       | (0xffffffe0U 
                                          & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                             << 3U))));
    vlSelfRef.mgr_port_req_o[2U] = (0x3ffU & ((3U & 
                                               (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                >> 0x1dU)) 
                                              | (((0x18U 
                                                   & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                      << 3U)) 
                                                  | (4U 
                                                     & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                        >> 0x1dU))) 
                                                 | (0x3e0U 
                                                    & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                       << 3U)))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xffffffe1U & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | (0xfffffffeU 
                                       & ((0x18U & 
                                           ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            << 3U)) 
                                          | (6U & (
                                                   vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                   << 1U)))));
    vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i 
        = (1U & (vlSelfRef.mgr_port_req_o[0U] & (IData)(
                                                        (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                                         >> 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o)) 
          & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_hf6ba3faa__0;
    __Vlvbound_hf6ba3faa__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7dde85a__0;
    __Vlvbound_hc7dde85a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7da1147__0;
    __Vlvbound_hc7da1147__0 = 0;
    CData/*0:0*/ __Vlvbound_h70697e10__0;
    __Vlvbound_h70697e10__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n;
        }
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && ((~ (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i)) 
               & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n));
    vlSelfRef.__PVT__response_id = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q), 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.mgr_port_req_o[0U] = ((0xfffffffeU & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                       & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                                        >> 1U)));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__sbr_rsp_rvalid = 0U;
    vlSelfRef.__PVT__sbr_rsp_rvalid = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.__PVT__response_id))) 
                                        & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid)) 
                                       | (0xfU & ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o)) 
                                                  << (IData)(vlSelfRef.__PVT__response_id))));
    vlSelfRef.__PVT__sbr_rsp_r[0U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[1U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[2U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[3U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[4U] = 0U;
    __Vlvbound_hf6ba3faa__0 = (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                       >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.__PVT__response_id)))), vlSelfRef.__PVT__sbr_rsp_r, __Vlvbound_hf6ba3faa__0);
    }
    __Vlvbound_hc7dde85a__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                             >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(2U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7dde85a__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_hc7da1147__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                             >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(1U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7da1147__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_h70697e10__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                             >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(7U & (((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)) 
                                          >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.__PVT__response_id))))) 
                & vlSelfRef.__PVT__sbr_rsp_r[(7U & 
                                              (((IData)(0x23U) 
                                                * (IData)(vlSelfRef.__PVT__response_id)) 
                                               >> 5U))]) 
               | ((IData)(__Vlvbound_h70697e10__0) 
                  << (0x1fU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id)))));
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
           & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__1(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__1\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                            >> 0x19U));
        } else {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                             << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                         >> 0x11U)));
        }
    } else if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                                      << 0x17U) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                        >> 9U)));
    } else {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[0U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                      << 0x1fU) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                        >> 1U)));
    }
    vlSelfRef.__PVT__sbr_ports_req = (((8U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                              >> 0x15U)) 
                                       | (4U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                >> 0xeU))) 
                                      | ((2U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                >> 7U)) 
                                         | (1U & vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__3__KET____DOT__i_mux__sbr_ports_req_i[0U])));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__sbr_ports_req));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = (((0xfffffff8U & (((3U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((0xfffffff8U & (((3U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
            & (IData)(vlSelfRef.__PVT__mgr_port_req))
            ? (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))))
                ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__2(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__2\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mgr_port_req_o[0U] = (0xffffffe3U & vlSelfRef.mgr_port_req_o[0U]);
    vlSelfRef.mgr_port_req_o[0U] = ((3U & vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((0xffffffe0U 
                                        & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           << 3U)) 
                                       | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                << 1U))));
    vlSelfRef.mgr_port_req_o[1U] = ((3U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           >> 0x1dU)) 
                                    | (((0x18U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                  << 3U)) 
                                        | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                 >> 0x1dU))) 
                                       | (0xffffffe0U 
                                          & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                             << 3U))));
    vlSelfRef.mgr_port_req_o[2U] = (0x3ffU & ((3U & 
                                               (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                >> 0x1dU)) 
                                              | (((0x18U 
                                                   & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                      << 3U)) 
                                                  | (4U 
                                                     & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                        >> 0x1dU))) 
                                                 | (0x3e0U 
                                                    & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                       << 3U)))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xffffffe1U & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | (0xfffffffeU 
                                       & ((0x18U & 
                                           ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            << 3U)) 
                                          | (6U & (
                                                   vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                   << 1U)))));
    vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i 
        = (1U & (vlSelfRef.mgr_port_req_o[0U] & (IData)(
                                                        (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                                         >> 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o)) 
          & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___nba_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_hf6ba3faa__0;
    __Vlvbound_hf6ba3faa__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7dde85a__0;
    __Vlvbound_hc7dde85a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7da1147__0;
    __Vlvbound_hc7da1147__0 = 0;
    CData/*0:0*/ __Vlvbound_h70697e10__0;
    __Vlvbound_h70697e10__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock)))) {
            vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q 
                = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n;
        }
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q 
            = vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && ((~ (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i)) 
               & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n));
    vlSelfRef.__PVT__response_id = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q), 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.mgr_port_req_o[0U] = ((0xfffffffeU & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                       & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                                        >> 1U)));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__sbr_rsp_rvalid = 0U;
    vlSelfRef.__PVT__sbr_rsp_rvalid = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.__PVT__response_id))) 
                                        & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid)) 
                                       | (0xfU & ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o)) 
                                                  << (IData)(vlSelfRef.__PVT__response_id))));
    vlSelfRef.__PVT__sbr_rsp_r[0U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[1U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[2U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[3U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[4U] = 0U;
    __Vlvbound_hf6ba3faa__0 = (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                       >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.__PVT__response_id)))), vlSelfRef.__PVT__sbr_rsp_r, __Vlvbound_hf6ba3faa__0);
    }
    __Vlvbound_hc7dde85a__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                             >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(2U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7dde85a__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_hc7da1147__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                             >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(1U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7da1147__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_h70697e10__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                             >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(7U & (((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)) 
                                          >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.__PVT__response_id))))) 
                & vlSelfRef.__PVT__sbr_rsp_r[(7U & 
                                              (((IData)(0x23U) 
                                                * (IData)(vlSelfRef.__PVT__response_id)) 
                                               >> 5U))]) 
               | ((IData)(__Vlvbound_h70697e10__0) 
                  << (0x1fU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id)))));
    }
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
           & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__0\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_hf6ba3faa__0;
    __Vlvbound_hf6ba3faa__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7dde85a__0;
    __Vlvbound_hc7dde85a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc7da1147__0;
    __Vlvbound_hc7da1147__0 = 0;
    CData/*0:0*/ __Vlvbound_h70697e10__0;
    __Vlvbound_h70697e10__0 = 0;
    // Body
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.__PVT__sbr_rsp_rvalid = 0U;
    vlSelfRef.__PVT__sbr_rsp_rvalid = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.__PVT__response_id))) 
                                        & (IData)(vlSelfRef.__PVT__sbr_rsp_rvalid)) 
                                       | (0xfU & ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp)) 
                                                  << (IData)(vlSelfRef.__PVT__response_id))));
    vlSelfRef.__PVT__sbr_rsp_r[0U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[1U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[2U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[3U] = 0U;
    vlSelfRef.__PVT__sbr_rsp_r[4U] = 0U;
    __Vlvbound_hf6ba3faa__0 = (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
                                       >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.__PVT__response_id)))), vlSelfRef.__PVT__sbr_rsp_r, __Vlvbound_hf6ba3faa__0);
    }
    __Vlvbound_hc7dde85a__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
                                             >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(2U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7dde85a__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_hc7da1147__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
                                             >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(((IData)(1U) + 
                                     (0xffU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.__PVT__response_id)))) 
                                    >> 5U)] = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id))))))) 
                                                & vlSelfRef.__PVT__sbr_rsp_r[
                                                (((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.__PVT__response_id)))) 
                                                 >> 5U)]) 
                                               | ((IData)(__Vlvbound_hc7da1147__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelfRef.__PVT__response_id)))))));
    }
    __Vlvbound_h70697e10__0 = (1U & (IData)((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
                                             >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id))))) {
        vlSelfRef.__PVT__sbr_rsp_r[(7U & (((IData)(0x23U) 
                                           * (IData)(vlSelfRef.__PVT__response_id)) 
                                          >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.__PVT__response_id))))) 
                & vlSelfRef.__PVT__sbr_rsp_r[(7U & 
                                              (((IData)(0x23U) 
                                                * (IData)(vlSelfRef.__PVT__response_id)) 
                                               >> 5U))]) 
               | ((IData)(__Vlvbound_h70697e10__0) 
                  << (0x1fU & ((IData)(0x23U) * (IData)(vlSelfRef.__PVT__response_id)))));
    }
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
                                                        >> 1U)));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__3(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__3\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                    << 7U) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                              >> 0x19U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[8U] 
                            >> 0x19U));
        } else {
            vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                = ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                    << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                >> 0x11U));
            vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                = (0x7fU & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[7U] 
                             << 0xfU) | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                         >> 0x11U)));
        }
    } else if (vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                     >> 9U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[5U] 
                                                      << 0x17U) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                        >> 9U)));
    } else {
        vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[0U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] = ((
                                                   vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[1U] 
                                                     >> 1U));
        vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] = (0x7fU 
                                                  & ((vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[3U] 
                                                      << 0x1fU) 
                                                     | (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                        >> 1U)));
    }
    vlSelfRef.__PVT__sbr_ports_req = (((8U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[6U] 
                                              >> 0x15U)) 
                                       | (4U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[4U] 
                                                >> 0xeU))) 
                                      | ((2U & (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[2U] 
                                                >> 7U)) 
                                         | (1U & vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_mux__BRA__4__KET____DOT__i_mux__sbr_ports_req_i[0U])));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__sbr_ports_req));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = (((0xfffffff8U & (((3U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | ((0xfffffffeU & (((1U <= (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
              | (1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((0xfffffff8U & (((3U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                             << 3U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
            | (0xfffffffcU & (((2U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
           | (0xfffffffeU & (((1U > (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (IData)((0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__mgr_port_req = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                     | (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                               ? 2U : 3U));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                               ? 2U : 3U));
    vlSelfRef.mgr_port_req_o[0U] = ((0xfffffffeU & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                       & (IData)(vlSelfRef.__PVT__mgr_port_req)));
    vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.__Vcellinp__i_rr_arb__gnt_i) 
            & (IData)(vlSelfRef.__PVT__mgr_port_req))
            ? (((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (0U != (0xcU & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))))
                ? (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__4(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___act_comb__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__4\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mgr_port_req_o[0U] = (0xffffffe3U & vlSelfRef.mgr_port_req_o[0U]);
    vlSelfRef.mgr_port_req_o[0U] = ((3U & vlSelfRef.mgr_port_req_o[0U]) 
                                    | ((0xffffffe0U 
                                        & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           << 3U)) 
                                       | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                << 1U))));
    vlSelfRef.mgr_port_req_o[1U] = ((3U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                           >> 0x1dU)) 
                                    | (((0x18U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                  << 3U)) 
                                        | (4U & (vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                 >> 0x1dU))) 
                                       | (0xffffffe0U 
                                          & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                             << 3U))));
    vlSelfRef.mgr_port_req_o[2U] = (0x3ffU & ((3U & 
                                               (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                >> 0x1dU)) 
                                              | (((0x18U 
                                                   & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                      << 3U)) 
                                                  | (4U 
                                                     & (vlSelfRef.__PVT__mgr_port_a_in_sbr[1U] 
                                                        >> 0x1dU))) 
                                                 | (0x3e0U 
                                                    & (vlSelfRef.__PVT__mgr_port_a_in_sbr[2U] 
                                                       << 3U)))));
    vlSelfRef.mgr_port_req_o[0U] = ((0xffffffe1U & 
                                     vlSelfRef.mgr_port_req_o[0U]) 
                                    | (0xfffffffeU 
                                       & ((0x18U & 
                                           ((IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            << 3U)) 
                                          | (6U & (
                                                   vlSelfRef.__PVT__mgr_port_a_in_sbr[0U] 
                                                   << 1U)))));
    vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i 
        = (1U & (vlSelfRef.mgr_port_req_o[0U] & (IData)(
                                                        (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp 
                                                         >> 1U))));
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp)) 
          & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.__Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.__PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}
