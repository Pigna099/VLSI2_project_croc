// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CROC_SOC__SYMS_H_
#define VERILATED_VTB_CROC_SOC__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_croc_soc.h"

// INCLUDE MODULE CLASSES
#include "Vtb_croc_soc___024root.h"
#include "Vtb_croc_soc_soc_ctrl_reg_pkg.h"
#include "Vtb_croc_soc_obi_mux__pi10.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_croc_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_croc_soc* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_croc_soc___024root         TOP;
    Vtb_croc_soc_soc_ctrl_reg_pkg  TOP__soc_ctrl_reg_pkg;
    Vtb_croc_soc_obi_mux__pi10     TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux;
    Vtb_croc_soc_obi_mux__pi10     TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux;
    Vtb_croc_soc_obi_mux__pi10     TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux;
    Vtb_croc_soc_obi_mux__pi10     TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux;
    Vtb_croc_soc_obi_mux__pi10     TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux;

    // CONSTRUCTORS
    Vtb_croc_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_croc_soc* modelp);
    ~Vtb_croc_soc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
