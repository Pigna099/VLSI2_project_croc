// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__6(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__6\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__1223__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__1223__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__1223__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__1223__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1226__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1226__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1228__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1228__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1230__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1230__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1232__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1232__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1238__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1238__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1240__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1240__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1243__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1243__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1245__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1245__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1247__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1247__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1253__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1253__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1254__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1254__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1256__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1256__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1258__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1258__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__1223__wait_sba = 1U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__1223__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__1223__data = 0x78000U;
    __Vtask_tb_croc_soc__DOT__jtag_write__1223__addr = 0x38U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__1223__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__1223__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__1224__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode))) {
            goto __Vlabel268;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1226__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1226__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1228__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1228__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1230__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1230__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1232__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1232__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__1234__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1238__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1238__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1240__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1240__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__1225__opcode;
        __Vlabel268: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1243__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1243__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1245__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1245__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1247__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1247__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1249__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1253__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1253__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1254__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1254__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1256__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1256__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1258__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1258__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__9(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__9\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__2016__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__2016__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__2016__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__2016__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2019__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2019__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2021__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2021__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2023__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2023__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2025__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2025__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2033__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2033__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2036__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2036__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2046__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2046__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2047__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2047__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2049__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2049__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2051__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2051__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__2016__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__2016__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__2016__data = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__2016__addr = 0x3aU;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__2016__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__2016__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2017__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode))) {
            goto __Vlabel269;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2019__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2019__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2021__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2021__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2023__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2023__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2025__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2025__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2027__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2031__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2033__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2033__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2018__opcode;
        __Vlabel269: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2036__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2036__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2038__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2040__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2042__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2046__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2046__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2047__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2047__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2049__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2049__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2051__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2051__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__12(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__12\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__2810__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__2810__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__2810__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__2810__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2813__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2813__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2815__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2815__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2817__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2817__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2819__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2819__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2825__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2825__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2827__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2827__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2830__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2830__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2832__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2832__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2834__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2834__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2840__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2840__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2841__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2841__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2843__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2843__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2845__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2845__tms_val = 0;
    // Body
    VL_WRITEF_NX("@%t | [JTAG] Initialization success\n",0,
                 64,VL_TIME_UNITED_Q(1),-12);
    Verilated::runFlushCallbacks();
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__idle_cycles = 0xaU;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__check_write = 1U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__data = 0x12345678U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__addr = 0x10000000U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__unnamedblk3__DOT__rdata = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__sbcs = 0;
    __Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__sbcs = 0x40000U;
    VL_WRITEF_NX("@%t | [JTAG] Writing 0x%x to 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__data,
                 32,vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__addr);
    Verilated::runFlushCallbacks();
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__2810__wait_sba = 1U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__2810__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__2810__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_write__2810__addr = 0x38U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__2810__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__2810__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__2811__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode))) {
            goto __Vlabel270;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2813__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2813__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2815__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2815__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2817__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2817__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2819__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2819__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__2821__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2825__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2825__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2827__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2827__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__2812__opcode;
        __Vlabel270: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2830__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2830__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2832__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2832__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2834__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2834__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__2836__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2840__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__2840__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2841__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2841__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2843__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2843__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2845__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__2845__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__15(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__15\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__3603__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__3603__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__3603__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__3603__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3606__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3606__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3608__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3608__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3610__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3610__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3612__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3612__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3618__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3618__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3620__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3620__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3623__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3623__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3625__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3625__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3627__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3627__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3633__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3633__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3634__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3634__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3636__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3636__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3638__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3638__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__3603__data 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__3603__addr = 0x39U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__3603__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__3603__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__3604__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode))) {
            goto __Vlabel271;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3606__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3606__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3608__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3608__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3610__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3610__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3612__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3612__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3614__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3618__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3618__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3620__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3620__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3605__opcode;
        __Vlabel271: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3623__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3623__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3625__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3625__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3627__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3627__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3629__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3633__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3633__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3634__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3634__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3636__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3636__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3638__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3638__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__18(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__18\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__4396__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__data 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr = 0x3cU;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__4396__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode))) {
            goto __Vlabel272;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode;
        __Vlabel272: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__21(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__21\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__5189__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__5189__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    // Body
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__5189__cycles 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__idle_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__5189__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__5190__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__25(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__25\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7843__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7843__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7845__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7845__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7847__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7847__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7849__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7849__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7855__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7855__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7857__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7857__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7860__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7860__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7862__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7862__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7864__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7864__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7870__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7870__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7871__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7871__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7873__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7873__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7875__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7875__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__7878__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__7878__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__7878__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__7878__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7881__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7881__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7883__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7883__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7885__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7885__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7887__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7887__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7893__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7893__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7895__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7895__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7898__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7898__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7900__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7900__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7902__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7902__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7908__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7908__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7909__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7909__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7911__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7911__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7913__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7913__tms_val = 0;
    // Body
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__data = 0x78000U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__address = 0x38U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7841__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode))) {
            goto __Vlabel273;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7843__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7843__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7845__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7845__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7847__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7847__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7849__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7849__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7851__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7855__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7855__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7857__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7857__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7842__opcode;
        __Vlabel273: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7860__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7860__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7862__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7862__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7864__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7864__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7866__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7870__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7870__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7871__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7871__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7873__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7873__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7875__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7875__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    VL_FCLOSE_I(vlSelfRef.tb_croc_soc__DOT__jtag_load_hex__Vstatic__file); VL_WRITEF_NX("@%t | [CORE] Start fetching instructions\n",0,
                                                                                64,
                                                                                VL_TIME_UNITED_Q(1),
                                                                                -12);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_croc_soc__DOT__fetch_en_i = 1U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_halt__7877__status = VL_RAND_RESET_I(32);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__7878__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__7878__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__7878__data = 0x80000001U;
    __Vtask_tb_croc_soc__DOT__jtag_write__7878__addr = 0x10U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__7878__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__7878__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__7879__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode))) {
            goto __Vlabel274;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7881__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7881__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7883__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7883__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7885__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7885__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7887__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7887__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__7889__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7893__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7893__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7895__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7895__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__7880__opcode;
        __Vlabel274: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7898__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7898__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7900__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7900__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7902__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7902__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__tms_last = 1U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata[__Vilp2] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__7904__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7908__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__7908__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7909__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7909__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7911__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7911__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7913__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__7913__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}
