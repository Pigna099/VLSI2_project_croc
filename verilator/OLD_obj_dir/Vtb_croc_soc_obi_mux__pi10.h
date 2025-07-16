// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_croc_soc.h for the primary calling header

#ifndef VERILATED_VTB_CROC_SOC_OBI_MUX__PI10_H_
#define VERILATED_VTB_CROC_SOC_OBI_MUX__PI10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_croc_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_croc_soc_obi_mux__pi10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(testmode_i,0,0);
    CData/*3:0*/ __PVT__sbr_ports_req;
    CData/*1:0*/ __PVT__response_id;
    CData/*0:0*/ __PVT__mgr_port_req;
    CData/*0:0*/ __Vcellinp__i_rr_arb__gnt_i;
    CData/*0:0*/ __PVT__rsp_rid;
    CData/*3:0*/ __PVT__sbr_rsp_rvalid;
    CData/*0:0*/ __Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i;
    CData/*5:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__2__KET__;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__;
    CData/*1:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q;
    CData/*3:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__req_d;
    CData/*1:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
    CData/*3:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    CData/*3:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    CData/*3:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    CData/*1:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx;
    CData/*1:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__;
    CData/*1:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__;
    CData/*0:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__;
    CData/*1:0*/ __PVT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__;
    CData/*0:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock;
    CData/*0:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n;
    CData/*0:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    CData/*0:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n;
    CData/*0:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    CData/*1:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n;
    CData/*1:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    CData/*3:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n;
    CData/*3:0*/ __PVT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    VL_INW(sbr_ports_req_i,287,0,9);
    VL_OUTW(sbr_ports_rsp_o,147,0,5);
    VL_OUTW(mgr_port_req_o,73,0,3);
    VL_IN64(mgr_port_rsp_i,38,0);
    VlWide<3>/*70:0*/ __PVT__mgr_port_a_in_sbr;
    VlWide<5>/*139:0*/ __PVT__sbr_rsp_r;

    // INTERNAL VARIABLES
    Vtb_croc_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_croc_soc_obi_mux__pi10(Vtb_croc_soc__Syms* symsp, const char* v__name);
    ~Vtb_croc_soc_obi_mux__pi10();
    VL_UNCOPYABLE(Vtb_croc_soc_obi_mux__pi10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
