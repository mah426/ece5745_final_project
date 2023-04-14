// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortXcel.h for the primary calling header

#include "VSortXcel.h"
#include "VSortXcel__Syms.h"

#include "verilated_dpi.h"

//==========

void VSortXcel::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSortXcel::eval\n"); );
    VSortXcel__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("lab2_xcel/SortXcel.v", 534, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSortXcel::_eval_initial_loop(VSortXcel__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("lab2_xcel/SortXcel.v", 534, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__line_trace_TOP(VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val;
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__char;
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val;
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__23__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__36__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__37__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num;
    IData/*31:0*/ __Vilp;
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlTOPp->xcel_reqstream_msg 
                                                        >> 0x25U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->xcel_reqstream_msg >> 0x25U)))) {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:%x",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))),
                     32,(IData)(vlTOPp->xcel_reqstream_msg));
    } else {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:        ",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy 
        = vlTOPp->xcel_reqstream_rdy;
    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val 
        = vlTOPp->xcel_reqstream_val;
    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy) 
         & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[__Vilp] 
                = __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy) 
             & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val)))) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__num 
                = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__char);
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy)) 
                 & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val))) {
                __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__num 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__char = 0x20U;
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__char);
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy)) 
                           & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val))))) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x28U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
    if ((8U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((4U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x3f20U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[0U] = 0x3f20U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[0U] = 0x5732U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[0U] = 0x5731U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[0U] = 0x5730U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[0U] = 0x5234U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            } else {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[0U] = 0x5233U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[0U] = 0x5232U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[0U] = 0x5231U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[0U] = 0x5253U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            } else {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[0U] = 0x5820U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[0U] = 0x3f20U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__str
                 ,"|%x|%x|val_reg:%x|req_rdy:%x|  ",
                 32,((vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                      << 0x1eU) | (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                   >> 2U)),32,vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[0U],
                 11,(IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg),
                 1,vlTOPp->mem_reqstream_rdy);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__23__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
    if ((8U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((4U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[0U] = 0x3f20U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[0U] = 0x3f20U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[0U] = 0x5732U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[0U] = 0x5731U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[0U] = 0x5730U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[0U] = 0x5234U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            } else {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[0U] = 0x5233U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__30__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[0U] = 0x5232U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__31__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[0U] = 0x5231U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__32__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[0U] = 0x5253U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__33__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            } else {
                if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[0U] = 0x5820U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__34__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[0U] = 0x3f20U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__35__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__str
                 ,"|in:%x|req_val:%x|resp_vld:%x|",
                 32,(IData)(vlTOPp->mem_respstream_msg),
                 1,vlTOPp->mem_reqstream_val,1,(IData)(vlTOPp->mem_respstream_val));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__36__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__36__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__36__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__36__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__36__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__str
                 ,"|%x|%x|",32,vlTOPp->SortXcel__DOT__v__DOT__value_1_in,
                 32,vlTOPp->SortXcel__DOT__v__DOT__value_2_in);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__37__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__37__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__37__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__37__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__37__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
    __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[0U] = 0x29U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_SortXcel__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__vc_trace__DOT__idx0;
    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy 
        = vlTOPp->xcel_respstream_rdy;
    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val 
        = vlTOPp->xcel_respstream_val;
    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy) 
         & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[__Vilp] 
                = __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy) 
             & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val)))) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num 
                = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char = 0x20U;
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char);
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy)) 
                 & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val))) {
                __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char = 0x20U;
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char);
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy)) 
                           & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val))))) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP(VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val;
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__51__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__53__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__55__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__57__char;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__50__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__51__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__53__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__55__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__57__num;
    IData/*31:0*/ __Vilp;
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlTOPp->xcel_reqstream_msg 
                                                        >> 0x25U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->xcel_reqstream_msg >> 0x25U)))) {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:%x",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))),
                     32,(IData)(vlTOPp->xcel_reqstream_msg));
    } else {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:        ",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy 
        = vlTOPp->xcel_reqstream_rdy;
    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val 
        = vlTOPp->xcel_reqstream_val;
    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy) 
         & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__50__str[__Vilp] 
                = __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__50__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__50__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__50__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__50__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy) 
             & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val)))) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__51__num 
                = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__51__char = 0x20U;
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__51__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__51__char);
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy)) 
                 & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))) {
                __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__52__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__53__num 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__53__char = 0x20U;
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__53__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__53__char);
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy)) 
                           & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))))) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__54__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__55__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__55__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__55__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__55__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__56__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__57__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__57__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__57__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__57__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val;
    CData/*0:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char;
    CData/*7:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[128];
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num;
    WData/*4095:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[128];
    IData/*31:0*/ __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num;
    IData/*31:0*/ __Vilp;
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[__Vilp] 
            = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy 
        = vlTOPp->xcel_respstream_rdy;
    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val 
        = vlTOPp->xcel_respstream_val;
    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy) 
         & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[__Vilp] 
                = __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy) 
             & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val)))) {
            __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num 
                = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char = 0x20U;
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char);
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy)) 
                 & (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))) {
                __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num 
                    = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char = 0x20U;
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char);
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy)) 
                           & (~ (IData)(__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))))) {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num 
                        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char = 0x20U;
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char);
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VSortXcel::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VSortXcel__Vcb_line_trace_t __Vcb = (VSortXcel__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VSortXcel__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VSortXcel::_sequent__TOP__1(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_sequent__TOP__1\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__SortXcel__DOT__v__DOT__state_reg;
    // Body
    __Vdly__SortXcel__DOT__v__DOT__state_reg = vlTOPp->SortXcel__DOT__v__DOT__state_reg;
    vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg 
        = ((0x7feU & ((IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg) 
                      << 1U)) | (IData)(vlTOPp->mem_respstream_val));
    vlTOPp->SortXcel__DOT__v__DOT__base_src = vlTOPp->SortXcel__DOT__v__DOT__base_src_in;
    vlTOPp->SortXcel__DOT__v__DOT__counter = vlTOPp->SortXcel__DOT__v__DOT__counter_in;
    vlTOPp->SortXcel__DOT__v__DOT__size = vlTOPp->SortXcel__DOT__v__DOT__size_in;
    vlTOPp->SortXcel__DOT__v__DOT__idx = vlTOPp->SortXcel__DOT__v__DOT__idx_in;
    vlTOPp->SortXcel__DOT__v__DOT__read4_flag = vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in;
    if (vlTOPp->reset) {
        __Vdly__SortXcel__DOT__v__DOT__state_reg = 0U;
    } else {
        __Vdly__SortXcel__DOT__v__DOT__state_reg = vlTOPp->SortXcel__DOT__v__DOT__state_reg;
        if ((8U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((4U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                __Vdly__SortXcel__DOT__v__DOT__state_reg = 0U;
            } else {
                if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    __Vdly__SortXcel__DOT__v__DOT__state_reg = 0U;
                } else {
                    if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (((IData)(vlTOPp->SortXcel__DOT__v__DOT__write2_flag_in) 
                             & (IData)(vlTOPp->mem_reqstream_rdy))) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 3U;
                        }
                    } else {
                        if (((IData)(vlTOPp->mem_reqstream_rdy) 
                             & (IData)(vlTOPp->SortXcel__DOT__v__DOT__write1_flag_in))) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 9U;
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (((IData)(vlTOPp->mem_reqstream_rdy) 
                             & (IData)(vlTOPp->SortXcel__DOT__v__DOT__write0_flag_in))) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 8U;
                        }
                    } else {
                        if (vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in) {
                            if (vlTOPp->SortXcel__DOT__v__DOT__swap_flag_in) {
                                if (vlTOPp->mem_reqstream_rdy) {
                                    __Vdly__SortXcel__DOT__v__DOT__state_reg = 7U;
                                }
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__swap_flag_in)))) {
                                    __Vdly__SortXcel__DOT__v__DOT__state_reg = 3U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (((IData)(vlTOPp->mem_reqstream_rdy) 
                             & (IData)(vlTOPp->SortXcel__DOT__v__DOT__read3_flag_in))) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 6U;
                        }
                    } else {
                        if (((IData)(vlTOPp->mem_reqstream_rdy) 
                             & (IData)(vlTOPp->SortXcel__DOT__v__DOT__read2_flag_in))) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 5U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->SortXcel__DOT__v__DOT__result) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 1U;
                        } else {
                            if (((IData)(vlTOPp->mem_reqstream_rdy) 
                                 & (IData)(vlTOPp->SortXcel__DOT__v__DOT__read1_flag_in))) {
                                __Vdly__SortXcel__DOT__v__DOT__state_reg = 4U;
                            }
                        }
                    } else {
                        if (vlTOPp->mem_reqstream_rdy) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 3U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (((IData)(vlTOPp->SortXcel__DOT__v__DOT__go) 
                             & (IData)(vlTOPp->xcel_respstream_rdy))) {
                            __Vdly__SortXcel__DOT__v__DOT__state_reg = 2U;
                        }
                    } else {
                        __Vdly__SortXcel__DOT__v__DOT__state_reg = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__state_reg = __Vdly__SortXcel__DOT__v__DOT__state_reg;
    vlTOPp->SortXcel__DOT__v__DOT__result = vlTOPp->SortXcel__DOT__v__DOT__result_in;
}

