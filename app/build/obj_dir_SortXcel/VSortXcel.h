// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSORTXCEL_H_
#define _VSORTXCEL_H_  // guard

#include "verilated_heavy.h"
#include "VSortXcel__Dpi.h"

//==========

class VSortXcel__Syms;

//----------

VL_MODULE(VSortXcel) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mem_reqstream_rdy,0,0);
    VL_OUT8(mem_reqstream_val,0,0);
    VL_OUT8(mem_respstream_rdy,0,0);
    VL_IN8(mem_respstream_val,0,0);
    VL_OUT8(xcel_reqstream_rdy,0,0);
    VL_IN8(xcel_reqstream_val,0,0);
    VL_IN8(xcel_respstream_rdy,0,0);
    VL_OUT8(xcel_respstream_val,0,0);
    VL_OUTW(mem_reqstream_msg,76,0,3);
    VL_IN64(mem_respstream_msg,46,0);
    VL_IN64(xcel_reqstream_msg,37,0);
    VL_OUT64(xcel_respstream_msg,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ SortXcel__DOT__v__DOT__result;
    CData/*0:0*/ SortXcel__DOT__v__DOT__result_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__swap_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__read1_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__read2_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__read3_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__read4_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__write0_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__write1_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__write2_flag_in;
    CData/*0:0*/ SortXcel__DOT__v__DOT__read4_flag;
    CData/*3:0*/ SortXcel__DOT__v__DOT__state_reg;
    CData/*0:0*/ SortXcel__DOT__v__DOT__go;
    SData/*10:0*/ SortXcel__DOT__v__DOT__mem_respstream_val_reg;
    SData/*15:0*/ SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str;
    SData/*15:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str;
    IData/*31:0*/ SortXcel__DOT__v__DOT__idx;
    IData/*31:0*/ SortXcel__DOT__v__DOT__idx_in;
    IData/*31:0*/ SortXcel__DOT__v__DOT__size;
    IData/*31:0*/ SortXcel__DOT__v__DOT__size_in;
    IData/*31:0*/ SortXcel__DOT__v__DOT__base_src;
    IData/*31:0*/ SortXcel__DOT__v__DOT__base_src_in;
    IData/*31:0*/ SortXcel__DOT__v__DOT__value_1_in;
    IData/*31:0*/ SortXcel__DOT__v__DOT__value_2_in;
    IData/*31:0*/ SortXcel__DOT__v__DOT__counter;
    IData/*31:0*/ SortXcel__DOT__v__DOT__counter_in;
    WData/*4095:0*/ SortXcel__DOT__v__DOT__str[128];
    WData/*4095:0*/ SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[128];
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
    WData/*4095:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[128];
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1;
    IData/*31:0*/ SortXcel__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ SortXcel__DOT__v__DOT__vc_trace__DOT__idx1;
    QData/*32:0*/ SortXcel__DOT__v__DOT__xcel_respstream_msg_raw;
    WData/*76:0*/ SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*32:0*/ SortXcel__DOT____Vcellout__v__xcel_respstream_msg;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSortXcel__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSortXcel);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSortXcel(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSortXcel();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSortXcel__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSortXcel__Syms* symsp, bool first);
    static void __Vdpiexp_SortXcel__DOT__v__DOT__line_trace_TOP(VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP(VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VSortXcel__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSortXcel__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSortXcel__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSortXcel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSortXcel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VSortXcel__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSortXcel__Syms* __restrict vlSymsp);
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
