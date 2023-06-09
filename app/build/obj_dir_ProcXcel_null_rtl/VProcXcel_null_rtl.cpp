// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcXcel_null_rtl.h for the primary calling header

#include "VProcXcel_null_rtl.h"
#include "VProcXcel_null_rtl__Syms.h"

#include "verilated_dpi.h"

//==========

void VProcXcel_null_rtl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcXcel_null_rtl::eval\n"); );
    VProcXcel_null_rtl__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("proc/NullXcel.v", 230, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcXcel_null_rtl::_eval_initial_loop(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("proc/NullXcel.v", 230, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__1__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__3__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__5__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__10__char;
    CData/*4:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout;
    CData/*4:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__37__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__40__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__43__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__46__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__49__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__52__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__55__char;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout;
    SData/*11:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout;
    SData/*12:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__1__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__3__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__4__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__5__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__10__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*199:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout[7];
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst;
    IData/*19:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst;
    IData/*19:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst;
    IData/*20:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst;
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__37__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__40__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__41__str[128];
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst;
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__43__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__46__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__47__str[128];
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst;
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__49__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__52__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__53__str[128];
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout;
    IData/*31:0*/ __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst;
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__55__num;
    WData/*4095:0*/ __Vtemp29[128];
    WData/*4095:0*/ __Vtemp43[128];
    WData/*4095:0*/ __Vtemp57[128];
    WData/*4095:0*/ __Vtemp71[128];
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[0U] = 0x2fU;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__1__num = 7U;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__1__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__1__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__1__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__3__num = 7U;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__3__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__3__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__str
                             ,"%x",32,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F);
                __Vilp = 0U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__4__str[__Vilp] 
                        = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__str[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            }
        }
    } else {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__5__num = 8U;
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__5__char = 0x20U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__5__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__5__char);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[0U] = 0x2fU;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__8__num = 0x16U;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__10__num = 0x16U;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__10__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__10__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                    = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1 
                    = (0x1fU & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 0xfU));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2 
                    = (0x1fU & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 0x14U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd 
                    = (0x1fU & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 7U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr 
                    = (0xfffU & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                 >> 0x14U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct 
                    = (0x7fU & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                >> 0x19U));
                if ((9U >= (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1))) {
                    VL_SFORMAT_X(24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str
                                 ,"x0%0#",5,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1);
                } else {
                    VL_SFORMAT_X(24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str
                                 ,"x%2#",5,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1);
                }
                if ((9U >= (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2))) {
                    VL_SFORMAT_X(24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str
                                 ,"x0%0#",5,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2);
                } else {
                    VL_SFORMAT_X(24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str
                                 ,"x%2#",5,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2);
                }
                if ((9U >= (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd))) {
                    VL_SFORMAT_X(24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str
                                 ,"x0%0#",5,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd);
                } else {
                    VL_SFORMAT_X(24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str
                                 ,"x%2#",5,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd);
                }
                if ((0x7c0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr))) {
                    VL_SFORMAT_X(72,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str
                                 ,"proc2mngr");
                } else {
                    if ((0xfc0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr))) {
                        VL_SFORMAT_X(72,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str
                                     ,"mngr2proc");
                    } else {
                        if ((0xf14U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_X(72,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str
                                         ,"coreid   ");
                        } else {
                            if ((0xfc1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr))) {
                                VL_SFORMAT_X(72,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str
                                             ,"numcores ");
                            } else {
                                if ((0x7c1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str
                                                 ,"stats_en ");
                                } else {
                                    VL_SFORMAT_X(72
                                                 ,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str
                                                 ,"    0x%x",
                                                 12,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr);
                                }
                            }
                        }
                    }
                }
                VL_SFORMAT_X(16,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct_str
                             ,"%x",2,(3U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct)));
                if (((((((((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                           | (0x1073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                          | (0x13U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                         | (0U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                    if ((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                        VL_SFORMAT_X(200,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                     ,"csrr   %s, %s  ",
                                     24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                     72,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str);
                    } else {
                        if ((0x1073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_X(200,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                         ,"csrw   %s, %s  ",
                                         72,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str,
                                         24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                        } else {
                            if ((0x13U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) {
                                VL_SFORMAT_X(200,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                             ,"nop                    ");
                            } else {
                                if ((0U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) {
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"                       ");
                                } else {
                                    if ((0x33U == (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"add    %s, %s, %s   ",
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                    } else {
                                        if ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"sub    %s, %s, %s   ",
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                        } else {
                                            if ((0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"and    %s, %s, %s   ",
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                            } else {
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"or     %s, %s, %s   ",
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((0x4033U == (0xfe00707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                               | (0x2033U == (0xfe00707fU 
                                              & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                        if ((0x4033U == (0xfe00707fU 
                                         & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_X(200,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                         ,"xor    %s, %s, %s   ",
                                         24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                         24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                         24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                        } else {
                            if ((0x2033U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_X(200,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                             ,"slt    %s, %s, %s   ",
                                             24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                             24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                             24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else {
                                if ((0x3033U == (0xfe00707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"sltu   %s, %s, %s   ",
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                } else {
                                    if ((0x2000033U 
                                         == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"mul    %s, %s, %s   ",
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                                    } else {
                                        if ((0x13U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst 
                                                = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout 
                                                = (0xfffU 
                                                   & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst 
                                                      >> 0x14U));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"addi   %s, %s, 0x%x ",
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout));
                                        } else {
                                            if ((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                    = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout 
                                                    = 
                                                    (0xfffU 
                                                     & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                        >> 0x14U));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"andi   %s, %s, 0x%x ",
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             12,
                                                             (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout));
                                            } else {
                                                if (
                                                    (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout 
                                                        = 
                                                        (0xfffU 
                                                         & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                            >> 0x14U));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"ori    %s, %s, 0x%x ",
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 12,
                                                                 (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout));
                                                } else {
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout 
                                                        = 
                                                        (0xfffU 
                                                         & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                            >> 0x14U));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"xori   %s, %s, 0x%x ",
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 12,
                                                                 (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (((((((((0x2013U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                   | (0x3013U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                            if ((0x2013U == (0x707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst 
                                    = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout 
                                    = (0xfffU & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst 
                                                 >> 0x14U));
                                VL_SFORMAT_X(200,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                             ,"slti   %s, %s, 0x%x ",
                                             24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                             24,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                             12,(IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout));
                            } else {
                                if ((0x3013U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst 
                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout 
                                        = (0xfffU & 
                                           (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst 
                                            >> 0x14U));
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"sltiu  %s, %s, 0x%x ",
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                 12,
                                                 (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout));
                                } else {
                                    if ((0x40005033U 
                                         == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst 
                                            = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout 
                                            = (0x1fU 
                                               & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst 
                                                  >> 0x14U));
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"sra    %s, %s, 0x%x  ",
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     5,
                                                     (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout));
                                    } else {
                                        if ((0x5033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout 
                                                = (0x1fU 
                                                   & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                      >> 0x14U));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"srl    %s, %s, 0x%x  ",
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout));
                                        } else {
                                            if ((0x1033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                    = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                        >> 0x14U));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"sll    %s, %s, 0x%x  ",
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             5,
                                                             (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout));
                                            } else {
                                                if (
                                                    (0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout 
                                                        = 
                                                        (0x1fU 
                                                         & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                            >> 0x14U));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"srai   %s, %s, 0x%x  ",
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 5,
                                                                 (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout));
                                                } else {
                                                    if (
                                                        (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                            = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout 
                                                            = 
                                                            (0x1fU 
                                                             & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                                >> 0x14U));
                                                        VL_SFORMAT_X(200
                                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                     ,"srli   %s, %s, 0x%x  ",
                                                                     24,
                                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                     24,
                                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                     5,
                                                                     (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout));
                                                    } else {
                                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                            = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout 
                                                            = 
                                                            (0x1fU 
                                                             & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                                >> 0x14U));
                                                        VL_SFORMAT_X(200
                                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                     ,"slli   %s, %s, 0x%x  ",
                                                                     24,
                                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                     24,
                                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                     5,
                                                                     (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((((((((0x37U == (0x7fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                       | (0x17U == 
                                          (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                                if ((0x37U == (0x7fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst 
                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout 
                                        = (0xfffffU 
                                           & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst 
                                              >> 0xcU));
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"lui    %s, 0x%x    ",
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                 20,
                                                 __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout);
                                } else {
                                    if ((0x17U == (0x7fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                            = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout 
                                            = (0xfffffU 
                                               & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                                  >> 0xcU));
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"auipc  %s, 0x%x    ",
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                     20,
                                                     __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout);
                                    } else {
                                        if ((0x2003U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst 
                                                = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout 
                                                = (0xfffU 
                                                   & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst 
                                                      >> 0x14U));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"lw     %s, 0x%x(%s) ",
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                         12,
                                                         (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout),
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                                        } else {
                                            if ((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                    = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout 
                                                    = 
                                                    ((0xfe0U 
                                                      & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                           >> 7U)));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"sw     %s, 0x%x(%s) ",
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                             12,
                                                             (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout),
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                                            } else {
                                                if (
                                                    (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout 
                                                        = 
                                                        ((0x100000U 
                                                          & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                             >> 0xbU)) 
                                                         | ((0xff000U 
                                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst) 
                                                            | ((0x800U 
                                                                & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                   >> 9U)) 
                                                               | ((0x7e0U 
                                                                   & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                        >> 0x14U))))));
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"jal    %s, 0x%x   ",
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 21,
                                                                 __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout);
                                                } else {
                                                    if (
                                                        (0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst 
                                                            = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout 
                                                            = 
                                                            (0xfffU 
                                                             & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst 
                                                                >> 0x14U));
                                                        VL_SFORMAT_X(200
                                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                     ,"jalr   %s, %s, 0x%x ",
                                                                     24,
                                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                     24,
                                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                     12,
                                                                     (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout));
                                                    } else {
                                                        if (
                                                            (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                             >> 7U)))));
                                                            VL_SFORMAT_X(200
                                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                         ,"beq    %s, %s, 0x%x",
                                                                         24,
                                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                         24,
                                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                                         13,
                                                                         (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout));
                                                        } else {
                                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                             >> 7U)))));
                                                            VL_SFORMAT_X(200
                                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                         ,"bne    %s, %s, 0x%x",
                                                                         24,
                                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                         24,
                                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                                         13,
                                                                         (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x4063U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                        = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                    __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout 
                                        = ((0x1000U 
                                            & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                       >> 7U)))));
                                    VL_SFORMAT_X(200
                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                 ,"blt    %s, %s, 0x%x",
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                 24,
                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                 13,
                                                 (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout));
                                } else {
                                    if ((0x5063U == 
                                         (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                            = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                        __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout 
                                            = ((0x1000U 
                                                & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                           >> 7U)))));
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                     ,"bge    %s, %s, 0x%x",
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout));
                                    } else {
                                        if ((0x6063U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                               >> 7U)))));
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                         ,"bltu   %s, %s, 0x%x",
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                         13,
                                                         (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout));
                                        } else {
                                            if ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                    = __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                                 >> 7U)))));
                                                VL_SFORMAT_X(200
                                                             ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                             ,"bgeu   %s, %s, 0x%x",
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                             24,
                                                             vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                             13,
                                                             (IData)(__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout));
                                            } else {
                                                if (
                                                    (0xbU 
                                                     == 
                                                     (0x7fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"cust0 %s, %s, %s, %s",
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                                                 24,
                                                                 vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                                                 16,
                                                                 (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct_str));
                                                } else {
                                                    VL_SFORMAT_X(200
                                                                 ,__Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                                                 ,"illegal inst           ");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                VL_EXTEND_WW(4096,200, __Vtemp29, __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout);
                __Vilp = 0U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] 
                        = __Vtemp29[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            }
        }
    } else {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__37__num = 0x17U;
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__37__char = 0x20U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__37__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__37__char);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[0U] = 0x23U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__40__num = 3U;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__40__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__40__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__40__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X;
            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout 
                = (((((((((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                          | (0x1073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                         | (0x13U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                    | (0x4033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                    ? ((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                        ? 0x63737272U : ((0x1073U == 
                                          (0x707fU 
                                           & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x63737277U
                                          : ((0x13U 
                                              == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)
                                              ? 0x6e6f7020U
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x61646420U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x73756220U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x616e6420U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x6f722020U
                                                     : 0x786f7220U)))))))
                    : (((((((((0x2033U == (0xfe00707fU 
                                           & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                        | (0x2013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                        ? ((0x2033U == (0xfe00707fU 
                                        & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                            ? 0x736c7420U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                              ? 0x736c7475U
                                              : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x6d756c20U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x61646469U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x616e6469U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x6f726920U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x786f7269U
                                                      : 0x736c7469U)))))))
                        : (((((((((0x3013U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                            | (0x37U == (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                            ? ((0x3013U == (0x707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                ? 0x736c7449U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x73726120U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x73726c20U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x736c6c20U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x73726169U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x73726c69U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                       ? 0x736c6c69U
                                                       : 0x6c756920U)))))))
                            : (((((((((0x17U == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                | (0x4063U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                                ? ((0x17U == (0x7fU 
                                              & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                    ? 0x61756950U : 
                                   ((0x2003U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                     ? 0x6c772020U : 
                                    ((0x2023U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                      ? 0x73772020U
                                      : ((0x6fU == 
                                          (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x6a616c20U
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                              ? 0x6a616c72U
                                              : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x62657120U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x626e6520U
                                                   : 0x626c7420U)))))))
                                : ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                    ? 0x62676520U : 
                                   ((0x6063U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                     ? 0x626c7475U : 
                                    ((0x7063U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                      ? 0x62676575U
                                      : ((0xbU == (0x7fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x63757330U
                                          : 0x3f3f3f3fU))))))));
            VL_EXTEND_WI(4096,32, __Vtemp43, __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout);
            __Vilp = 0U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__41__str[__Vilp] 
                    = __Vtemp43[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    } else {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__43__num = 4U;
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__43__char = 0x20U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__43__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__43__char);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[0U] = 0x23U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__46__num = 3U;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__46__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__46__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__46__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M;
            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout 
                = (((((((((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                          | (0x1073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                         | (0x13U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                    | (0x4033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                    ? ((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                        ? 0x63737272U : ((0x1073U == 
                                          (0x707fU 
                                           & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x63737277U
                                          : ((0x13U 
                                              == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)
                                              ? 0x6e6f7020U
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x61646420U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x73756220U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x616e6420U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x6f722020U
                                                     : 0x786f7220U)))))))
                    : (((((((((0x2033U == (0xfe00707fU 
                                           & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                        | (0x2013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                        ? ((0x2033U == (0xfe00707fU 
                                        & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                            ? 0x736c7420U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                              ? 0x736c7475U
                                              : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x6d756c20U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x61646469U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x616e6469U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x6f726920U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x786f7269U
                                                      : 0x736c7469U)))))))
                        : (((((((((0x3013U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                            | (0x37U == (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                            ? ((0x3013U == (0x707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                ? 0x736c7449U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x73726120U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x73726c20U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x736c6c20U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x73726169U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x73726c69U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                       ? 0x736c6c69U
                                                       : 0x6c756920U)))))))
                            : (((((((((0x17U == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                | (0x4063U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                                ? ((0x17U == (0x7fU 
                                              & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                    ? 0x61756950U : 
                                   ((0x2003U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                     ? 0x6c772020U : 
                                    ((0x2023U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                      ? 0x73772020U
                                      : ((0x6fU == 
                                          (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x6a616c20U
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                              ? 0x6a616c72U
                                              : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x62657120U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x626e6520U
                                                   : 0x626c7420U)))))))
                                : ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                    ? 0x62676520U : 
                                   ((0x6063U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                     ? 0x626c7475U : 
                                    ((0x7063U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                      ? 0x62676575U
                                      : ((0xbU == (0x7fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x63757330U
                                          : 0x3f3f3f3fU))))))));
            VL_EXTEND_WI(4096,32, __Vtemp57, __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout);
            __Vilp = 0U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__47__str[__Vilp] 
                    = __Vtemp57[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    } else {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__49__num = 4U;
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__49__char = 0x20U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__49__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__49__char);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[0U] = 0x7cU;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[0U] = 0x23U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__52__num = 3U;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__52__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__52__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__52__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_W;
            __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout 
                = (((((((((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                          | (0x1073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                         | (0x13U == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                        | (0x33U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                      | (0x7033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                     | (0x6033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                    | (0x4033U == (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                    ? ((0x2073U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                        ? 0x63737272U : ((0x1073U == 
                                          (0x707fU 
                                           & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x63737277U
                                          : ((0x13U 
                                              == __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)
                                              ? 0x6e6f7020U
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x61646420U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x73756220U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x616e6420U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x6f722020U
                                                     : 0x786f7220U)))))))
                    : (((((((((0x2033U == (0xfe00707fU 
                                           & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                              | (0x3033U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                            | (0x13U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                           | (0x7013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                          | (0x6013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                         | (0x4013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                        | (0x2013U == (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                        ? ((0x2033U == (0xfe00707fU 
                                        & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                            ? 0x736c7420U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                              ? 0x736c7475U
                                              : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x6d756c20U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x61646469U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x616e6469U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x6f726920U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x786f7269U
                                                      : 0x736c7469U)))))))
                        : (((((((((0x3013U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                  | (0x40005033U == 
                                     (0xfe00707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                 | (0x5033U == (0xfe00707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                | (0x1033U == (0xfe00707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                              | (0x5013U == (0xfe00707fU 
                                             & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                             | (0x1013U == (0xfe00707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                            | (0x37U == (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                            ? ((0x3013U == (0x707fU 
                                            & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                ? 0x736c7449U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x73726120U
                                                  : 
                                                 ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x73726c20U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x736c6c20U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x73726169U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x73726c69U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                       ? 0x736c6c69U
                                                       : 0x6c756920U)))))))
                            : (((((((((0x17U == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                      | (0x2003U == 
                                         (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                     | (0x2023U == 
                                        (0x707fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                   | (0x67U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                  | (0x63U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                 | (0x1063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                | (0x4063U == (0x707fU 
                                               & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                                ? ((0x17U == (0x7fU 
                                              & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                    ? 0x61756950U : 
                                   ((0x2003U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                     ? 0x6c772020U : 
                                    ((0x2023U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                      ? 0x73772020U
                                      : ((0x6fU == 
                                          (0x7fU & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x6a616c20U
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                              ? 0x6a616c72U
                                              : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x62657120U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x626e6520U
                                                   : 0x626c7420U)))))))
                                : ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                    ? 0x62676520U : 
                                   ((0x6063U == (0x707fU 
                                                 & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                     ? 0x626c7475U : 
                                    ((0x7063U == (0x707fU 
                                                  & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                      ? 0x62676575U
                                      : ((0xbU == (0x7fU 
                                                   & __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x63757330U
                                          : 0x3f3f3f3fU))))))));
            VL_EXTEND_WI(4096,32, __Vtemp71, __Vfunc_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout);
            __Vilp = 0U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__53__str[__Vilp] 
                    = __Vtemp71[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    } else {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__55__num = 4U;
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__55__char = 0x20U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__55__num)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__append_chars__55__char);
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__96__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__109__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__111__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__113__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__115__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__96__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__108__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__109__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__111__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__113__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__115__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__str
                 ,"%x",64,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__rdy 
        = (1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__96__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__96__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__96__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__96__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__94__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[0U] = 0x28U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[0U] = 0x2aU;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__104__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    } else {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[0U] = 0x20U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__105__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[0U] = 0x29U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__106__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__str
                 ,"%x",32,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__rdy 
        = (1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__108__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__108__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__108__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__108__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__108__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__109__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__109__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__109__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__109__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__110__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__111__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__111__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__111__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__111__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__107__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__112__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__113__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__113__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__113__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__113__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__114__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__115__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__115__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__115__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__115__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__124__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__124__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__type_str 
        = ((0U == (7U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U] 
                         >> 0xaU))) ? 0x7264U : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U] 
                                                      >> 0xaU)))
                                                  ? 0x7772U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U] 
                                                       >> 0xaU)))
                                                   ? 0x776eU
                                                   : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__rdy 
        = vlTOPp->imem___05Freqstream___05Frdy;
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_reqstream_val;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__116__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__123__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__124__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__124__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__124__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__124__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__127__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__129__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__131__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__133__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__126__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__127__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__129__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__131__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__133__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str 
        = ((0U == (7U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                         >> 0xaU))) ? 0x7264U : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                                                      >> 0xaU)))
                                                  ? 0x7772U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                                                       >> 0xaU)))
                                                   ? 0x776eU
                                                   : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__rdy 
        = vlTOPp->dmem___05Freqstream___05Frdy;
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_reqstream_val;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__126__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__127__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__127__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__127__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__127__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__129__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__129__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__129__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__129__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__125__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__131__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__131__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__131__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__131__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__132__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__133__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__133__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__133__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__133__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__142__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__142__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__type_str 
        = ((0U == (7U & (IData)((vlTOPp->imem___05Frespstream___05Fmsg 
                                 >> 0x2cU)))) ? 0x7264U
            : ((1U == (7U & (IData)((vlTOPp->imem___05Frespstream___05Fmsg 
                                     >> 0x2cU)))) ? 0x7772U
                : ((2U == (7U & (IData)((vlTOPp->imem___05Frespstream___05Fmsg 
                                         >> 0x2cU))))
                    ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__rdy 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_imem_respstream_rdy;
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__val 
        = vlTOPp->imem___05Frespstream___05Fval;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__134__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__141__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__142__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__142__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__142__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__142__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__145__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__147__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__149__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__151__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__144__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__145__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__147__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__149__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__151__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__type_str 
        = ((0U == (7U & (IData)((vlTOPp->dmem___05Frespstream___05Fmsg 
                                 >> 0x2cU)))) ? 0x7264U
            : ((1U == (7U & (IData)((vlTOPp->dmem___05Frespstream___05Fmsg 
                                     >> 0x2cU)))) ? 0x7772U
                : ((2U == (7U & (IData)((vlTOPp->dmem___05Frespstream___05Fmsg 
                                         >> 0x2cU))))
                    ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__str
                 ,"%s",16,vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__type_str);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__rdy 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_dmem_respstream_rdy;
    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__val 
        = vlTOPp->dmem___05Frespstream___05Fval;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__144__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__144__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__144__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__144__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__144__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__145__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__145__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__145__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__145__char);
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__146__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__147__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__147__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__147__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__147__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__143__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__148__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__149__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__149__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__149__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__149__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__150__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__151__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__151__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__151__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__151__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__155__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__157__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__159__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__161__char;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__166__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__168__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__170__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__172__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__154__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__155__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__157__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__159__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__161__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__165__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__166__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__168__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__170__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__172__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                                                        >> 0x25U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                       >> 0x25U)))) {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:%x",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                                         >> 0x20U))),
                     32,(IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg));
    } else {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:        ",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                                         >> 0x20U))));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__rdy 
        = vlTOPp->ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy;
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__154__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__154__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__154__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__154__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__154__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__155__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__155__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__155__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__155__char);
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__156__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__157__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__157__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__157__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__157__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__153__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__158__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__159__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__159__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__159__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__159__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__160__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__161__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__161__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__161__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__161__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[0U] = 0x2829U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__append_str__162__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__rdy 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy;
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__165__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__165__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__165__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__165__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__165__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__166__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__166__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__166__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__166__char);
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__167__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__168__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__168__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__168__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__168__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__164__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__169__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__170__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__170__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__170__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__170__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__171__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__172__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__172__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__172__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__172__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__175__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__177__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__179__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__181__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__174__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__175__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__177__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__179__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__181__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                                                        >> 0x25U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                       >> 0x25U)))) {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:%x",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                                         >> 0x20U))),
                     32,(IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg));
    } else {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:        ",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
                                         >> 0x20U))));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__rdy 
        = vlTOPp->ProcXcel_null_rtl__DOT__xcel_xcel_reqstream_rdy;
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_reqstream_val;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__174__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__174__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__174__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__174__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__174__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__175__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__175__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__175__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__175__char);
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__176__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__177__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__177__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__177__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__177__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__173__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__178__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__179__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__179__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__179__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__179__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__180__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__181__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__181__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__181__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__181__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VProcXcel_null_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::__Vdpiexp_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__val;
    CData/*0:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__184__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__186__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__188__char;
    CData/*7:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__190__char;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__183__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__184__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__186__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__188__num;
    WData/*4095:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__190__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__str[__Vilp] 
            = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__rdy 
        = vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy;
    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__val 
        = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__rdy) 
         & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__183__str[__Vilp] 
                = __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__183__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__183__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__183__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__183__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__val)))) {
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__184__num 
                = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__184__char = 0x20U;
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__184__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__184__char);
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__rdy)) 
                 & (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__val))) {
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__185__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__186__num 
                    = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__186__char = 0x20U;
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__186__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__186__char);
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__182__val))))) {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__187__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__188__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__188__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__188__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__188__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__189__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__190__num 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__190__char = 0x20U;
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__190__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__190__char);
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_null_rtl::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VProcXcel_null_rtl__Vcb_line_trace_t __Vcb = (VProcXcel_null_rtl__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VProcXcel_null_rtl__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VProcXcel_null_rtl::_sequent__TOP__2(VProcXcel_null_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_null_rtl::_sequent__TOP__2\n"); );
    VProcXcel_null_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    CData/*4:0*/ __Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    IData/*31:0*/ __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    WData/*95:0*/ __Vtemp315[3];
    WData/*95:0*/ __Vtemp316[3];
    WData/*76:0*/ __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[3];
    // Body
    __Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0U;
    if (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U];
    }
    if (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg;
    }
    if (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X;
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X);
    }
    if (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W;
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr = 0U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full = 0U;
    } else {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr 
            = (1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next));
    }
    if (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))) {
        __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[0U];
        __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[1U];
        __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[2U];
        __Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr;
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state));
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D);
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_X;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D);
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if (((IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
                  >> 0x25U)) & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                                & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_xcel_respstream_rdy)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xr0 
            = (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out 
            = (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D);
    }
    if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out 
            = (IData)((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D 
                       >> 0x20U));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out 
            = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D)));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_W 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M;
        }
    }
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_wen_W) {
        __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W;
        __Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W;
    }
    if (((IData)(vlTOPp->reset) | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                                   & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W);
    }
    if (__Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__Vdlyvset__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vdlyvdim0__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0] 
            = __Vdlyvval__ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr 
        = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D;
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_D))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F);
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x20ffffffffULL & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | ((QData)((IData)((0x1fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))) 
              << 0x20U));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x3f00000000ULL & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X)));
    if ((8U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
        if ((4U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X);
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                        = (0xfffffffeU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X);
                } else {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                        = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X;
                }
            }
        } else {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                = ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X
                        : VL_SHIFTRS_III(32,32,5, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))
                        : (~ (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                              | vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))));
        }
    } else {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
            = ((4U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           ^ vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           < vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : VL_LTS_III(32,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           | vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           << (0x1fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           - vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))));
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x1fffffffffULL & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | ((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X)) 
              << 0x25U));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X;
        }
    }
    if (vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) {
        vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg;
    }
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X 
                = (3U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X 
        = ((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out 
            * vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M;
        }
    }
    vlTOPp->stats_en = (0U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W);
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W))))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_M;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W 
                = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
                   & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)));
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
              == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_F))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F 
            = ((IData)(vlTOPp->reset) ? 0x1fcU : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
        = ((0xffffffffULL & vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
                                             >> 0x25U))))) 
              << 0x20U));
    vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
        = ((0x100000000ULL & vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg) 
           | (IData)((IData)(((1U & (IData)((vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
                                             >> 0x25U)))
                               ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__xcel__DOT__v__DOT__xr0))));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D;
        }
    }
    __Vtemp315[0U] = (IData)((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data)));
    __Vtemp315[1U] = ((0xfffffffcU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                                      << 2U)) | (IData)(
                                                        ((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data)) 
                                                         >> 0x20U)));
    __Vtemp315[2U] = (3U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                            >> 0x1eU));
    VL_EXTEND_WW(74,66, __Vtemp316, __Vtemp315);
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U] 
        = __Vtemp316[0U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U] 
        = __Vtemp316[1U];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0xfffffc00U & (((2U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X))
                             ? 1U : 0U) << 0xaU)) | 
           __Vtemp316[2U]);
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X 
        = ((0U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X))
            ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X
            : ((1U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X))
                ? ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__dpath__DOT__qstore
                    : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)
                        ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X))
                : ((2U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X))
                    ? ((IData)(4U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_X)
                    : 0U)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_M 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_X;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
            & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M 
                = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
                   & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)));
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X 
                = (0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                            >> 7U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_X 
                = vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D;
        }
    }
    vlTOPp->commit_inst = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                           & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val 
        = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
            & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W))) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X 
                = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                    & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
                   & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D)));
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val));
    vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_D))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
            = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->imem___05Frespstream___05Fmsg));
    }
    vlTOPp->proc2mngr___05Fval = vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val;
    vlTOPp->proc2mngr___05Fmsg = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                    ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                    : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? 0U : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W)) 
                                  & (- (IData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc_proc2mngr_val))));
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D = 0U;
    } else {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_D) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D 
                = (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
                    & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F))) 
                   & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)));
        }
    }
    vlTOPp->__Vtableidx1 = (((vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                              == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X) 
                             << 6U) | ((VL_LTS_III(1,32,32, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X, vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X) 
                                        << 5U) | ((
                                                   (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                                                    < vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
        = vlTOPp->__Vtable1_ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X
        [vlTOPp->__Vtableidx1];
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
           & ((((0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)) 
                & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X) 
                  & (~ (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X)))) 
              | ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X) 
                 & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full))));
    if (((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D 
            = ((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 0xcU : ((0x2073U 
                                             == (0x707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                             ? 0xcU
                                             : ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                 ? 0xbU
                                                 : 
                                                ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                  ? 0U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 1U
                                                   : 0U)))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                  & ((0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                     | ((0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        | (0x1073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
            = ((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 2U : 0U)));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D 
            = ((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 0U : ((0x2073U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 0U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 0U
                                                      : 1U)))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D 
            = ((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 1U : 0U));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_sel_D 
            = ((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 1U : ((0x2073U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 2U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 0U)))));
    } else {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? ((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                    ? 6U : ((0x6033U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                             ? 3U : ((0x4033U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 7U : ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 4U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 5U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0xaU
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 9U
                                                     : 2U)))))))
                : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          | (0x7013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x2013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x40005013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                    ? ((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                 ? 6U : ((0x6013U == 
                                          (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                          ? 3U : ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 7U
                                                   : 
                                                  ((0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 4U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 5U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 0xaU
                                                      : 9U)))))))
                    : (((((((((0x1013U == (0xfe00707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                              | (0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2003U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                        ? ((0x1013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                            ? 2U : ((0x37U == (0x7fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                     ? 0xcU : 0U)) : 
                       ((0x6063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x5063U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 0U : ((0x7063U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 0U : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0xdU
                                                     : 0U))))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | (0x7013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x6013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (((((((((0x1013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                      ? ((0x1013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | ((0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x2003U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))
                      : ((0x6063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         & ((0x5063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            & ((0x7063U != (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               & ((0x6fU == (0x7fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                  | (0x67U == (0x707fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 0U))))
                                  : 0U)));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? 0U : ((0x6063U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 0U : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 2U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 2U
                                                       : 0U))))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 4U
                                                       : 2U)))))))
                                  : ((0x6063U == (0x707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 3U : ((0x5063U 
                                               == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 5U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 6U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 7U
                                                     : 0U))))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 2U
                                                     : 0U)))))
                                  : 0U)));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_sel_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 1U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 1U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 1U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 1U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 1U
                                                     : 0U)))))
                                  : ((0x6063U == (0x707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x5063U 
                                               == (0x707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 1U
                                                     : 0U))))))));
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_sel_D 
        = ((~ ((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                     | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x7e002073U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
           & ((~ ((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        | (0x6033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
              & ((~ ((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                           | (0x7013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x6013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x4013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x2013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                 & (((((((((0x1013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                           | (0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2003U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x2023U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    & ((0x1013U != (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & ((0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))))))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           & ((0x13U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
              & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                 & ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                    & ((0x2073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D 
        = (((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
            ? ((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 2U : 0U)) : (((((((((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                               | (0x6033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                              | (0x4033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                             | (0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                            | (0x3033U 
                                               == (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                          | (0x5033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                         | (0x1033U 
                                            == (0xfe00707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                         ? 0U : (((
                                                   ((((((0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                                        | (0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                       | (0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                      | (0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                     | (0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                    | (0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                                  ? 0U
                                                  : 
                                                 (((((((((0x1013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                       | (0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                      | (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                     | (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                    | (0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                   | (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                                   ? 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 3U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 3U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 0U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                        ? 1U
                                                        : 2U)))))
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 2U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 2U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 2U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 4U
                                                       : 0U))))))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__jal_D 
        = ((~ ((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                     | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x7e002073U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
           & ((~ ((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        | (0x6033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
              & ((~ ((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                           | (0x7013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x6013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x4013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x2013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                 & ((~ ((((((((0x1013U == (0xfe00707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                              | (0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2003U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                    & ((0x6063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & ((0x5063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          & ((0x7063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                             & (0x6fU == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D 
        = (((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           & ((0x13U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
              & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                 & ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                    & ((0x2073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & ((0x1073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          & ((0x33U != (0xfe00707fU 
                                        & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                             & (0x40000033U != (0xfe00707fU 
                                                & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
    if (((((((((0x13U == vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               & ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                  | ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                     & (0x2073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               & ((0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                  | ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                     & ((0x2073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        & (0x1073U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D 
            = (((0x13U != vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                   & ((0x7e002073U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x2073U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))))) 
               & 1U);
    } else {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | (0x7013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x6013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (((((((((0x1013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                      ? ((0x1013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x37U != (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            & (0x17U != (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))))
                      : ((0x6063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x5063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | ((0x7063U == (0x707fU 
                                            & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | ((0x6fU != (0x7fU 
                                             & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                  & (0x67U == (0x707fU 
                                               & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | ((~ ((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x7013U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x6013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x4013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x3013U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x40005013U == (0xfe00707fU 
                                          & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                  & (((((((((0x1013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x37U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                      ? ((0x1013U != (0xfe00707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         & ((0x37U != (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            & ((0x17U != (0x7fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               & (0x2003U != (0x707fU 
                                              & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))
                      : ((0x6063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x5063U == (0x707fU & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x7063U == (0x707fU 
                                           & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)))))));
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F = 0U;
    } else {
        if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__reg_en_F) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F = 1U;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U == (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0x7c1U == (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 1U;
            }
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D 
        = ((4U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
            ? ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                ? 0U : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                         ? 0U : ((0xfff00000U & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                                >> 0x1fU)))) 
                                                 << 0x14U)) 
                                 | ((0xff000U & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                                    | ((0x800U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                  >> 9U)) 
                                       | ((0x7e0U & 
                                           (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                >> 0x14U))))))))
            : ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                    ? (0xfffff000U & vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D)
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                   << 4U)) | ((0x7e0U 
                                               & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                    >> 7U))))))
                : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                    ? ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       ((0x7e0U & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                    >> 7U))))
                    : ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       (0x7ffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U))))));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__jal_D));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D) {
        if (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
               & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                            >> 0xfU)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
              & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
             & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 1U;
        } else {
            if (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
                   & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                >> 0xfU)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                  & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                 & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 2U;
            } else {
                if (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                       & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0xfU)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                      & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                     & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_wen_W))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 3U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D) {
        if (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
               & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                            >> 0x14U)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
              & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
             & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 1U;
        } else {
            if (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
                   & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                >> 0x14U)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                  & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                 & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 2U;
            } else {
                if (((((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                       & ((0x1fU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0x14U)) == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                      & (0U != (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                     & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__rf_wen_W))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 3U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0xfc1U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                if ((0xf14U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                          >> 0x14U)))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = 0U;
                }
            }
        }
    }
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0x7c1U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = 1U;
            }
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0xfc1U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                if ((0xf14U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                          >> 0x14U)))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = 1U;
                }
            }
        }
    }
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0x7c1U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = 1U;
            }
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U != (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0xfc1U == (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = 1U;
            } else {
                if ((0xf14U == (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                          >> 0x14U)))) {
                    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = 2U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U == (0xfffU & (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
        }
    }
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D 
           + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D);
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F 
        = ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
            ? ((7U == (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X))
                ? 3U : 1U) : ((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D)
                               ? 2U : 0U));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
            ? ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X
                : vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F)));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[0U] = 0U;
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[1U] 
        = (0xfffffffcU & ((IData)((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F))) 
                          << 2U));
    vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[2U] 
        = ((3U & ((IData)((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((QData)((IData)(vlTOPp->ProcXcel_null_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F)) 
                                                        >> 0x20U)) 
                                               << 2U)));
}
