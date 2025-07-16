// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__31(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__31\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_resume__9049__status;
    __Vtask_tb_croc_soc__DOT__jtag_resume__9049__status = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__9050__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__9050__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__9050__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__9050__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9053__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9053__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9055__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9055__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9057__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9057__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9059__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9059__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9065__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9065__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9067__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9067__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9070__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9070__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9072__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9072__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9074__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9074__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9080__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9080__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9081__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9081__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9083__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9083__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9085__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9085__tms_val = 0;
    // Body
    VL_WRITEF_NX("@%t | [JTAG] Halted\n",0,64,VL_TIME_UNITED_Q(1),
                 -12);
    Verilated::runFlushCallbacks();
    __Vtask_tb_croc_soc__DOT__jtag_resume__9049__status = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__9050__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__9050__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__9050__data = 0x40000001U;
    __Vtask_tb_croc_soc__DOT__jtag_write__9050__addr = 0x10U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__9050__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__9050__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9051__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode))) {
            goto __Vlabel283;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9053__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9053__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9055__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9055__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9057__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9057__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9059__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9059__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9061__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9065__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9065__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9067__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9067__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9052__opcode;
        __Vlabel283: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9070__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9070__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9072__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9072__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9074__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9074__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9076__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9080__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9080__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9081__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9081__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9083__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9083__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9085__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9085__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__34(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__34\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__9844__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__9844__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__9844__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__9844__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9847__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9847__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9849__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9849__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9851__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9851__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9853__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9853__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9859__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9859__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9861__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9861__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9864__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9864__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9866__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9866__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9868__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9868__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9874__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9874__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9875__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9875__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9877__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9877__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9879__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9879__tms_val = 0;
    // Body
    VL_WRITEF_NX("@%t | [JTAG] Resumed hart 0 \n@%t | [CORE] Wait for end of code...\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,VL_TIME_UNITED_Q(1),
                 -12);
    Verilated::runFlushCallbacks();
    __Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__sbcs = 0;
    __Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__sbcs = 0x140000U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__9844__wait_sba = 1U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__9844__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__9844__data 
        = __Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_write__9844__addr = 0x38U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__9844__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__9844__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__9845__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode))) {
            goto __Vlabel284;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9847__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9847__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9849__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9849__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9851__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9851__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9853__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9853__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__9855__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9859__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9859__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9861__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9861__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__9846__opcode;
        __Vlabel284: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9864__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9864__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9866__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9866__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9868__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9868__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__9870__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9874__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__9874__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9875__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9875__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9877__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9877__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9879__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__9879__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__37(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__37\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__10637__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__10637__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__10637__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__10637__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10640__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10640__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10642__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10642__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10644__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10644__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10646__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10646__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10652__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10652__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10654__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10654__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10657__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10657__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10659__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10659__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10661__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10661__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__10667__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__10667__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10668__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10668__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10670__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10670__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10672__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10672__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__10637__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__10637__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__10637__data = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__10637__addr = 0x3aU;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__10637__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__10637__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__10638__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode))) {
            goto __Vlabel285;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10640__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10640__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10642__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10642__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10644__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10644__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10646__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10646__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__10648__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10652__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10652__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10654__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10654__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__10639__opcode;
        __Vlabel285: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10657__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10657__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10659__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10659__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10661__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10661__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__10663__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__10667__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__10667__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10668__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10668__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10670__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10670__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10672__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__10672__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__40(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__40\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__11430__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__11430__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__11430__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__11430__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11433__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11433__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11435__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11435__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11437__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11437__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11439__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11439__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11445__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11445__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11447__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11447__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11450__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11450__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11452__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11452__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11454__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11454__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__11460__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__11460__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11461__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11461__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11463__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11463__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11465__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11465__tms_val = 0;
    // Body
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__11430__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__11430__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__11430__data = 0x3000008U;
    __Vtask_tb_croc_soc__DOT__jtag_write__11430__addr = 0x39U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__unnamedblk1__DOT__acs = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__unnamedblk2__DOT__sbcs = VL_RAND_RESET_I(32);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__11430__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__11430__addr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__data)) 
                                 << 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_hf6df5f1f__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__11431__unnamedblk5__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode))) {
            goto __Vlabel286;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11433__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11433__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11435__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11435__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11437__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11437__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11439__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11439__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__11441__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11445__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11445__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11447__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11447__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__11432__opcode;
        __Vlabel286: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11450__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11450__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11452__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11452__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11454__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11454__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__11456__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__11460__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__11460__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11461__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11461__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11463__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11463__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11465__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__11465__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__43(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__43\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__12223__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__12223__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data_out = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12232__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12232__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12234__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12234__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12236__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12236__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12238__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12238__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12244__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12244__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12246__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12246__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12249__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12249__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12251__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12251__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12253__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12253__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12259__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12259__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12260__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12260__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12262__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12262__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12264__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12264__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12268__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12268__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12270__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12270__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12272__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12272__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12274__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12274__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12280__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12280__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12282__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12282__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12285__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12285__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12287__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12287__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12289__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12289__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12295__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12295__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12296__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12296__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12298__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12298__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12300__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12300__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12307__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12307__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12309__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12309__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12311__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12311__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12316__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12316__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12317__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12317__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12319__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12319__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12321__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12321__tms_val = 0;
    // Body
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__12223__cycles = 0x14U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__12223__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12224__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__address = 0x3cU;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data_out = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data_out = 0ULL;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__op = VL_RAND_RESET_I(2);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__op = 0U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx = 0U;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles = 0;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles = 8U;
    if ((0U != vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__data 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__data;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0U] 
            = (1U & vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 1U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 3U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 4U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 5U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 5U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 6U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 6U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 7U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 7U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 8U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 8U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 9U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 9U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0xaU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xaU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xaU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0xbU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xbU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xbU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0xcU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xcU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xcU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0xdU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xdU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xdU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0xeU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xeU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xeU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0xfU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0xfU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0xfU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x10U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x10U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x11U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x11U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x11U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x12U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x12U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x12U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x13U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x13U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x13U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x14U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x14U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x14U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x15U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x15U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x15U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x16U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x16U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x16U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x17U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x17U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x17U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x18U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x18U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x18U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x19U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x19U] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x19U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x1aU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1aU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1aU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x1bU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1bU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1bU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x1cU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1cU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1cU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x1dU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1dU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1dU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x1eU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1eU] 
            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                     >> 0x1eU));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x1fU;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0x1fU] 
            = (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
               >> 0x1fU);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12230__unnamedblk2__DOT__i = 0x20U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode = 0x10U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 0;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode))) {
                goto __Vlabel287;
            }
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 2U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 3U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 4U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
                = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode) 
                         >> 4U));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__unnamedblk1__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12232__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12232__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12234__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12234__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12236__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12236__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12238__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12238__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 0;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 2U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 3U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 4U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__wdata
                [4U];
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__tms_last;
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12240__unnamedblk2__DOT__i = 5U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12244__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12244__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12246__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12246__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12231__opcode;
            __Vlabel287: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12249__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12249__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12251__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12251__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12253__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12253__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0xaU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0xbU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0xcU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0xeU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0xfU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x10U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x11U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x12U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x13U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x14U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x15U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x16U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x17U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x18U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x19U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x1aU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x1bU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x1cU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x1dU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x1eU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x1fU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             98);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__wdata
            [0x1fU];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12255__unnamedblk3__DOT__i = 0x20U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12259__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12259__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12260__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12260__tms_val;
            co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12262__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12262__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12264__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12264__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__wait_cycles 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__address 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out = 0ULL;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
        = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__address)))) 
                   << 0x22U));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h26138988__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk6__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode = 0x11U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 0;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode))) {
            goto __Vlabel288;
        }
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode) 
                     >> 1U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 2U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode) 
                     >> 2U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode) 
                     >> 3U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 4U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0 
            = (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode) 
                     >> 4U));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h6b89e917__0;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__unnamedblk1__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12268__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12268__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12270__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12270__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12272__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12272__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12274__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12274__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 0;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             89);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__wdata
            [4U];
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__tms_last;
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12276__unnamedblk2__DOT__i = 5U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12280__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12280__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12282__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12282__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12267__opcode;
        __Vlabel288: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12285__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12285__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12287__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12287__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12289__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12289__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         107);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12291__unnamedblk4__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12295__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12295__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12296__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12296__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12298__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12298__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12300__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12300__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12302__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12307__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12307__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12309__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12309__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12311__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12311__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
        = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__address)))) 
           << 0x22U);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 3U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 5U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 6U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 8U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xaU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xbU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0xfU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x12U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x13U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x16U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x17U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x18U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x19U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1aU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1bU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1cU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1dU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1eU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x1fU)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x21U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x22U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x23U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x24U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x25U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x26U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x27U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0 
        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__write_data_packed 
                         >> 0x28U)));
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_ha98a5ddd__0;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk7__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__tms_last = 1U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata[__Vilp2] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [1U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [2U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [3U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [4U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [5U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [6U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [7U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [8U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [9U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0xaU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0xbU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0xcU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0xdU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0xeU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0xfU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x10U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x11U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x12U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x13U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x14U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x15U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x16U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x17U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x18U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x19U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x1aU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x1bU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x1cU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x1dU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x1eU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x1fU];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x20U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x20U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x21U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x21U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x21U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x22U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x22U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x23U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x23U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x23U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x24U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x24U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x24U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x25U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x25U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x25U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x26U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x26U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x26U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x27U];
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x27U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x28U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         129);
    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__wdata
        [0x28U];
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__tms_last;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         153);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata[0x28U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_hcd5db7f3__0;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__unnamedblk6__DOT__i = 0x29U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x28U)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12313__rdata
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12316__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12316__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12317__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12317__tms_val;
        co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12319__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12319__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12321__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12321__tms_val;
    co_await vlSelfRef.__VtrigSched_hcc0dc21d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "../rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffffeULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | (IData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [1U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffffdULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 1U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 2U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [2U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffffbULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 2U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 3U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [3U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffff7ULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 3U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 4U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [4U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffffefULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 4U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 5U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [5U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffffdfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 5U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 6U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [6U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffffbfULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 6U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 7U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [7U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffff7fULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 7U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 8U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [8U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffeffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 8U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 9U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [9U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffdffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 9U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0xaU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xaU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffffbffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xaU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0xbU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xbU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffff7ffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xbU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0xcU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xcU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffefffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xcU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0xdU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xdU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffdfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xdU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0xeU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xeU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffffbfffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xeU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0xfU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0xfU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffff7fffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0xfU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x10U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x10U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffeffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x10U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x11U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x11U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffdffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x11U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x12U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x12U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffffbffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x12U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x13U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x13U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffff7ffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x13U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x14U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x14U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffefffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x14U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x15U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x15U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffdfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x15U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x16U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x16U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffffbfffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x16U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x17U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x17U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffff7fffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x17U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x18U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x18U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffeffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x18U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x19U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x19U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffdffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x19U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x1aU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1aU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fffbffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1aU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x1bU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1bU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fff7ffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1bU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x1cU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1cU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffefffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1cU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x1dU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1dU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffdfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1dU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x1eU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1eU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ffbfffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1eU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x1fU;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x1fU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1ff7fffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x1fU));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x20U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x20U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1feffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x20U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x21U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x21U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fdffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x21U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x22U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x22U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1fbffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x22U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x23U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x23U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1f7ffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x23U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x24U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x24U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1efffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x24U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x25U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x25U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1dfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x25U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x26U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x26U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x1bfffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x26U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x27U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x27U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0x17fffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x27U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x28U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
        [0x28U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
        = ((0xffffffffffULL & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h3072ef25__0)) 
              << 0x28U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__unnamedblk8__DOT__i = 0x29U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__op 
        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data 
        = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data_out 
                   >> 2U));
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__data 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__data;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__op 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12266__op;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles 
        = VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__wait_cycles);
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx 
        = ((IData)(1U) + vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12228__trial_idx);
}
