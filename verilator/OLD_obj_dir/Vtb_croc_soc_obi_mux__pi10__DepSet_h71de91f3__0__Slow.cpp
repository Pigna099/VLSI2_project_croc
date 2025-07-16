// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc_obi_mux__pi10.h"

VL_ATTR_COLD void Vtb_croc_soc_obi_mux__pi10___stl_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___stl_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__0\n"); );
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
    vlSelfRef.__PVT__response_id = (3U & ((IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q), 1U))));
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
}

VL_ATTR_COLD void Vtb_croc_soc_obi_mux__pi10___stl_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___stl_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__0\n"); );
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
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                                                        >> 1U)));
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
}

VL_ATTR_COLD void Vtb_croc_soc_obi_mux__pi10___stl_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__0(Vtb_croc_soc_obi_mux__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_croc_soc_obi_mux__pi10___stl_sequent__TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__0\n"); );
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
    vlSelfRef.__Vcellinp__i_rr_arb__gnt_i = ((2U != (IData)(vlSelfRef.__PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                                                        >> 1U)));
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
}