VL_INLINE_OPT void VSortXcel::_settle__TOP__2(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_settle__TOP__2\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->xcel_reqstream_rdy = 0U;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            vlTOPp->xcel_reqstream_rdy = vlTOPp->xcel_respstream_rdy;
        }
    }
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->mem_respstream_rdy = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if (((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                         & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                        vlTOPp->mem_respstream_rdy = 1U;
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        vlTOPp->mem_respstream_rdy = 1U;
                    } else {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            vlTOPp->mem_respstream_rdy = 1U;
                        } else {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        vlTOPp->mem_respstream_rdy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__go = 0U;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__go = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__base_src_in = vlTOPp->SortXcel__DOT__v__DOT__base_src;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U != (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        if ((1U == (0x1fU & (IData)(
                                                    (vlTOPp->xcel_reqstream_msg 
                                                     >> 0x20U))))) {
                            vlTOPp->SortXcel__DOT__v__DOT__base_src_in 
                                = (IData)(vlTOPp->xcel_reqstream_msg);
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__read2_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->mem_respstream_val) {
                            vlTOPp->SortXcel__DOT__v__DOT__read2_flag_in = 1U;
                        }
                    } else {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            vlTOPp->SortXcel__DOT__v__DOT__read2_flag_in = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__write1_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                vlTOPp->SortXcel__DOT__v__DOT__write1_flag_in = 0U;
                            } else {
                                if ((7U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((1U & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                                        vlTOPp->SortXcel__DOT__v__DOT__write1_flag_in = 0U;
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if (vlTOPp->mem_respstream_val) {
                                            vlTOPp->SortXcel__DOT__v__DOT__write1_flag_in = 1U;
                                        }
                                    } else {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->mem_respstream_val) {
                                                vlTOPp->SortXcel__DOT__v__DOT__write1_flag_in = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__size_in = vlTOPp->SortXcel__DOT__v__DOT__size;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U != (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        if ((1U != (0x1fU & (IData)(
                                                    (vlTOPp->xcel_reqstream_msg 
                                                     >> 0x20U))))) {
                            if ((2U == (0x1fU & (IData)(
                                                        (vlTOPp->xcel_reqstream_msg 
                                                         >> 0x20U))))) {
                                vlTOPp->SortXcel__DOT__v__DOT__size_in 
                                    = (IData)(vlTOPp->xcel_reqstream_msg);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__write2_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if (((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                         & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                        vlTOPp->SortXcel__DOT__v__DOT__write2_flag_in = 0U;
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                vlTOPp->SortXcel__DOT__v__DOT__write2_flag_in = 0U;
                            } else {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if (vlTOPp->mem_respstream_val) {
                                            vlTOPp->SortXcel__DOT__v__DOT__write2_flag_in = 0U;
                                        }
                                    } else {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->mem_respstream_val) {
                                                vlTOPp->SortXcel__DOT__v__DOT__write2_flag_in = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__read1_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    vlTOPp->SortXcel__DOT__v__DOT__read1_flag_in 
                        = ((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                           & (~ (IData)(vlTOPp->mem_respstream_val)));
                } else {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        vlTOPp->SortXcel__DOT__v__DOT__read1_flag_in = 0U;
                    } else {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->mem_respstream_val) {
                                                vlTOPp->SortXcel__DOT__v__DOT__read1_flag_in = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__write0_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    vlTOPp->SortXcel__DOT__v__DOT__write0_flag_in = 0U;
                                }
                            } else {
                                if ((7U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((1U & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                                        vlTOPp->SortXcel__DOT__v__DOT__write0_flag_in = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if (((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                         & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                        vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 0U;
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->mem_respstream_val) {
                            vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 0U;
                        }
                    } else {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if (((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                                 & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                                vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 0U;
                            }
                        } else {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 1U;
                                }
                            } else {
                                if ((7U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((1U & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                                        vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 0U;
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        vlTOPp->SortXcel__DOT__v__DOT__read4_flag_in = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__read3_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->mem_respstream_val) {
                            vlTOPp->SortXcel__DOT__v__DOT__read3_flag_in = 0U;
                        }
                    } else {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            vlTOPp->SortXcel__DOT__v__DOT__read3_flag_in 
                                = ((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                                   & (~ (IData)(vlTOPp->mem_respstream_val)));
                        } else {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    vlTOPp->SortXcel__DOT__v__DOT__read3_flag_in = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__counter_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    if ((vlTOPp->SortXcel__DOT__v__DOT__idx 
                                         >= ((vlTOPp->SortXcel__DOT__v__DOT__size 
                                              - vlTOPp->SortXcel__DOT__v__DOT__counter) 
                                             - (IData)(2U)))) {
                                        vlTOPp->SortXcel__DOT__v__DOT__counter_in 
                                            = ((IData)(1U) 
                                               + vlTOPp->SortXcel__DOT__v__DOT__counter);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->mem_reqstream_val = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                vlTOPp->mem_reqstream_val = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    vlTOPp->mem_reqstream_val = ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                                                 & (~ (IData)(vlTOPp->mem_respstream_val)));
                } else {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->mem_respstream_val) {
                            vlTOPp->mem_reqstream_val = 0U;
                        }
                    } else {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            vlTOPp->mem_reqstream_val 
                                = ((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                                   & (~ (IData)(vlTOPp->mem_respstream_val)));
                        } else {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    vlTOPp->mem_reqstream_val = 0U;
                                }
                            } else {
                                if ((7U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((1U & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                                        vlTOPp->mem_reqstream_val = 1U;
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if (vlTOPp->mem_respstream_val) {
                                            vlTOPp->mem_reqstream_val = 1U;
                                        }
                                    } else {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->mem_respstream_val) {
                                                vlTOPp->mem_reqstream_val = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->xcel_respstream_val = 0U;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            vlTOPp->xcel_respstream_val = vlTOPp->xcel_reqstream_val;
        }
    }
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[0U] = 0U;
        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] = 0U;
        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__idx_in = 0U;
                        vlTOPp->SortXcel__DOT__v__DOT__swap_flag_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if (((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                         & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                            = (0x3ffU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]);
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                            = ((3U & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]) 
                               | (0xfffffffcU & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                  + 
                                                  (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                                   << 2U)) 
                                                 << 2U)));
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                            = ((0x1ffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]) 
                               | (3U & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                         + (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                            << 2U)) 
                                        >> 0x1eU)));
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                            = (0xfffffffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]);
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->mem_respstream_val) {
                            vlTOPp->SortXcel__DOT__v__DOT__value_1_in 
                                = (IData)(vlTOPp->mem_respstream_msg);
                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                = (0x3ffU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]);
                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                = ((3U & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]) 
                                   | (0xfffffffcU & 
                                      ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                        + (((IData)(1U) 
                                            + vlTOPp->SortXcel__DOT__v__DOT__idx) 
                                           << 2U)) 
                                       << 2U)));
                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                = ((0x1ffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]) 
                                   | (3U & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                             + (((IData)(1U) 
                                                 + vlTOPp->SortXcel__DOT__v__DOT__idx) 
                                                << 2U)) 
                                            >> 0x1eU)));
                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                = (0xfffffffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]);
                        }
                    } else {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if (((0U == (0xfU & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_respstream_val_reg))) 
                                 & (~ (IData)(vlTOPp->mem_respstream_val)))) {
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                    = (0x3ffU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]);
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                    = ((3U & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]) 
                                       | (0xfffffffcU 
                                          & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                              + (((IData)(1U) 
                                                  + vlTOPp->SortXcel__DOT__v__DOT__idx) 
                                                 << 2U)) 
                                             << 2U)));
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                    = ((0x1ffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]) 
                                       | (3U & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                 + 
                                                 (((IData)(1U) 
                                                   + vlTOPp->SortXcel__DOT__v__DOT__idx) 
                                                  << 2U)) 
                                                >> 0x1eU)));
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                    = (0xfffffffcU 
                                       & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]);
                            }
                        } else {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    vlTOPp->SortXcel__DOT__v__DOT__value_2_in 
                                        = (IData)(vlTOPp->mem_respstream_msg);
                                    if ((vlTOPp->SortXcel__DOT__v__DOT__value_2_in 
                                         < vlTOPp->SortXcel__DOT__v__DOT__value_1_in)) {
                                        vlTOPp->SortXcel__DOT__v__DOT__swap_flag_in = 1U;
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                            = (0x400U 
                                               | (0x3ffU 
                                                  & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]));
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                            = ((3U 
                                                & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]) 
                                               | (0xfffffffcU 
                                                  & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                      + 
                                                      (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                                       << 2U)) 
                                                     << 2U)));
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                            = ((0x1ffcU 
                                                & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]) 
                                               | (3U 
                                                  & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                      + 
                                                      (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                                       << 2U)) 
                                                     >> 0x1eU)));
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[0U] 
                                            = vlTOPp->SortXcel__DOT__v__DOT__value_2_in;
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                            = (0xfffffffcU 
                                               & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]);
                                    } else {
                                        vlTOPp->SortXcel__DOT__v__DOT__swap_flag_in = 0U;
                                    }
                                    vlTOPp->SortXcel__DOT__v__DOT__idx_in 
                                        = ((IData)(1U) 
                                           + vlTOPp->SortXcel__DOT__v__DOT__idx);
                                    if ((vlTOPp->SortXcel__DOT__v__DOT__idx 
                                         >= ((vlTOPp->SortXcel__DOT__v__DOT__size 
                                              - vlTOPp->SortXcel__DOT__v__DOT__counter) 
                                             - (IData)(2U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__swap_flag_in)))) {
                                            vlTOPp->SortXcel__DOT__v__DOT__idx_in = 0U;
                                        }
                                    }
                                }
                            } else {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if (vlTOPp->mem_respstream_val) {
                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                                = (0x400U 
                                                   | (0x3ffU 
                                                      & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]));
                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                                = (
                                                   (3U 
                                                    & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]) 
                                                   | (0xfffffffcU 
                                                      & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                          + 
                                                          (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                                           << 2U)) 
                                                         << 2U)));
                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                                = (
                                                   (0x1ffcU 
                                                    & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]) 
                                                   | (3U 
                                                      & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                          + 
                                                          (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                                           << 2U)) 
                                                         >> 0x1eU)));
                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[0U] 
                                                = vlTOPp->SortXcel__DOT__v__DOT__value_1_in;
                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                                = (0xfffffffcU 
                                                   & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U]);
                                        }
                                    } else {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->mem_respstream_val) {
                                                vlTOPp->SortXcel__DOT__v__DOT__value_1_in = 0U;
                                                vlTOPp->SortXcel__DOT__v__DOT__value_2_in = 0U;
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                                    = 
                                                    (0x3ffU 
                                                     & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U]);
                                                if (
                                                    (vlTOPp->SortXcel__DOT__v__DOT__idx 
                                                     >= 
                                                     (vlTOPp->SortXcel__DOT__v__DOT__size 
                                                      - vlTOPp->SortXcel__DOT__v__DOT__counter))) {
                                                    vlTOPp->SortXcel__DOT__v__DOT__idx_in = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    if ((0U == (0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__result_in = 0U;
                    }
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (((IData)(vlTOPp->mem_respstream_val) 
                                     & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__read4_flag)))) {
                                    if ((vlTOPp->SortXcel__DOT__v__DOT__idx 
                                         >= ((vlTOPp->SortXcel__DOT__v__DOT__size 
                                              - vlTOPp->SortXcel__DOT__v__DOT__counter) 
                                             - (IData)(2U)))) {
                                        if ((vlTOPp->SortXcel__DOT__v__DOT__counter 
                                             >= (vlTOPp->SortXcel__DOT__v__DOT__size 
                                                 - (IData)(2U)))) {
                                            vlTOPp->SortXcel__DOT__v__DOT__result_in = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if (vlTOPp->xcel_reqstream_val) {
                if ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                                   >> 0x25U)))) {
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                        = (0x100000000ULL | vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw);
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                        = (0x100000000ULL & vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw);
                } else {
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                        = (0xffffffffULL & vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw);
                    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                        = ((0x100000000ULL & vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw) 
                           | (IData)((IData)(vlTOPp->SortXcel__DOT__v__DOT__result)));
                }
            }
        }
    }
    vlTOPp->mem_reqstream_msg[0U] = (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[0U] 
                                     & (- (IData)((IData)(vlTOPp->mem_reqstream_val))));
    vlTOPp->mem_reqstream_msg[1U] = (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[1U] 
                                     & (- (IData)((IData)(vlTOPp->mem_reqstream_val))));
    vlTOPp->mem_reqstream_msg[2U] = (0x3fffU & (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_msg_raw[2U] 
                                                & (- (IData)((IData)(vlTOPp->mem_reqstream_val)))));
    vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
           & (- (QData)((IData)(vlTOPp->xcel_respstream_val))));
    vlTOPp->xcel_respstream_msg = vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg;
}

void VSortXcel::_eval(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_eval\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSortXcel::_change_request(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_change_request\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSortXcel::_change_request_1(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_change_request_1\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSortXcel::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((mem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("mem_reqstream_rdy");}
    if (VL_UNLIKELY((mem_respstream_msg & 0ULL))) {
        Verilated::overWidthError("mem_respstream_msg");}
    if (VL_UNLIKELY((mem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("mem_respstream_val");}
    if (VL_UNLIKELY((xcel_reqstream_msg & 0ULL))) {
        Verilated::overWidthError("xcel_reqstream_msg");}
    if (VL_UNLIKELY((xcel_reqstream_val & 0xfeU))) {
        Verilated::overWidthError("xcel_reqstream_val");}
    if (VL_UNLIKELY((xcel_respstream_rdy & 0xfeU))) {
        Verilated::overWidthError("xcel_respstream_rdy");}
}
#endif  // VL_DEBUG
