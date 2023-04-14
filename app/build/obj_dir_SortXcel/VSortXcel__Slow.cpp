// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortXcel.h for the primary calling header

#include "VSortXcel.h"
#include "VSortXcel__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VSortXcel) {
    VSortXcel__Syms* __restrict vlSymsp = __VlSymsp = new VSortXcel__Syms(this, name());
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSortXcel::__Vconfigure(VSortXcel__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSortXcel::~VSortXcel() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSortXcel::_eval_initial(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_eval_initial\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSortXcel::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::final\n"); );
    // Variables
    VSortXcel__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSortXcel::_eval_settle(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_eval_settle\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSortXcel::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, mem_reqstream_msg);
    mem_reqstream_rdy = VL_RAND_RESET_I(1);
    mem_reqstream_val = VL_RAND_RESET_I(1);
    mem_respstream_msg = VL_RAND_RESET_Q(47);
    mem_respstream_rdy = VL_RAND_RESET_I(1);
    mem_respstream_val = VL_RAND_RESET_I(1);
    xcel_reqstream_msg = VL_RAND_RESET_Q(38);
    xcel_reqstream_rdy = VL_RAND_RESET_I(1);
    xcel_reqstream_val = VL_RAND_RESET_I(1);
    xcel_respstream_msg = VL_RAND_RESET_Q(33);
    xcel_respstream_rdy = VL_RAND_RESET_I(1);
    xcel_respstream_val = VL_RAND_RESET_I(1);
    SortXcel__DOT____Vcellout__v__xcel_respstream_msg = VL_RAND_RESET_Q(33);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_raw = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(77, SortXcel__DOT__v__DOT__mem_reqstream_msg_raw);
    SortXcel__DOT__v__DOT__idx = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__idx_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__size = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__size_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__base_src = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__base_src_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__result = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__result_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__swap_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__read1_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__read2_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__read3_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__read4_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__write0_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__write1_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__write2_flag_in = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__read4_flag = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__mem_respstream_val_reg = VL_RAND_RESET_I(11);
    SortXcel__DOT__v__DOT__value_1_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__value_2_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__counter = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__counter_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__state_reg = VL_RAND_RESET_I(4);
    SortXcel__DOT__v__DOT__go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, SortXcel__DOT__v__DOT__str);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
